#include <stdio.h>

int main(){
	int a = 30 , d = -40 ,userinput1;
	int x, y , sum = 0;
	char c [6]  = "Rameel";
	float b = 2.3;
	int e = 10;
	float f = 5.6;
	char ch = 'F';
	printf("Moshi Moshhh! Orewa MONKEY D LUFFY\n");
	printf("Printing Decimal Data : %d\n",a);
	printf("Printig Integer Data : %i\n", d);
	printf("Printing Floating point value : %f\n", b);
	printf("Printing Floating point Fixed value : %g\n", f);
	printf("Printing String :%s\n",c);
	printf("Printing Exponential :%e\n",e);
	printf("Printing Octal Number : %o\n",a);
	printf("Printing Hexadecimal : %x\n",a);
	printf("Printing Character Data : %c\n",ch);
	printf("Shift to right 10 characters : %10s\n",c); 
	
	printf("Enter a Number :");
	scanf("%d", &userinput1);
	printf("The Entered Number is : %d\n", userinput1);
	
	printf("Enter First Number: ");
	scanf("%d", &x);
	printf("Enter Second Number: ");
	scanf("%d", &y);
	sum = x + y;
	printf("The Sum of Numbers is %d\a", sum);
	return 0;
	
}
