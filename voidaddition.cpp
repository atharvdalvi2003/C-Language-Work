#include<stdio.h>
void addition(); //prototype of function
int main(){
	
	addition(); //calling the function implicit declaration
	
}
void addition(){
	
    int number, number2;
    printf("enter any number:");
    scanf("%d",&number);
    printf("enter any number for 2nd variable:");
    scanf("%d" ,&number2);
	int result=number2+number;
	printf("Addition = %d ", result); 
}
