#include<stdio.h>

int main(){
	
	int n;
	printf("Enter length of a : ");
	scanf("%d",&n);
	
	int a[n];
	int i=0,j=0;
	
	printf("Enter array elemets : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int m;
	printf("Enter length of b : ");
	scanf("%d",&m);
	
	int b[m];
	
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	
	if(n>m){
		int tmp[n];
		
		for(i=0;i<n;i++){
			tmp[i]=0;
		}
		
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(a[i]==b[j]){
					tmp[i]=a[i];
				}
			}			
		}
		
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(tmp[i]==tmp[j]){
					tmp[j]=0;
				}
			}
		}
		
		for(i=0;i<n;i++){
			if(tmp[i]!=0){
				printf("\nIntersected points : %d",tmp[i]);
			}
		}
	}
	else{
		int tmp[m];
		
		for(i=0;i<m;i++){
			tmp[i]=0;
		}
		
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(b[i]==a[j]){
					tmp[i]=b[i];
				}
			}			
		}
		
		for(i=0;i<m;i++){
			for(j=i+1;j<m;j++){
				if(tmp[i]==tmp[j]){
					tmp[j]=0;
				}
			}
		}
		
		for(i=0;i<m;i++){
			if(tmp[i]!=0){
				printf("\nIntersected points : %d",tmp[i]);
			}
		}
	}

	return 0;
}
