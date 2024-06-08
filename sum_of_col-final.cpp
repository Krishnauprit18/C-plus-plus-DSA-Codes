#include<iostream>
using namespace std;

int main()
{
    int row;
    int col;

    cout<<"enter rows"<<endl;
    cin>>row;
    cout<<"enter col."<<endl;
    cin>>col;

    int arr[10][10];
    int col_sum[10] = {0};

    cout<<"enter elem of arr:"<<endl;
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }


    cout<<"sum of column: "<<endl;
    for(int j = 0; j<col; j++)
    {
        cout<<"column is: "<<j+1<<" "<<col_sum[j]<<endl;
    }

    return 0;
}

