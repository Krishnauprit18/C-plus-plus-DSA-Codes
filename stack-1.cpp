#include <simplecpp>
#include<stack>

main_program{

    //creation of stack
    stack<int>s;

    //push operation
    s.push(2);
    s.push(3);

    //pop operation

    s.pop();

    //printing top element

    cout<<"printing top element"<<" "<<s.top()<<endl;
    //checking if stack is empty or not
    if(s.empty()){
        cout<<"Stack is  empty"<<endl;

    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    //size of stack is?
    cout<<"size of stack is"<<" "<<s.size()<<endl;

    return 0;
}
