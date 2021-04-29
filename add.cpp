# include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int a = 1,s = 0;
	while(a<=100){
		//TODO
		s = s+a;
		a++;
	} 
	cout<<"add's total sum"<<setw(6)<<s;
	return 0;
	
}
