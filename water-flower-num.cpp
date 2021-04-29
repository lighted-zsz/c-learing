# include <iostream>
using namespace std;

int main(){
	//求水仙花数
	 int a,b,c,d;
	 cout<<"please inter a num";
	 cin>>d;
	 a = d%10;
	 b = (d/10)%10;
	 c = d/100;
	 if(d == a*a*a+b*b*b+c*c*c){
	 	cout<<d<<" is the flower number";
	 	
	 }
	 elsez
	    cout<<d<<"is not a flower number";
	 
}
