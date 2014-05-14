################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../DataStore.cpp \
../EntityManager.cpp \
../MySQLEntity.cpp \
../MySQLEntityCollection.cpp \
../SQLSession.cpp \
../main.cpp 

OBJS += \
./DataStore.o \
./EntityManager.o \
./MySQLEntity.o \
./MySQLEntityCollection.o \
./SQLSession.o \
./main.o 

CPP_DEPS += \
./DataStore.d \
./EntityManager.d \
./MySQLEntity.d \
./MySQLEntityCollection.d \
./SQLSession.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


