#include <iostream>
#include <cmath>

using namespace std;

int t(int a,int b,int c)
{
	if(a+b>c && a+c>b && c+b>a)cout<<"tak";
	else cout<<"nie";
}

main()
{
	int a,b,c;
	cout<<"Podaj boki trojkata ";
	cin>>a>>b>>c;
	t(a,b,c);
}
