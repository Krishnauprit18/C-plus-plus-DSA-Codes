#include<iostream>
#include<string>
using namespace std;

string Find_Longest_Name(string name[], int num)
{
    string Longest_Name = "";

    for(int i =0; i<num; i++)
    {
        if(name[i].length() > Longest_Name.length())
        {
            Longest_Name = name[i];
        }
    }

    return Longest_Name;
}


int main()
{
    int n;
    cout<<"Enter the number of Names: ";
    cin>>n;

    string name[n];
    cout<<"Enter the Names: "<<endl;
    for(int i =0; i<n; i++)
    {
        cin>>name[i];
    }

    string Longest_Name = Find_Longest_Name(name, n);
    cout<<"Longest Name is : "<<Longest_Name<<endl;

    return 0;
}
