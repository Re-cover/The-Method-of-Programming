#include <stdio.h>
#include <string.h>
void LeftShiftOne(char* s, int n)
{
	char t = s[0];
	for (int i = 1; i < n; i++)
		s[i - 1] = s[i];
	s[n - 1] = t;
}
void LeftRotateString(char* s, int n, int m)
{
	while (m--)
		LeftShiftOne(s, n);
}
int main(int argc, char *argv[]) {
	char s[100];
	int n, m;
	while(~scanf("%s %d", s, &m))
	{
		n = strlen(s);
		LeftRotateString(s, n, m);
		printf("%s\n", s);
	}
	return 0;
}