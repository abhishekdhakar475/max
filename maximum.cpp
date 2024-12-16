#include<stdio.h>
int main()
{
	int max=0;
	int a;
	int arr[4];

	
	for(int a=0; a<4;  a++){
			printf("enetr value");
           	scanf("%d",&arr[a]);
		}
		
		
		for(int a=0; a<4; a++){
			if(max<arr[a]){
			
		max=arr[a];
		}
		}
		printf(" maximum %d",max);
}
