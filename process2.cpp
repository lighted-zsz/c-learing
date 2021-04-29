# include <iostream> 
using namespace std;

int main(){
	//条件运算 
	float x,y,z,max;
	cout<<"请输入三个数字";
	cin>>x>>y>>z;
	max = x>y?x:y;
	max = max>z?max:z;
	cout<<"最大值为"<<max;
	return 0;
}
