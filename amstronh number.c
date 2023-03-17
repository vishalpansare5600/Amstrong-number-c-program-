#include<stdio.h>
#include<conio.h>
 void main()
 {
 	
 	int n,r,num,sum=0,temp;
 	
 	printf("enter the number=");
 	scanf("%d",&num);
 	temp=n;
 	while(n>0)
 	
 	{
 		
 		r=n%10;
 		sum=sum+(r*r*r);
 		n=n/10;
	 }
	 if(temp==sum)
	 printf("amstrong number");
	 
	 else
	 
	 printf("not amstrong number");
	 
	 return (0);
	 getch();
	 
 }
