#include <iostream>
#include <string>

using namespace std;

bool StringContain(string &a, string &b)
{
	int count = 0;
	for (int i = 0; i < b.length(); ++i)
	{
		count++;
		int j;
		for(j = 0; (j < a.length()) && (a[j] != b[i]); ++j)
		;
		if (j >= a.length()) {
			return false;
		}
	}
	return true;
}
int main(int argc, char *argv[]) {
	string a, b;
	while (cin>>a>>b) {
		if(StringContain(a, b))
			printf("Yes\n");
		else 
			printf("No\n");
	}
	return 0;
}