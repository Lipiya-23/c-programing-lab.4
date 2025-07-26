#include<stdio.h>
 //Function for call by value_type
 void swapValue(int a,int b){
     int temp;
     temp=a;
     a=b
     b=temp;
     printf("inside swapValue-a:%d,b:%d\n",a,b);
 }
 //Function for call by reference
 void swapRef(int*a,int*b){
     int temp=*a;
     temp=*a
     *a=*b;
     *b=temp;
     //Swaps actual variables using pointers
 }
 int main()
 int x,y;
 printf("Enter two numbers:");
 scanf("%d%d",&x,&y);
 printf("\n---before swap--\n");
 printf("x:%d,y:%d\n",x,y);
 //call-by-value:value won't actually swap in main swapValue(x,y);
 printf("After swapValue (call-by-value):x:%d,y:%d\n",x,y);
 //can-by-reference:values will swap in main swapRef (&x,&y);
 printf("After swapRef (call-by-reference);
 return 0;
 }
