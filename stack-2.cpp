#include<simplecpp>
#include<stack>

class stack{
    //properties
    int *arr;
    int top;
    int size;
    //behaviour
    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
//different functions likh rahe hai neeche

int push(int element){
    if(size-top>1){
        top++;
        arr[top]=element;
    }
    else{
        cout<<"stack overflow"<<endl;
    }
    return 0;
}
int pop(){
    if(top>=0){
        top--;
    }
    else{
        cout<<"stack underflow"<<endl;
    }
    return 0;

}
int peak(){
    if(top>=0 ){
        return arr[top];
    }
    else{
        cout<<"stack is empty"<<endl;
        return -1;
    }
    return 0;

}

bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }

 }
};

   main_program{


     stack std(5);

    std.push(22);
    std.push(43);
    std.push(44);

    cout<<std.peak()<<endl;

    st.pop();
    cout<<std.peak()<<endl;

    st.pop();
    cout<<std.peak()<<endl;

    st.pop();
    cout<<std.peak()<<endl;



    return 0;
}

}
