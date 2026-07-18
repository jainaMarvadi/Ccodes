#include<stdio.h>

int main(){
	
	int n;
	printf("Enter length : ");
	scanf("%d",&n);
	
	int a[n];
	int i=0,j=0;
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int temp=a[0],k=0;
	for(i=1;i<n;i++){
		if(a[i]<temp){
			printf("Unsorted array");
			k++;
			break;
		}
		else{
			temp=a[i];
		}
	}
	if(k==0){
		printf("Sorted array.");
	}
}
