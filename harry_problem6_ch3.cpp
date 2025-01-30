#include<stdio.h>
   // . Write a program to find greatest of four numbers entered by the user. 
int main()
{
	printf("\t GREATEST NUMBER DETECTOR");
	int number[4];
	int greatest;

	for(int i = 0; i<4; i++){
			printf("Enter Number: \n");
		scanf("%d", &number[i]);
	} 
	greatest = number[0];
	for(int j = 0; j < 4; j++ ){
	   if(number[j] > greatest){
	   	greatest = number[j];
	   }
	
	}
	printf("The Greatest Number is %d \n", greatest);
	
	
	return 0;
}
