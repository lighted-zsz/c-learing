# include <iostream> 
using namespace std;

int main(){
	int x,year;
	cout<<"请输入某一年";
	cin>>x;
	year = x;
	if((year%4 == 0 && year%100 == 0 )||(year%400 == 0)){
		//闰年判断 
		cout<<"请输入的"<<x<<"年是闰年"<<endl;
	}
	else{
		cout<<"请输入的"<<x<<"年不是闰年"<<endl;
	}
	
	
}
