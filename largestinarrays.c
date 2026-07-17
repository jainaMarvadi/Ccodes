#include<stdio.h>

int main(){
	
	int ln;
	
	printf("Enter array length : ");
	scanf("%d",&ln);
	
	int a[ln];
	int i=0;
	
	printf("Enter array elments : ");
	for(i=0;i<ln;i++){
		scanf("%d",&a[i]);
	}
	
	int temp=a[0];
	
	for(i=0;i<ln;i++){
		if(a[i]>temp){
			temp=a[i];
		}
	}
	
	printf("Largest : %d",temp);
}
