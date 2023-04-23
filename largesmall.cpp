#include<iostream>
using namespace std;
class Number
{
	int num1,num2;
	public:
		Number(int a,int b)
		{
			num1=a,num2=b;
		}
		void sgSmall()
		{
			if(num1>num2)
			{
				cout<<"num1 is largest"<<endl;
			}
			else
			{
				cout<<"num2 is largest"<<endl;
			}
		}
		void sgLarge()
		{
			if(num1<num2)
			{
				cout<<"num1 is smallest"<<endl;
			}
			else
			{
				cout<<"num2 is smallest"<<endl;
			}
		}
};
int main()
{
	Number N1(67,2);
	N1.sgSmall();
	N1.sgLarge();
	return 0;
}
