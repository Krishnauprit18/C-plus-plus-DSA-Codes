#include<simplecpp>
#include<stack>
void insertAtBottom(stack<int> &s, int element){
// base case
if(s.empty()){
s.push(element);
return;
}
int num=s.top();
s.pop();

//recursive call
insertAtBottom(s,element);

s.push(num);


}



void reverseStack(stack<int> &s){
//base case
if(s.empty()){
return;
}
}

 s.top(num);
s.pop(num);

//recursive call
reverseStack(s);
intsertAtBottom(s,num);
main_program{



}
