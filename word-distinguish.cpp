#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	//������Ϊ��д��ĸ������������ڵ�������ĸ
	// ������ΪСд��ĸ������������ڵ��ĸ���ĸ
	char id;
	cout<<"please write a word:  ";
	cin>>id;
	if(id>='A' && id<='Z'){
		
		cout<<(char)(id-1)<<setw(5)<<(char)(id+1)<<endl;
		
	}
	else if(id>='a' && id<='z'){
		
		cout<<(char)(id-1)<<setw(5)<<(char)(id+1)<<endl;
		
		cout<<(char)(id-2)<<setw(5)<<(char)(id+2)<<endl;
	}
	else
	  cout<<"wrong with your word";
	return 0;
		
	}
