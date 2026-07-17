#include<stdio.h>

int main(){
	
	int n;
	printf("Enter array length : ");
	scanf("%d",&n);
	
	int i=0,j=0;
	int a[n];
	
	for(i=0;i<n;i++){
		printf("Enter element at %d position : ",i);
		scanf("%d",&a[i]);
	}
	
//	My solution : 
//	int temp=(n*(n+1))/2,k=0;
//	printf("\nTemp : %d\n",temp);
//	
//	int b[temp];
	
	int max=a[0];
	
	for(i=0;i<n;i++){
		
		int sum=0;
		
		for(j=i;j<n;j++){
			sum=sum+a[j];
			if(max<sum){
				max=sum;
			}
//			b[k]=sum;
//			k++;
		}
	}
	
//	for(i=0;i<temp;i++){
//		printf("\n%d",b[i]);
//	}
//	
//	int flag=b[0];
//	
//	for(i=1;i<temp;i++){
//		if(flag<b[i]){
//			flag=b[i];
//		}
//	}
//	
//	printf("\nMaximum sum of subarrays : %d",flag);

	printf("\nMaximum sum of subarrays : %d",max);
}
