#include<stdio.h>

int main(){
	
	int n;
	printf("Enter length : ");
	scanf("%d",&n);
	
	int a[n];
	int i=0,j=0;
	
	for(i=0;i<n;i++){
		printf("Element : ");
		scanf("%d",&a[i]);
	}
	
	int b[n];
	
	for(i=0;i<n;i++){
		b[i]=0;
	}
	
	for(i=0;i<n;i++){
		int pointer=a[i],sum=1;	
		for(j=0;j<n;j++){
			if((a[j]-pointer)==1){
				pointer=a[j];
				sum++;
			}
		}
		b[i]=sum;
	}
	
	int temp=b[0];
	for(i=1;i<n;i++){
		if(temp<b[i]){
			temp=b[i];
		}
	}
	
	if(temp==1){
		printf("Cannot found any consequtive sequense");
	}
	else{
		printf("\nLongest consecutive sequence  %d",temp);
	}
}
