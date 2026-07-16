#include<stdio.h>

void main(){
	
	int ln;
	printf("Enter length of array : ");
	scanf("%d",&ln);
	
	int a[ln],b[ln],c[ln];
	
	printf("Enter array elements : ");
	
	int i=0,j=0,count=0,k=0;
	
	for(i=0;i<ln;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<ln;i++){
		for(j=0;j<ln;j++){
			if(a[i]==a[j]){
				count++;
			}
		}
		
		b[k]=a[i];
		c[k]=count;
		k++;
		
		count=0;
	}
	
	for(i=0;i<ln;i++){
		for(j=i+1;j<ln;j++){
			if(b[i]==b[j]){
				b[i]=0;
				c[i]=0;
			}
		}
	}
	
	for(i=0;i<ln;i++){
		if(b[i]==0 && c[i]==0){
			continue;
		}
		else{
			printf("%d : %d\n", b[i], c[i]);
		}
	}
}
