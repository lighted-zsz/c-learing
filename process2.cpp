# include <iostream> 
using namespace std;

int main(){
	//�������� 
	float x,y,z,max;
	cout<<"��������������";
	cin>>x>>y>>z;
	max = x>y?x:y;
	max = max>z?max:z;
	cout<<"���ֵΪ"<<max;
	return 0;
}
