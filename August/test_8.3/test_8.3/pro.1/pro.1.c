#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�˷��ھ���
//
//����Ļ�����9 * 9�˷��ھ���

//int main()
//{
//	int x;
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			x = i * j;
//			printf("%d * %d = %d\t", i, j, x);
//		}
//		printf("\n");
//	}
//	return 0;
//}







//�����ֵ
//
//��10 �����������ֵ

//int main()
//{
//	int input[10] = { 0 };
//	int tmp = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &input[i]);//scanf������ֵ����ո�ֿ������Լ�����һ��
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10 - i - 1; j++)
//		{
//			if (input[j] > input[j+1])
//			{
//				tmp = input[j];
//				input[j] = input[j + 1];
//				input[j + 1] = tmp;
//			}
//		}
//	}
//	printf("MAX=%d", input[9]);
//	return 0;
//}








//�������
//
//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����

//int main()
//{
//	double sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += 1 / (double)i;
//		}
//		else
//		{
//			sum -= 1 /(double) i;
//		}
//	}
//	printf("%lf", sum);
//	return 0;
//}









//��9�ĸ���
//
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9

//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if ( i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}








//���ֲ���
//
//��д������һ���������������в��Ҿ����ĳ����
//
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����

//int BinarySearch(int* nums,int numsize,int x)
//{
//	int high = numsize - 1, low = 0, middle = numsize / 2;
//	while (low <= high)
//	{
//		if (nums[middle] < x)
//		{
//			low = low + 1;
//		}
//		else if (nums[middle] > x)
//		{
//			high = high - 1;
//		}
//		else 
//			return middle;
//		middle = (low + high) / 2;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[5] = { 6,31,51,463,1512 };
//	int mid = BinarySearch(arr, 5, 1512);
//	printf("%d", mid);
//	return 0;
//}








//��������Ϸ

//int main()
//{
//	srand((unsigned int)time(NULL));
//	int ran = rand();
//	//printf("%d\n", ran);
//	int input;
//	while (scanf("%d",&input)!=EOF)
//	{
//		if (input < ran)
//		{
//			printf("��С��\n");
//		}
//		else if (input > ran)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�ش���ȷ\n");
//			break;
//		}
//	}
//}







//BC112 С�������
//
//����
//С��������Ӵ�����ͷ��Ŧ����������Ľ��������С���ֺܱ���������������
//
//����������
//����һ��������n(1 �� n �� 109)
//
//���������
//���һ��ֵ��Ϊ��ͽ����

//#include <stdio.h>
//int main() {
//    long long sum = 0, input = 0;
//    scanf("%d", &input);
//    for (int i = 0; i <= input; i++)
//    {
//        sum += i;
//    }
//    printf("%ld", sum);
//    return 0;
//}





//BC123 С�����������
//
//����
//С���ֻ��4������������������ҵ���������
//����������
//һ�У�4���������ÿո�ֿ���
//���������
//һ�У�һ��������Ϊ�����4������������������

//int main() {
//    int a[4] = { 0 };
//    int tmp = 0;
//    scanf("%d%d%d%d", &a[0], &a[1], &a[2], &a[3]);
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 4 - i - 1; j++)
//        {
//            if (a[j] < a[j + 1])
//            {
//                tmp = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = tmp;
//            }
//        }
//    }
//    printf("%d", a[0]);
//    return 0;
//}






//BC47 �ж��ǲ�����ĸ
//
//����
//KiKi���ж�������ַ��ǲ�����ĸ����������ʵ�֡�
//
//����������
//�������룬ÿһ������һ���ַ���
//���������
//���ÿ�����룬�������ռһ�У��ж������ַ��Ƿ�Ϊ��ĸ���������������������

//int main() {
//    char ch = '0';
//    while (scanf("%c", &ch) != EOF)
//    {
//        if (ch >= 65 && ch <= 90)
//            printf("%c is an alphabet.\n", ch);
//        else if (ch >= 97 && ch <= 122)
//            printf("%c is an alphabet.\n", ch);
//        else
//            printf("%c is not an alphabet.\n", ch);
//        getchar();
//    }
//    return 0;
//}






//BC37 ����
//
//����
//KiKi�ǳ�ϲ����������һ�ҵ�����������һ���·������˽⵽����������ǡ�˫11����11��11�գ�������·���7�ۣ���˫12�� ��12��12�գ�������·���8�ۣ�������Ż�ȯ���Զ����50Ԫ���Ż�ȯֻ����˫11��˫12ʹ�ã�����KiKi����������Ǯ����
//
//���ݷ�Χ���·��۸����� 1 \le val \le 100000 \1��val��100000
//����������
//һ�У��ĸ����֣���һ������ʾС�����е��·��۸񣬵ڶ��͵����������ֱ��ʾ������·ݡ���������ڡ����ĸ�������ʾ�Ƿ����Ż�ȯ�����Ż�ȯ��1��ʾ�����Ż�ȯ��0��ʾ���� ע���������ڱ�ֻ֤�С�˫11���͡�˫12����
//���������
//һ�У�С��ʵ�ʻ���Ǯ����������λС����������ʾ����Ҫָ���̼ҵ�����Ǯ��

//int main() {
//    float money = 0;
//    int mon, day, isdis;
//    scanf("%f%d%d%d", &money, &mon, &day, &isdis);
//    if (mon == 11)
//    {
//        money = money * 0.7;
//    }
//    if (mon == 12)
//    {
//        money = money * 0.8;
//    }
//    if (isdis == 1)
//    {
//        money = money - 50;
//    }
//    if (money < 0)
//    {
//        money = 0;
//    }
//    printf("%0.2f", money);
//    return 0;
//}






//�˷��ھ���
//
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

void Mix(int input)
{
	int x;
	for (int i = 1; i <= input; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			x = i * j;
			printf("%d * %d = %d\t", i, j, x);
		}
		printf("\n");
	}
}
int main()
{
	int input;
	scanf("%d", &input);
	Mix(input);
	return 0;
}







//������������
//
//ʵ��һ�������������������������ݡ�

//void Exchange(int* a, int* b)
//{
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	Exchange(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}







//�����ж�����
//
//ʵ�ֺ����ж�year�ǲ������ꡣ

//int runnian(int year)
//{
//	if (year % 100 != 0 && year % 4 == 0)
//	{
//		return 1;
//	}
//	if (year % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if (runnian(year) == 1)
//	{
//		printf("%d��������", year);
//	}
//	else
//	{
//		printf("%d�겻������", year);
//	}
//	return 0;
//}






//�����ж�����
//
//ʵ��һ������is_prime���ж�һ�����ǲ���������
//
//��������ʵ�ֵ�is_prime��������ӡ100��200֮���������

//int issushu(int num)
//{
//	for (int j = 2; j <= num/2; j++)
//	{
//		if (num % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		if (issushu(i)) 
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}