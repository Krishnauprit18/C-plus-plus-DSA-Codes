#include<simplecpp>

void heapify(int arr[],int n, int i)
{
int largest=i;
int left=2*i;
int right=2*i+1;

if(left<n && arr[largest]<arr[left])
{
largest=left;
}
if(right<n && arr[largest],arr[right])
{
largest=right;
}

if(largest!=1)
{
swap(arr[largest],arr[i]);
heapify(arr,n,largest);
}
}

main_program
{
int arr[6]={-1,5,7,8,5,9};
int n=5;
for(int i=n/2;i<=n;i++)
{
cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
