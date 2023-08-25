# O_PROJETO_FW_TB6612FNG

This lib works for TB6612FNG 

# How to use 
## init object 

resolution_channel is the resolution for the signal bigger is better, best is 10 
channel starts at 0 and go up, each motor need its only channel 

Motor rightMotor = Motor(BIN1, BIN2, PWMB,  channel, resolution_channel);

## write to motor 


 rightMotor.drive(k)

 k is the speed goes from  - 1000 to 1000 the signal indicates direction 
