#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����������������������ʱ������
//
//����������ʱ������������������������
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}



//JZ15 ��������1�ĸ���

//����
//����һ������ n ���������32λ�����Ʊ�ʾ��1�ĸ��������и����ò����ʾ��
//int NumberOf1(int n) {
//    // write code here
//    int count = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        if ((n & (1 << i)) != 0)
//            count++;
//    }
//    return count;
//}
//int main()
//{
//    printf("%d", NumberOf1(1));
//    return 0;
//}




//��ӡ���������Ƶ�����λ��ż��λ
//
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	for (int i = 0; i < 32; i+=2)
//	{
//		if ((a & (1 << i)) != 0)
//			printf("1 ");
//		else
//			printf("0 ");
//	}
//	printf("\n");
//	for (int i = 1; i < 32; i += 2)
//	{
//		if ((a & (1 << i)) != 0)
//			printf("1 ");
//		else
//			printf("0 ");
//	}
//	printf("\n");
//	for (int i = 1; i < 32; i++)
//	{
//		if ((a & (1 << i)) != 0)
//			printf("1 ");
//		else
//			printf("0 ");
//	}
//	printf("\n");
//}







//int main() {
//    int a, b;
//    scanf("%d%d", &a, &b);
//    int count = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        if ((a & (1 << i)) != (b & (1 << i)))
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}



//���Ͼ���
//
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//
//Ҫ��ʱ�临�Ӷ�С��O(N);
int main()
{

	return 0;
}