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
	
	for(i=0;i<ln;i++){
		int prd=1;
		for(j=0;j<ln;j++){
			if(i!=j){
				prd=prd*a[j];
			}
		}
		printf("%d ",prd);
	}
	
	return 0;
}
