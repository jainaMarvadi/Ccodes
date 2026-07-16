#include<stdio.h>

int main(){
	int n,z;
	printf("Enter rows : ");
	scanf("%d",&n);
	printf("Enter cols : ");
	scanf("%d",&z);
	
	if(n!=z){
		printf("Please make a square matrix!");
	}else{
		int a[n][z];
		int i=0,j=0,sum=0;
		
		for(i=0;i<n;i++){
			for(j=0;j<z;j++){
				scanf("%d",&a[i][j]);
			}
		}
		
		for(i=0;i<n;i++){
			for(j=0;j<z;j++){
				if(i==j){
					sum=sum+a[i][j];
				}
		//			printf("%d",a[i][j]);
			}
		}
	
		printf("Sum of Diagonal entries %d",sum);	
	}
	
	
	
	return 0;
}
