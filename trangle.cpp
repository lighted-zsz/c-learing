# include <iostream>
# include <math.h>
using namespace std;

int main(){
	double x,y,z,mi,s;
	cout<<"please fill three longth of trangle ";
	cin>>x>>y>>z;
	if(x+y>z||x+z>y||z+y>x){
		mi = (x+y+z)/2;
		s = sqrt(mi*(mi-x)*(mi-y)*(mi-z));
		cout<<"Ãæ»ýÎª£º"<<s<<endl;
	}
	else
	    cout<<"there remain some fault in your provided longth"<<endl;
	return 0;
	
}
