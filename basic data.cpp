# include <iostream>
# include <math.h> 

using namespace std;

int main(){
	//常量
	#define di 2.713;
	const int it = 2;  //实际还是一个变量 
	
    //int: int , short int ,long int
    
    //有符合位(比如int类型为2字节，有正负)和无符号位（大于0）: unsigned
    //sizeof()关键字来查看各数据类型所占字节数
    
	cout<<sizeof(char)<<sizeof(int)<<sizeof(short)<<sizeof(long); 
    
    //实数型(浮点):float , double(八字节) ,long double
	
	//字符型: char(在计算机内部为ASCLL码，一个字节)  拓展: wchar_t(2字节或4字节)
	wcout.imbue(locale("chs"));
	wchar_t t = L'周述正';
	wchar_t i = L'述';
	cout<<t<<endl;
	wcout<<t<<endl;
	cout<<i<<endl;
	wcout<<i<<endl;
	                                   
		
	//逻辑型: bool
	
	//空类型 void
	
	
	return 0;
}
