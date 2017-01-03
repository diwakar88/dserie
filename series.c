/*
Name:Diwakar kandel
Roll No:07
Subject:programming fundamental
program:WAP to display first 'n' terms of fibonacci series.
Date:
*/
#include<stdio.h>
int main()
{
 int a=1,b=1,sum,i;
 for(i=1;i<9;i++)
 {
 sum=a+b;
 printf("\n %d",b);
 
 a=b;
 b=sum;
 printf("\n");
 }
return 0;
}
 
 
