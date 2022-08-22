#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int a, b, bagi, sisa;

	scanf("%d", &a);
	scanf("%d", &b);
	bagi = a / b;

	printf("masing-masing %d\n", bagi);
	sisa = a % b;

	printf("bersisa %d\n", sisa);
	return 0;
}