# include <iostream> 
using namespace std;

int main(){
	int x,year;
	cout<<"������ĳһ��";
	cin>>x;
	year = x;
	if((year%4 == 0 && year%100 == 0 )||(year%400 == 0)){
		//�����ж� 
		cout<<"�������"<<x<<"��������"<<endl;
	}
	else{
		cout<<"�������"<<x<<"�겻������"<<endl;
	}
	
	
}
