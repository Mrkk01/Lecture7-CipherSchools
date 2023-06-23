#include<iostream>
using namespace std;
int main(){
	int pass;
	do{
		cout<<"Enter the password: "<<endl;
		cin>>pass;
	}
	while(pass<999999);
	cout<<"You have entered correct format";
}

