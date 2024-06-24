#include<stdio.h>
int main(){
	int a=101,b=201,c=301;
	if(a==100){
		

		if(b==200){
			if(c==300){
				printf("a,b,c are true values");
			}
			else{
				printf("c is not equal to 300 ");
			}
		}
		else{
			printf("b is not equal to 200");
		}
	}
	else{
		printf("a is not equal to 100");
	}
}
