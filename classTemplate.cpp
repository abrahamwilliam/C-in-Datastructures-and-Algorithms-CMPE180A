#include<iostream>
using namespace std;

template <typename s>
class clatemplate{

s a,b;
public:
	clatemplate(s a1, s b1){
	a=a1;
	b=b1;	
	}
	
	void add(int, int);
	void multply(int, int);
	
};

template<typename s>
void clatemplate<s>::add(int a, int b){
	cout<<"the added values are"<<a+b<<endl;
	
}

template<typename s>
void clatemplate<s>::multply(int a, int b)
{
	cout<<"the value sa re " <<a*b<<endl;
}
int main(){
	
	int a, b,c;
	
	cout<<"enter the values to be added"<<endl;
	cin>>a>>b;
	clatemplate<int> c1(a,b);


cout<<"Please select the operation to perform  1. additon, 2. multiplication"<<endl;
cin>>c;
	switch(c){
		case 1:c1.add(a,b);
	break;
	case 2:c1.multply(a,b);
	break;
	default:cout<<"enter the correct option"<<endl;
	}
	
	
}
