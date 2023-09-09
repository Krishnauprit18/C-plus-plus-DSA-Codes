#include<simplecpp>
main_program{

    int n;
    int arr1[n];

    cout<<"enter the elements of first array"<<endl;
    cin>>n;

    int arr2[n];
    for(int i=0;i<4;i++){
    arr1[i]=arr2[i];
    }
    cout<<"the first array is"<<endl;
    for(int i=0;i<4;i++){
    cout<<arr1[i]<<endl;
    }
    for(int i=0;i<4;i++){
    cout<<arr2[i]<<endl;
    }



   return  0;

}
