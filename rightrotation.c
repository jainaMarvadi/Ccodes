#include<stdio.h>

int main(){
	
	int ln;
	printf("Enter length of array : ");
	scanf("%d",&ln);
	
	int a[ln];
	int i=0,j=0;
	
	printf("Enter array elements : ");
	
	for(i=0;i<ln;i++){
		scanf("%d",&a[i]);
	}
	
//	AI SOlution :
//	int temp=a[ln-1];
//	
//	for(i=ln-1;i>=0;i--){
//		a[i]=a[i-1];
//	}
//	
//	a[0]=temp;

//My solution  :
	int temp=a[ln-1],carry=0;
	for(i=0;i<ln;i++){
		carry=a[i];
		a[i]=temp;
		temp=carry;
	}
	for(i=0;i<ln;i++){
		printf("\n%d",a[i]);
	}
	
	return 0;
}
