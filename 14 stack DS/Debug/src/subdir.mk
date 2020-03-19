################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/14\ stack\ DS.cpp 

OBJS += \
./src/14\ stack\ DS.o 

CPP_DEPS += \
./src/14\ stack\ DS.d 


# Each subdirectory must supply rules for building sources it contributes
src/14\ stack\ DS.o: ../src/14\ stack\ DS.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/14 stack DS.d" -MT"src/14\ stack\ DS.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


