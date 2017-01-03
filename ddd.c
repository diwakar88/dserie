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
 int a=1,b=1,n,sum;
 printf("\n Enter any nos");
 scanf(" %d",&n);
 do
 {
   sum=a+b;
   printf("\n %d",a);
   a=b;
   b=sum;
   n--;
   }
   while(n>=0);
   return 0;
 }
