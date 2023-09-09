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


void heapSort(int arr[],int n)
{
int size=n;

while(size>1)
{
//step:1 swap
swap(arr[size],arr[1])


 size--;

//step: 2
heapify(arr,size,1);
}

}

main_program
{
}
