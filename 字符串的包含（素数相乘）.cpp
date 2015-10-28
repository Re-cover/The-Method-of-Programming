#include <iostream>
#include <string>

using namespace std;

bool StringContain(string &a, string &b)
{
	const int p[26] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 
	53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
	int f = 1;
	for (int i = 0; i < a.length(); ++i)
	{
		int x = p[a[i] - 'A'];
		if (f % x)	//若可以整除，表示a[i]已经被计算在乘积内了
			f *= x;
	}
	for (int i = 0; i < b.length(); ++i)
	{
		int x = p[b[i] - 'A'];
		if (f % x)
			return false;
	}
	return true;
}

int main(int argc, char *argv[]) {
	string a, b;
	while(cin>>a>>b)
	{
		if(StringContain(a, b))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
		
	}
	return 0;
	
}