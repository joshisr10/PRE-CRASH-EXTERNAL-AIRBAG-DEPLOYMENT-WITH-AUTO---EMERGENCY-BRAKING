#include "LidarLitev2.h"
 
 
LidarLitev2 Lidar(PTE25, PTE24);
Serial pc(USBTX,USBRX);
Serial device(PTC17, NC);
 
Timer dt;
 
int main()
{   
    
    pc.baud(115200);
    device.baud(115200);
    Lidar.configure();
    dt.start();
 
    while(1){
         pc.printf( "distance (control motor speed)=%d cm\t",Lidar.distance());
       //device.printf( "%d" ,Lidar.distance());
         //int temp=Lidar.distance();
         wait_ms(100);
          //pc.printf("%d\n",temp);
         
         dt.reset();
         if(Lidar.distance()>20 and Lidar.distance()<=90)
         {
         device.printf("1"); 
         pc.printf("case: 1\r\n");   
        }
        
        else if (Lidar.distance()>90 and Lidar.distance()<=700)
         {
         device.printf("2"); 
         pc.printf("case: 2\r\n");   
        }
        
         else
         {
             device.printf("0");
               pc.printf("case: 0 and Airbag Deployed\r\n");  
             }
         
}
}
