# include <iostream>	 
# include <iomanip>

using namespace std;

int main(){
	//计算两个数之间的奇数和 
	int a ,b ,s=0 ,n;
	cout<<"please inter two number";
	cin>>a>>b;
	n = a + 1;
	
	do{
		if(n%2 != 0)
		s+=n;
		n++;
		
	}while(n<b);
	
	cout<<a<<setw(3)<<b<<"之间的和"<<s;
	
	return 0;
	
}
