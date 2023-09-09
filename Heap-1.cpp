#include<simplecpp>

class heap{

 public:
 int arr[100];
 int size=0;

 heap()
{
arr[0]=-1;
size=0;
}

 void insert(int val)
 {
 size=size+1;
 int index=size;
 arr[index]=val;

 while(index>1)
 {
 int parent=index/2;

 if(arr[parent]<arr[index])
 {
 swap(arr[parent],arr[index]);
 index=parent;
 }
 else
 {
 return;
 }
 }
 }

 void print()
 {
 for(int i=1;i<=size;i++)
 {
 cout<<arr[i]<<" ";
 }
 cout<<endl;
 }
 };


 main_program
 {
 heap h;
 h.insert(40);
 h.insert(48);
 h.insert(45);
 h.insert(42);
 h.insert(39);
 h.print();

 return 0;

 }
