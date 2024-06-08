#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int size_of_arr;
    cout<<"Enter the number of elements in the stream: "<<endl;
    cin>>size_of_arr;

    int arr[size_of_arr];
    double sum = 0;

    cout<<"Enter the elements of the stream: "<<endl;
    for(int i =0; i<size_of_arr; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        double average = sum / (i + 1);
        cout<< fixed << setprecision(2) << average << " ";
    }

    return 0;
}
