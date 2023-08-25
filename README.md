# O_PROJETO_FW_TB6612FNG

// Library to control the TB6612 H bridge it has 3 control pins, A,B and PWM. 
// You need the A,B to control direction and PWM to control speed
// STD is always HIGH, this class dosnt suport it by code 
// The conection should be 

///       - PWMA         VM -  MOTOR Voltage - > 12 V
//        - AIN2         VCC - Logic Voltage -> 3.3 V
//        - AIN1         GND - 
//   3.3V - STBY         AO1 - MOTOR A
//        - BIN1         AO2-  MOTOR A 
//        - BIN2         B02 - MOTOR B 
//        - PWMB         B01 - MOTOR B
//        - GND          GND

# How to use 
## init object 

resolution_channel is the resolution for the signal bigger is better, best is 10 
channel starts at 0 and go up, each motor need its only channel 

Motor rightMotor = Motor(BIN1, BIN2, PWMB,  channel, resolution_channel);

## write to motor 


 rightMotor.drive(k)

 k is the speed goes from  - 1000 to 1000 the signal indicates direction 
