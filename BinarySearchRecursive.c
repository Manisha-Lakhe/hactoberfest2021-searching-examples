#include<stdio.h>

int bs(int a[],int low ,int hi, int k){
	if(low<=hi){
		
		int mid=(low+hi)/2;
		
		if(a[mid]==k)
		  return mid;
		 
		if(a[mid]>k)
		  return bs(a,low,mid-1,k);
		return bs(a,mid+1,hi,k);
	}
	return -1;
}

int main(){
	int a[15],n,key,i;
	printf("enter no of elements ");
	scanf("%d",&n);
	printf("enter elements ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	printf("\n The element you want to search from the list");
    scanf("%d",&key);
    
    int index=bs(a,0,n-1,key);
    if(index==-1)
       printf("element no found ");
    else 
       printf("%d is found at position %d",key, index+1);
	
}
