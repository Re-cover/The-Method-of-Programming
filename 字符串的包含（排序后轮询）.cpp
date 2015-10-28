#include <iostream>
#include <algorithm>

using namespace std;

bool StringContain(string &a, string &b)
{
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for (int pa = 0, pb = 0; pb < b.length(); )
	{
		while((pa < a.length()) && (a[pa] < b[pb]))
			++pa;
		if((pa >= a.length()) || (a[pa] > b[pb]))
			return false;
		++pb;
	}
	return true;
}

int main(int argc, char *argv[]) {
	string a, b;
	while (cin>>a>>b) {
		if(StringContain(a, b))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}