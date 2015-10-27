#include <iostream>
#include <string>

using namespace std;
void ReverseString(char* s, int from, int to)
{
	while (from < to)
	{
		char t = s[from];
		s[from++] = s[to];
		s[to--] = t;
	}
}

void LeftRotateString(char* s, int n, int m)
{
	m %= n;
	ReverseString(s, 0, m - 1);
	ReverseString(s, m, n - 1);
	ReverseString(s, 0, n - 1);
}

int main(int argc, char *argv[]) {
	char s[100];
	int n, m;
	while (~scanf("%s %d", s, &m)) 
	{
		n = strlen(s);
		LeftRotateString(s, n, m);
		printf("%s\n", s);
	}
	return 0;
}