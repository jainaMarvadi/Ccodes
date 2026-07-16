#include<stdio.h>

void main(){
	
	int n;
	printf("Length of array : ");
	scanf("%d",&n);
	
	int a[n];
	int i=0,j=0,temp=0;
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			temp++;
		}
	}
	
	if(temp==0){
		printf("Sorted Array.");
	}
	else{
		printf("Unsorted array.");
	}
}
