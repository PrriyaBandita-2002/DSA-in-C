//codding for deletion operation
#include<stdio.h>
void display(int arr[],int n)
{
    for(int i =0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
}
int indDeletion(int arr[],int s,int element,int capacity,int index)
{
  if(s>=capacity)
 {
    return-1;

 }
 for(int i=index;i<=s-1;i++)
 {
    arr[i]=arr[i+1];

 }
 
}

int main()
    {
        int arr[100]={1,2,6,7};
        int s=5,index=1;
        int element=4;
        int capacity=100;
        display(arr,s);
        indDeletion(arr,s,element,capacity,index);
        s-=1;
        display(arr,s);
        return 0;
    }
