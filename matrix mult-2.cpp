#include<simplecpp>


main_program{

int a[3][3],b[3][3],c[3][3],i,j,k;

 for
 (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter number of first matrix ";
            cin>>a[i][j];

        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter number of second matrix ";
            cin>>b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    }
    cout<<"The First Matrix is "<<"\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"The Second Matrix is "<<"\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Multiplication of Matrix is "<<"\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }



    return 0;
}
