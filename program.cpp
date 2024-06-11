#include<iostream>

using namespace std;

int abc(int c, int d)
{
	int a = c;
	int b = d;
	return a - b;
}
int main()
{
	int a = 8; int b = 7;
	return abc(a, b);
}
