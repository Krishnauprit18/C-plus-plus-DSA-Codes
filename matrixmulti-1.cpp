#include<simplecpp>

main_program{

       int a[3][3],b[3][3],c[3][3],i,j,k,row1,col1,row2,col2;
       cout<<"enter the number of rows and column of a"<<endl;
       cin>>row1>>col1;
       cout<<"enter the number of rows and column of b"<<endl;
       cin>>row2>>col2;
       if(col1==row2){
       cout<<"enter the elements of a"<<endl;
       for(int i=0;i<row1;i++){
       for(int j=0;j<col1;j++){
       cin>>a[i][j];
       }
       }
       cout<<"enter the elements of b"<<endl;
       for(int i=0;i<row2;i++){
       for(int j=0;j<col2;j++){
       cin>>b[i][j];
        for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
       c[i][j]=0;
       for(int k=0;k<col1;k++){
       c[i][j]=c[i][j]+a[i][k]*b[k][j];
       }
       }
       cout<<"the multiplication of the 2 matrices is"<<endl;
       for(int i=0;i<row1;i++){
       for(int j=0;j<col2;j++){
        cout<<c[i][j];
       }

       }
       cout<<endl;
       }
       }
    }
}
       else{
       cout<<"matrix mutliplication is not possible"<<endl;
       }
       return 0;

}
