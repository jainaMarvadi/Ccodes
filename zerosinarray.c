#include<stdio.h>

int main(){
	
	int ln;
	printf("Enter length of array : ");
	scanf("%d",&ln);
	
	int a[ln],b[ln];
	
	printf("Enter array elements : ");
	
	int i=0,k=0;
	
	for(i=0;i<ln;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<ln;i++){
		if(a[i]!=0){
			b[k]=a[i];
			k++;
		}
	}
	
	while(k<ln){
		b[k]=0;
		k++;
	}
	
	for(i=0;i<ln;i++){
		printf("%d",b[i]);
	}
}
