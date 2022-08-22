#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int a, t;

	scanf("%d", &a);
	scanf("%d", &t);

	float luas;
	luas = 0.5 * a * t;

	printf("%.2lf\n", luas);
	return 0;
}