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

EXP1803 = $(PWD)/dataClasses

-include $(EXP1803)/EXP1803.mk

all: libEXP1803.so 

clean:
	-$(RM) $(EXP1803OBJS) $(EXP1803CPP_DEPS)
	-$(RM) $(EXP1803)/EXP1803Cint*
	-$(RM) libEXP1803.so
	-@echo ' '

 Those *Cint* files below need special treating:
$(EXP1803)/EXP1803Cint.cpp:
	-@echo 'Pre-building EXP1803Cint.cpp and analyseRaw.h files'
	-rootcint -f $(EXP1803)/EXP1803Cint.cpp -c -p $(EXP1803_HEADERS)
	-@echo ' '

#*.so files
libEXP1803.so: $(EXP1803OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C++ Linker'
	$(CC) -L . -L $(ROOTLIBS) -shared -o"libEXP1803.so" $(EXP1803OBJS) $(EXP1803LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

.PHONY: all clean
#.SECONDARY: EXP1803_pre-build TELoss_pre-build Detectors_pre-build libEXP1803.so libTELoss.so libDetectors.so

# Each subdirectory must supply rules for building sources it contributes
%.o: %.cpp
	@echo 'Building file: $@'
	@echo 'Invoking: $(CC) Compiler'
	$(CC) -I$(ROOTINCS) -O0 -g3 -Wall -c -fmessage-length=0 -fPIC $(ROOTCFLAGS) -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
#	$(CC) -I$(ROOTINCS) -O2 -Wall -mmmx -msse -msse2 -msse3 -mfpmath=sse,387 -march=nocona -mtune=nocona -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $@'
	@echo ' '

