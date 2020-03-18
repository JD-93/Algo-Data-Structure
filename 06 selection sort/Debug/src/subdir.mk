################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/06\ selection\ sort.cpp 

OBJS += \
./src/06\ selection\ sort.o 

CPP_DEPS += \
./src/06\ selection\ sort.d 


# Each subdirectory must supply rules for building sources it contributes
src/06\ selection\ sort.o: ../src/06\ selection\ sort.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/06 selection sort.d" -MT"src/06\ selection\ sort.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


