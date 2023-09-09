#include<simplecpp>

   void deletefromHeap(){

   if(size==0)
{
cout<<"nothing to delete"<<endl;
return ;
}

//put last element into first index
arr[1]=arr[size];
//remove last element
size--;

//take root node to its correct position
int i=1;
while(i<size)
{
int leftIndex=2*i;
int rightIndex=2*i+1;

if(leftIndex<size && arr[i]<arr[leftIndex])
{
swap(arr[i],arr[leftIndex]);
i=leftIndex;
}
else if(rightIndex<size && arr[i]<arr[rightIndex])
{
swap(arr[i], arr[rightIndex])
i=rightIndex;
}
else
{
return;
}
}
}

main_program{



}
