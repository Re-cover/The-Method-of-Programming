#include <iostream>
#include <string>

using namespace std;

bool StringContain(string &a, string &b)
{
	int hash = 0;
	for (int i = 0; i < a.length(); ++i)
		hash |= (1 << (a[i] - 'A'));
	for (int i = 0; i < b.length(); ++i)
		if((hash & (1 << (b[i] - 'A'))) == 0)
			return false;
	return true;
}

int main(int argc, char *argv[]) {
	string a, b;
	while(cin>>a>>b)
	{
		if (StringContain(a, b)) 
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}