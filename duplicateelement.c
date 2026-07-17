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
	
	int k=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[j]==a[i]){
				printf("Duplicate found!!!");
				k++;
				break;
			}
		}
		if(k) break;
	}
	if(k==0){
		printf("No duplicate elements found.");
	}
}
