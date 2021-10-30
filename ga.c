#include<stdio.h>
void main()
{   
   // variables 
   int num1 , num2, num3, sum;
   int person1,person2,person3,add;
   int student1,student2,subtract; 
   //initialization
   num1=455;
   num2=796;
   num3=785;
   person1=589;
   person2=895;
   person3=900;
   student1=1000;
   student2=500;
   // calculation
     sum =num1 +num2+num3;
     add=person1+person2+person3;
     subtract=student1-student2;
     //out put
       printf("sum of %d,%d and %d is %d\n",num1,num2,num3, sum);
       printf("sum of %d,%d and %d  is %d\n", person1,person2,person3, add);
       printf("sum of %d, and %d is %d",student1,student2,subtract);
}
