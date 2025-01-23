#include <stdio.h>

//functions to calculate factorial
long long factorial(int n){
	if(n==0||n==1){
		return 1;//base case
	}else{
		return n * factorial(n-1);//recursive call
	}
}

int main(){
	int number;
	long long result;
	
	//input the user
	printf("enter a positive integer to find its factorial:");
	scanf("%d",&number);
	
	//check for invalid input 
	if(number<0){
		printf("factorial is not defined for negative numers,\n");
	}else{
		//calculate factorial
		result=factorial(number);
		
		//output the result
		printf("the factorial of 5d ic %||d\n",number,result);
	}
	return 0;
}