# include <iostream>
# include <math.h> 

using namespace std;

int main(){
	//����
	#define di 2.713;
	const int it = 2;  //ʵ�ʻ���һ������ 
	
    //int: int , short int ,long int
    
    //�з���λ(����int����Ϊ2�ֽڣ�������)���޷���λ������0��: unsigned
    //sizeof()�ؼ������鿴������������ռ�ֽ���
    
	cout<<sizeof(char)<<sizeof(int)<<sizeof(short)<<sizeof(long); 
    
    //ʵ����(����):float , double(���ֽ�) ,long double
	
	//�ַ���: char(�ڼ�����ڲ�ΪASCLL�룬һ���ֽ�)  ��չ: wchar_t(2�ֽڻ�4�ֽ�)
	wcout.imbue(locale("chs"));
	wchar_t t = L'������';
	wchar_t i = L'��';
	cout<<t<<endl;
	wcout<<t<<endl;
	cout<<i<<endl;
	wcout<<i<<endl;
	                                   
		
	//�߼���: bool
	
	//������ void
	
	
	return 0;
}
