// ctest.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define MAX 100
struct table
{
	int * previous;
	int length;
	int * next;
};
int main()
{
	struct table chain[MAX];
	for (int i = 0; i < MAX; i++)
	{
		chain[i].length = i;
		if (i = 0)
			chain[i].previous = NULL;
		else
			*chain[i].previous = chain[i - 1].length;
		if (i - MAX < 0)
			chain[i].next = NULL;
		else
			*chain[i].next = chain[i + 1].length;

	}
	for (int i = 0; i < MAX; i++)
	{
		printf("%d", chain[i].length);
	}
    return 0;
}


