#include<stdio.h>
int main()
{
 int age;
 printf("enter your age : ");
 scanf("%d",&age);  
 if(age>=18 && age<=60)
 {
  printf("your eligible\n");
 } 
 else
 {
  printf("sorry your not eligible\n");
 }  
 return 0;
}
