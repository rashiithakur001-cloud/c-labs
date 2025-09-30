#include<stdio.h>
int main(){
int length , width;
printf("Enter the length");
scanf("%d", &length);
printf("Enter the width");
scanf("%d", &width);

printf("l/3: %d,\n", length/3);
printf("w/2 : %d,\n",width /2);
printf("l/3.0 : %f,\n",length /3.0);
printf("l/w: %d,\n",length / width);
printf("(w+l)/l>l/w : %d,\n",(width+length)/length>length/width);
return 0;
}