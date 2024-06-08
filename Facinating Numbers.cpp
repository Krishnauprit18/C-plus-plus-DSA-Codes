#include<iostream>
using namespace std;

bool isFascinating(int N)
{
    if(N<100 || N>999)
    {
        return false;
    }

    int digit_count[10] = {0};

    int original = N;
    int mult_2 = N*2;
    int mult_3 = N*3;

    while(original > 0)
    {
        int digit = original % 10;
        digit_count[digit]++;
        original /= 10;
    }

    while(mult_2 > 0)
    {
        int digit = mult_2 % 10;
        digit_count[digit]++;
        mult_2 /= 10;
    }

     while(mult_3 > 0)
    {
        int digit = mult_3 % 10;
        digit_count[digit]++;
        mult_3 /= 10;
    }

    for(int i = 1; i<=9; i++)
    {
        if(digit_count[i] != 1)
        {
            return false;
        }
    }

    return digit_count[0] == 0;
}

int main()
{
    int N;
    cout<<"Enter number: "<<endl;
    cin>>N;

    if(isFascinating(N))
    {
        cout<<"Is a Facinating Number"<<endl;
    }
    else
    {
        cout<<"Is Not a Fascinating Number"<<endl;
    }

    return 0;
}
