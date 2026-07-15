#include<stdio.h>

int main(){
	
	int n;
	printf("Enter array length : ");
	scanf("%d",&n);
	
	int i=0,j=0;
	int a[n];
	
	for(i=0;i<n;i++){
		printf("Enter element at %d position : ",i);
		scanf("%d",&a[i]);
	}
	
	int b[n];
	
	for(i=0;i<n;i++){
		b[i]=0;
	}
	
	printf("\nLeaders : ");
	
	for(i=0;i<n;i++){
		int flag=1;
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				flag=0;
				break;
			}
		}
		if(flag){
			printf("\n%d",a[i]);
		}
	}
}
