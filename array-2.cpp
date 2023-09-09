#include<iostream>
#include<conio.h>
using namespace std;

int main(){

                 int arr[5]={2,5,7,5,6};

              int sum=0;
              int avg = 0;
              for(int i=0;i<5;i++)

                {
                    cout<<arr[i]<<endl;
                    sum+=arr[i];
                    avg = sum/5;
                    
                }

              cout<<sum<<endl;
              cout<<avg<<endl;
              return 0;

}
