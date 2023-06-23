#include<iostream>
using namespace std;
int main(){
	int pass;
	cout<<"Enter the password: "<<endl;
	cin>>pass;
	while(pass<999999){
		cout<<"The passwrod doesnot meed the required conditions, pls enter password again"<<endl;
        cin>>pass;
	}
	cout<<"the user entered correct password";
}
	
