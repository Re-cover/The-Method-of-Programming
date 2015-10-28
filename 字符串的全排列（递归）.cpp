#include <iostream>
#include <string>
//#include <algorithm>
#include <utility>
using namespace std;

void CalcAllPermutation(char *perm, int from, int to)
{
	if (to <= 1)
		return;
	if (from == to)
	{
		for (int i = 0; i <= to; i++)
			cout << perm[i];
		cout << endl;
	}
	else
	{
		for (int j = from; j <= to; j++)
		{
			swap(perm[j], perm[from]);
			CalcAllPermutation(perm, from + 1, to);
			swap(perm[j], perm[from]);
		}
	}
}

int main(int argc, char *argv[]) {
	char s[100];
	while(cin >> s)
		CalcAllPermutation(s, 0, strlen(s) - 1);
	return 0;
}