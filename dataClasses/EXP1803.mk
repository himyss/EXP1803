################################################################################
# EXP1803 input with some variables
################################################################################

EXP1803LIBS := -lCore -lCling -lRIO -lTree -lNet -lThread -lHist -lMatrix -lMathCore -lGpad -lGraf -lSpectrum

# Add inputs and outputs from these tool invocations to the build variables 
EXP1803_HEADERS += \
$(EXP1803)/analyseRaw.h \
$(EXP1803)/linkdef.h

EXP1803CPP_SRCS += \
$(EXP1803)/analyseRaw.cpp \
$(EXP1803)/EXP1803Cint.cpp

EXP1803OBJS += \
$(EXP1803)/analyseRaw.o \
$(EXP1803)/EXP1803Cint.o

EXP1803CPP_DEPS += \
$(EXP1803)/analyseRaw.d \
$(EXP1803)/EXP1803Cint.d
