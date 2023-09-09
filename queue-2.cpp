#include<simplecpp>
#include<queue>

main_program{

     //creating a queue
     queue<int>q;

     q.push(90);
     cout<<"front of q is:"<<q.front()<<endl;
     q.push(76);
     cout<<"front of q is:"<<q.front()<<endl;
     q.push(54);
     cout<<"front of q is:"<<q.front()<<endl;

     cout<<"size of queue is" <<q.size()<<endl;
     q.pop();
     cout<< "size of queue is" <<q.size()<<endl;
     q.pop();
     cout<<"size of queue is"<<q.size()<<endl;
     q.pop();
     cout<<"size of queue is"<<q.size()<<endl;

     if(q.empty()){
     cout<< "queue is empty" <<endl;
     }
     else{
     cout<< "queue is not empty" <<endl;
     }
     return 0;
}
