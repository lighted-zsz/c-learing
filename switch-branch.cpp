# include <iostream>
#include <iomanip> 
using namespace std;

int main(){
	char grade;
	cout<<"pliease inter a grade ";
	cin>>grade;
	switch(grade){
		case 'A':cout<<"perfect"<<endl;break;
		case 'B':cout<<"normal"<<endl;break;
		case 'C':cout<<"bad"<<endl;break;
		default:cout<<"inquality"<<endl;break;
	}
}
