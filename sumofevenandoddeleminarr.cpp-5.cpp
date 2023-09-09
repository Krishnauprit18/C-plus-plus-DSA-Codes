#include<simplecpp>
int EvenOddSum(int arr[],int n){
  int even=0;
                int odd=0;
                for(int i=0;i<n;i++){
                if(1%2==0){
                even+=arr[i];
                }
                else{
                odd+=arr[i];
                }

            }
                cout<<"Even index position sum"<<" "<<even<<" "<<endl;
                cout<<"odd index position sum"<<" "<<odd<<" "<<endl;

    }

main_program{

            int arr[5]={1,3,2,5,4,};
            int n= sizeof(arr)/sizeof(arr[0]);
            EvenOddSum(arr,n);
            return 0;
}
