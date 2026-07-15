#include<stdio.h>

int main(){
	
	int ln;
	printf("Give array length : ");
	scanf("%d",&ln);
	
	int i=0,j=0;
	int a[ln];
	
	for(i=0;i<ln;i++){
		printf("Enter element : ");
		scanf("%d",&a[i]);
	}
	
	int flag=0;
	
	for(i=0;i<ln;i++){
		int rightsum=0,leftsum=0;
		
		for(j=0;j<i;j++){
			leftsum=leftsum+a[j];
		}
		
		for(j=ln-1;j>i;j--){
			rightsum=rightsum+a[j];
		}
		
		if(rightsum==leftsum){
			printf("\nindex : %d, sum : %d",i,leftsum);
			flag=1;
		}
	}
	
	if(!flag){
		printf("\nNo equilibrium indices found.");
	}
	
	return 0;
}
