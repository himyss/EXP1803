################################################################################
# Makefile building all dynamic libraries:
# libCalib.so
#
#	OBJS - files type *.o (subdir.mk)
#	LIBS - list of the loaded libraries (objects.mk)
#	RM - command "rm -rf"
#	CPP_DEPS - files type *.d (subdir.mk)
#	.PHONY - 
#	.SECONDARY - 
#	
# Vratislav Chudoba
################################################################################

RM := rm -rf

CC := g++

#global paths
ROOTINCS = $(shell root-config --incdir)
ROOTLIBS = $(shell root-config --libdir)
ROOTCFLAGS = $(shell root-config --cflags)
PWD = $(shell pwd)
#INSTALLFOLDER = $(HOME)/AculLib

EXP2018 = $(PWD)/dataClasses

-include $(EXP2018)/EXP2018.mk

all: libEXP2018.so 

clean:
	-$(RM) $(EXP2018OBJS) $(EXP2018CPP_DEPS)
	-$(RM) $(EXP2018)/EXP2018Cint.*
	-$(RM) libEXP2018.so
	-@echo ' '

 Those *Cint* files below need special treating:
$(EXP2018)/EXP2018Cint.cpp:
	-@echo 'Pre-building EXP2018Cint.cpp and analyseRaw.h files'
	-rootcint -f $(EXP2018)/EXP2018Cint.cpp -c -p $(EXP2018_HEADERS)
	-@echo ' '

#*.so files
libEXP2018.so: $(EXP2018OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C++ Linker'
	$(CC) -L . -L $(ROOTLIBS) -shared -o"libEXP2018.so" $(EXP2018OBJS) $(EXP2018LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

.PHONY: all clean
#.SECONDARY: EXP2018_pre-build TELoss_pre-build Detectors_pre-build libEXP2018.so libTELoss.so libDetectors.so

# Each subdirectory must supply rules for building sources it contributes
%.o: %.cpp
	@echo 'Building file: $@'
	@echo 'Invoking: $(CC) Compiler'
	$(CC) -I$(ROOTINCS) -O0 -g3 -Wall -c -fmessage-length=0 -fPIC $(ROOTCFLAGS) -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
#	$(CC) -I$(ROOTINCS) -O2 -Wall -mmmx -msse -msse2 -msse3 -mfpmath=sse,387 -march=nocona -mtune=nocona -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $@'
	@echo ' '

