################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ConcreateSubject.cpp \
../src/ConcreateSysObserver.cpp \
../src/VirtualFunc.cpp \
../src/main.cpp 

OBJS += \
./src/ConcreateSubject.o \
./src/ConcreateSysObserver.o \
./src/VirtualFunc.o \
./src/main.o 

CPP_DEPS += \
./src/ConcreateSubject.d \
./src/ConcreateSysObserver.d \
./src/VirtualFunc.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


