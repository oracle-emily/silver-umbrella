#define _CRT_SECURE_NO_WARNINGS 1
 


# include <stdio.h>

struct s1 {
	char ci;
	char c2;
	int i;
};

struct s2 {
	char ci;
	int i;
	char c2;
};
//�ṹ���ڴ����--->�������
int main()
{
	printf("%zd\n",sizeof(struct s1));
	printf("%zd\n", sizeof(struct s2));
	return 0;
}