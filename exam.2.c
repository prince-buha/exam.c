/*

Q.2 WAP to find a cube of all elements from a given 2D array.
*/


#include<stdio.h>

void main(){
	int i,r,c,j;
	int n;
	
	printf("enter row elements:-");
	scanf("%d",&r);
	printf("enter column element:-");
	scanf("%d",&c);
	int a[r][c];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("your elements is a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		
		}
			printf("the answer is %d",n*n*n);
	}
	
}
