#include<simplecpp>


class Sum{
    public:
    Sum();
    Sum(int a);
    Sum(int a,int b);

};
Sum:: Sum(void){
    cout<<"in sum class"<<endl;
}
Sum::Sum(int a){
    int b=10;
    b=b+a;
    cout<<b<<endl;
}
Sum::Sum(int a, int b){
    int total;
    total=a+b;
    cout<<total;
}

main_program{

{
    Sum sum;

    Sum sum1(10);
    Sum sum2(20,30);

    return 0;
}

}
