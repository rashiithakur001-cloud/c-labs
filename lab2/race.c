#include<stdio.h>
#include<math.h>
int main(){
    //distance is 10 km
    //time take is 43 min and 30 seconds which is 0.725 hours
    float a=((0.725)/10); //Average time per km 
    float b=(10/(0.725)); //average speed in km/h
    printf("the average time per km is:%f \n",a);
    printf("the average spped in km/h is:%f",b);
    return 0;
}
