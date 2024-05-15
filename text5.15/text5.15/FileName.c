#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

struct S1
{
	char c1;
	char c2;
	int i;
};

struct S2
{
	char c1;
	int i;
	char c2;
};

struct S3
{
	double d;
	char c;
	int i;
};

struct S4
{
	char c1;
	struct S3 s3;
	double d;
};

int main()
{
	//struct S1 s1 = {0};//8
	//struct S2 s2 = { 0 };//12

	//printf("%zd\n", sizeof(struct S1));//8
	//printf("%zd\n", sizeof(struct S2));
	//printf("%zd\n", sizeof(struct S3));
	//printf("%zd\n", sizeof(struct S4));
	//printf("%zd\n", offsetof(struct S1, c1));
	//printf("%zd\n", offsetof(struct S1, c2));
	//printf("%zd\n", offsetof(struct S1, i));

	//printf("%zd\n", offsetof(struct S2, c1));
	//printf("%zd\n", offsetof(struct S2, i));
	//printf("%zd\n", offsetof(struct S2, c2));
	printf("%zd\n", offsetof(struct S4, c1));
	printf("%zd\n", offsetof(struct S4, s3));
	printf("%zd\n", offsetof(struct S4, d));

	return 0;
}