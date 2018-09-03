################################################################################
# EXP2018 input with some variables
################################################################################

EXP2018LIBS := -lCore -lCling -lRIO -lTree -lNet -lThread -lHist -lMatrix -lMathCore -lGpad -lGraf -lSpectrum

# Add inputs and outputs from these tool invocations to the build variables 
EXP2018_HEADERS += \
$(EXP2018)/analyseRaw.h \
$(EXP2018)/linkdef.h

EXP2018CPP_SRCS += \
$(EXP2018)/analyseRaw.cpp \
$(EXP2018)/EXP2018Cint.cpp

EXP2018OBJS += \
$(EXP2018)/analyseRaw.o \
$(EXP2018)/EXP2018Cint.o

EXP2018CPP_DEPS += \
$(EXP2018)/analyseRaw.d \
$(EXP2018)/EXP2018Cint.d
