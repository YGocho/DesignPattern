################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CommandPattern.cpp \
../src/SysCommand_print.cpp \
../src/SysCommand_print2.cpp \
../src/SysMacroCommand.cpp 

OBJS += \
./src/CommandPattern.o \
./src/SysCommand_print.o \
./src/SysCommand_print2.o \
./src/SysMacroCommand.o 

CPP_DEPS += \
./src/CommandPattern.d \
./src/SysCommand_print.d \
./src/SysCommand_print2.d \
./src/SysMacroCommand.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


