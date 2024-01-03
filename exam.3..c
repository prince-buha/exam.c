/*
Q.3 Write all leap years from a given range into a text file.
*/

#include<stdio.h>

void main(){
	int n;
	int i;
	
	n=fopen("leap.txt","r");
	
	if(n!= NULL){
		printf("file cant open");
	}else{
		if(i % 2 ==0){
			printf("your file succesfully opened");
		}
		
	}
}
		

	

