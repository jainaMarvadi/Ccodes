#include<stdio.h>

int main(){
	
	int n;
	printf("Enter array length : ");
	scanf("%d",&n);
	
	int i=0;
	int a[n];
	
	for(i=0;i<n;i++){
		printf("Enter element at %d position : ",i);
		scanf("%d",&a[i]);
	}
	
	int equal=1;
	
	for(i=0;i<n/2;i++){
		if(a[i]!=a[n-1-i]){
			equal=0;
		}
	}
	
	if(equal){
		printf("Palindrom array.");
	}
	else{
		printf("Non-palindromic array");
	}
}
