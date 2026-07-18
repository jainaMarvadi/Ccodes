#include<stdio.h>

int main(){
	
	int ln;
	printf("Enter length of array : ");
	scanf("%d",&ln);
	
	int a[ln];
	
	printf("Enter array elements : ");
	
	int i=0;
	
	for(i=0;i<ln;i++){
		scanf("%d",&a[i]);
	}
	
	int temp=a[0],k;
	printf("Enter k : ");
	scanf("%d",&k);
	
	for(i=0;i<ln;i++){
		if()
	}
	
//	for(i=0;i<ln;i++){
//		a[i]=a[i+1];
//	}
	
	a[ln-1]=temp;
	for(i=0;i<ln;i++){
		printf("\n%d",a[i]);
	}
}
