# PRE-CRASH-EXTERNAL-AIRBAG-DEPLOYMENT-WITH-AUTO---EMERGENCY-BRAKING
An implementation of Pre-crash External Airbag deployment with Auto - Emergency braking using online mbed and Model Based Design Tool (MBDT) platforms.

Objectives
1. Interfacing Lidar V3HP with K64F using mbed online.
2. Calibrating motor drives with Slave S32K144 EVB board.
3. Testing the system for different scenarios (test cases 0,1,2)
4. This system aims at developing a model consisting of a Lidar sensor that will determine distance and control motor speed for immediate anti - braking conditions. Also demonstrate Flex CAN handling capabilities of S32K144 EVB Boards to manipulate the incoming data traffic and thereby control motor speed.
https://www.repairerdrivennews.com/2018/12/07/zf-talks-future-of-airbags-including-exterior-side-units/


The project setup consists of -
1. Lidar Sensor interfaced with K64f using I2C protocol
2. Data received through Lidar is sent to Master EVB through UART and observed on Tera Term on PTD 6
3. Master communicated to Slave EVB through CAN protocol and motor on Slave side id controlled for our devised test cases

The Logic responds to three test cases:
1. Case 0: Airbag Deployed - This is when crash distance is minimal (about 20 cm)
2. Case1: Automatic Braking will be applied (about 30 cm)
3. Case 2: Motor will run with its normal speed.
Link to Online MBED compiler:
https://os.mbed.com/users/Sanketrj/code/Lidar_UART_Airbagdeployment/file/43e6d9eece03/main.cpp/


for MBDT Files:
MASTER: download file --> Lidar_based_Motor_Control_Master.slx
SLAVE: download file --> 
