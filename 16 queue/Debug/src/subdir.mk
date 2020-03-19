################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/16\ queue.cpp 

OBJS += \
./src/16\ queue.o 

CPP_DEPS += \
./src/16\ queue.d 


# Each subdirectory must supply rules for building sources it contributes
src/16\ queue.o: ../src/16\ queue.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/16 queue.d" -MT"src/16\ queue.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


