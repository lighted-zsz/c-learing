# include <iostream>  //这里的iostream为预处理命令，后面的cout就是这个的一部分功能 
using namespace std;  //标准名字空间，包含函数库的所有元素声明 

int main(){
    double r ,s , c; 
    const double pi=3.141569;
    cout<<"请输入半径值"; 
    cin>>r;
    s = pi*r*r;
    c = 2*pi*r;
    cout<<"面积为:"<<s<<endl;
    cout<<"周长为:"<<c<<endl;
    cout<<"hi! zsz"<<endl; 
    return 0;
}
