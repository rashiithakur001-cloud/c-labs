#include<stdio.h>
enum TrafficLight {RED=1,YELLOW,GREEN};
int main() {
   enum TrafficLight signal;
   printf("Enter the number for trafficlight color (1 for RED, 2 for YELLOW, 3 for GREEN): ");
    scanf("%d", &signal);
 switch (signal) {
 case RED: printf(" Red Light : Stop\n");
   break;
 case YELLOW: printf(" Yellow Light : Ready\n");
   break;
 case GREEN: printf(" Green Light : Go\n");
   break;
 default: printf("Invalid color \n");
  }
 return 0;
}