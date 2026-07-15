#include<stdio.h>

int main(){
	
	int n;
	printf("Enter length : ");
	scanf("%d",&n);
	
	int a[n];
	int i=0,j=0;
	
	for(i=0;i<n;i++){
		printf("Asset : ");
		scanf("%d",&a[i]);
	}
	
	int trapped_water=0;
	
	for(i=0;i<n;i++){
		int tallestleft=a[i],tallestright=a[i],min=0;	
		for(j=0;j<i;j++){
			if(tallestleft<a[j]){
				tallestleft=a[j];
			}
		}
		for(j=i;j<n;j++){
			if(tallestright<a[j]){
				tallestright=a[j];
			}
		}
		if(tallestleft<tallestright){
			min=tallestleft;
		}
		else{
			min=tallestright;
		}
		trapped_water=trapped_water+(min-a[i]);
//		trapped_water=min-a[i];
//		printf("\nTrapped water - %d",trapped_water);	
	}
	
	printf("Trapped water - %dunits",trapped_water);
}
