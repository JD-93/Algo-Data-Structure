################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/09\ insertion\ sort.cpp 

OBJS += \
./src/09\ insertion\ sort.o 

CPP_DEPS += \
./src/09\ insertion\ sort.d 


# Each subdirectory must supply rules for building sources it contributes
src/09\ insertion\ sort.o: ../src/09\ insertion\ sort.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/09 insertion sort.d" -MT"src/09\ insertion\ sort.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


