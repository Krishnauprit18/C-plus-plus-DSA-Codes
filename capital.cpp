#include<iostream>
using namespace std;

int main(){

		char ch, update=' ';
		cout<<"enter the character:"<<endl;
		cin>>ch;
		if(ch>='a'&&ch<='z'){
		update=ch-32;
		cout<<"the updated character is:"<<ch<<" "<<update<<endl;
		}
		else if(ch>='A'&&ch<='Z'){
		update=ch+32;
		cout<<"the updated character is:"<<update<<endl;
		}
		else
		cout<<"it is not an alphabet"<<endl;

		return 0;
}
