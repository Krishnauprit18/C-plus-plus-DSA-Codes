#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;

    int row=1;  // traversing on all rows and cols.
    while(row<=n)        // traverse for each row(1 se n row tak).
    {
        int col=1;   
        while(col<=row)
        {
            cout<<row;   // and in each row print'row' element and keep on printing the row number
            col++;
        }
        cout<<endl;
        row++;
    }
}