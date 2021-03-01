#include <stdio.h>
#include <stdlib.h> //atoi

int getint(void){
 int ch,n,num=0;
 
  for(n=2;n>0 && (ch=getchar())!='\n';n--){  
      ch=ch-48;
      num=(num*10)+ch;
  }  
 
 return num;	
}	

void recursion(int a, int b, int limit)
{ 
	int temp;
	
	if(limit > 0){
		temp=b; //trasnfer values of old b
		b=a+b; //new value of b
		a=temp; //old value of b goes to a
		printf("%d ", b);
		recursion(a,b,limit-1);
	}
	else
	    printf("\n"); 
		return;
}	

void fibonacci(int a,int b,int limit){
   
   printf("%d ",a);
   printf("%d ",b);
   recursion(a,b,limit-2);
	
}	

int main(void)
{
   /*This is a fibonacci program*/
   /*user will define the first two numbers*/
   /*user will define the limit of the fibonacci*/
   
   int a,b,limit;
   
   printf("Enter number for first input: ");
   a=getint();
   printf("Enter number for second input: ");
   b=getint();
   printf("Enter number for fibonacci limit: ");
   limit=getint();
   printf("Values for a: %d, b: %d, limit: %d\n", a,b,limit);
   
   fibonacci(a,b,limit);
	
	return 0;
}

