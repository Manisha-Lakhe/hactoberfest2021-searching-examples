#include<stdio.h>
int binarysearch(int a[],int low,int high,int x)
{
    if(high>=low)
    {
     int mid=low+(high-low)/2;
     if(a[mid]==x)
     return mid;
     else if(a[mid]>x)
     return  binarysearch(a,low,mid-1,x);
     else
     return  binarysearch(a,mid+1,high,x);
   }
     else
     return -1;
}
int main(void)
{
    int a[10]={10,15,30,55,70,80,250};
    int n=sizeof(a)/sizeof(a[0]);
    int x;
    printf("enter search element:\n");
    scanf("%d",&x);
    int result= binarysearch(a,0,n-1,x);
    (result==-1)?printf("element is not present in array"):printf("element is present at index %d",result);
    return 0;  
}