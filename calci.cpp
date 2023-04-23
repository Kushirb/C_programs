#include<iostream>
using namespace std;
class Calci
{
	double n1,n2;
	public:
		Calci(double a,double b)
		{
			n1=a,n2=b;
		}
		double sgAdd()
		{
			    cout<<"ADD:"<<n1+n2<<endl;
				return n1+n2;
		}
		double sgSub()
		{
			cout<<"SUB:"<<n2-n1<<endl;
			return n2-n1;
		}
};
int main()
{
	Calci C1(10,20);
	C1.sgAdd();
	C1.sgSub();
	return 0;
}
