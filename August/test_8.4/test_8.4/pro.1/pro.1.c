#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//����쳲�������
//
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//
//���磺
//
//���룺5  �����5
//
//���룺10�� �����55
//
//���룺2�� �����1

//int Fun(int x)
//{
//	if (x == 1 || x == 2)
//		return 1;
//	else
//		return Fun(x - 1) + Fun(x - 2);
//}
//int Fun(int x)
//{
//	int a = 1, b = 1, c, tmp;
//	if (x == 1 || x == 2)
//		return 1;
//	else
//	{
//		for (int i = 3; i <= x; i++)
//		{
//			c = a + b;
//			tmp = b;
//			b = c;
//			a = tmp;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	input = Fun(input);
//	printf("%d", input);
//	return 0;
//}







//�ݹ�ʵ��n��k�η�
//
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�

//int Fun(int n,int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k == 1)
//		return n;
//	else
//		return n * Fun(n, k - 1);
//}
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d%d", &n,&k);
//	n = Fun(n,k);
//	printf("%d", n);
//	return 0;
//}






//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//���룺1729�������19

//int DigitSum(int n)
//{
//	if (n < 9)
//	{
//		return n;
//	}
//	else
//	{
//		return DigitSum(n / 10) + n % 10;// ǰn-1λ֮��+��nλ
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	input = DigitSum(input);
//	printf("%d", input);
//	return 0;
//}







//�ַ������򣨵ݹ�ʵ�֣�
//
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//���� :
//
//char arr[] = "abcdef";
//
//����֮����������ݱ�ɣ�fedcba

//int strlen(char* arr) 
//{
//	int len = 0;
//	while (*arr++ != '\0') {
//		len++;
//	}
//	return len;
//}
//
//void reverse(char* str) 
//{
//	int len = my_strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) > 1) 
//	{
//		reverse(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}







//strlen��ģ�⣨�ݹ�ʵ�֣�
//
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen

//int Strlen(char* arr)
//{
//	char* tail = arr;
//	int count = 0;
//	while (*tail)
//	{
//		count++;
//		tail++;
//	}
//	return count;
//}
//int Strlen(char* arr)
//{
//	if (*arr == '\0')
//		return 0;
//	else
//	{
//		return 1 + Strlen(arr + 1);
//	}
//}
//int main()
//{
//	char arr[] = "acva";
//	int len = 0;
//	len = Strlen(arr);
//	printf("%d", len);
//	return 0;
//}







//��׳�
//
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

//int Fun(int n)
//{
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 1;
//	else
//	{
//		return n * Fun(n - 1);
//	}
//}
//int Fun(int n)
//{
//	int sum = 1;
//	if (n == 0)
//		return 1;
//	while (n >= 1)
//	{
//		sum *= n;
//		n--;
//	}
//	return sum;
//}
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	int a = Fun(input);
//	printf("%d", a);
//	return 0;
//}







//��ӡһ������ÿһλ
//
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

//void Print(int n)
//{
//	if (n < 9)
//		printf("%d\t", n);
//	else
//	{
//		printf("%d\t", n % 10);
//		return Print(n / 10);
//	}
//}
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	Print(input);
//	return 0;
//}

//int main()
//{
//	char acX[] = "abcdefg";
//	char acY[] = { 'a','b','c','d','e','f','g' };
//	int a = sizeof(acX);//8
//	int b = sizeof(acY);//7
//	printf("%d %d", a, b);
//	return 0;
//}








//��һά���顿��������
//
//������A�е����ݺ�����B�е����ݽ��н�����������һ����

//void exchange(int* a, int* b, int numsize)
//{
//	int tmp = 0;
//	for (int i = 0; i < numsize; i++)
//	{
//		tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//}
//int main()
//{
//	int a[5] = { 1,6,8.6,9 };
//	int b[5] = { 6,9,8,4,3 };
//	exchange(a, b, 5);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d %d\n", a[i], b[i]);
//	}
//	return 0;
//}







//ʹ�ú���ʵ���������
//
//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

//void init(int* a,int numsize)
//{
//	for (int i = 0; i < numsize; i++)
//	{
//		a[i] = 0;
//	}
//}
//void print(int* a, int numsize)
//{
//	for (int i = 0; i < numsize; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//void reverse(int* a, int numsize)
//{
//	int low = 0, high = numsize - 1, tmp = 0;
//	while (low <= high)
//	{
//		tmp = a[low];
//		a[low] = a[high];
//		a[high] = tmp;
//		high--;
//		low++;
//	}
//}
//int main()
//{
//	int a[] = { 1,2,13,46,481,45 };
//	print(a, 6);
//	reverse(a, 6);
//	print(a, 6);
//	init(a, 6);
//	print(a, 6);
//	return 0;
//}







//ð������
//
//ʵ��һ�������������ð������

//void BubbleSort(int* a, int numsize)
//{
//	int tmp = 0;
//	for (int i = 0; i < numsize; i++)
//	{
//		for (int j = 0; j < numsize - i - 1; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int a[] = { 45,4612,12,48,31,4 };
//	print(a, 6);
//	BubbleSort(a, 6);
//	print(a, 6);
//	return 0;
//}


//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}






//BC100 �������кϲ�
//
//����
//���������������е����У����������кϲ�Ϊһ���������в������
//
//���ݷ�Χ�� 1 \le n, m \le 1000 \1��n, m��1000  �� �����е�ֵ���� 0 \le val \le 30000 \0��val��30000
//����������
//����������У�
//
//��һ�а�������������n, m���ÿո�ָ���n��ʾ�ڶ��е�һ���������������ֵĸ�����m��ʾ�����еڶ����������������ֵĸ�����
//
//�ڶ��а���n���������ÿո�ָ���
//
//�����а���m���������ÿո�ָ���
//���������
//���Ϊһ�У��������Ϊn + m���������У�������Ϊn���������кͳ���Ϊm�����������е�Ԫ�����½��������������кϲ���

//void Sort(int* a, int n, int* b, int m)
//{
//    int* c = (int*)malloc(sizeof(int) * (m + n));
//    int i = 0, j = 0, k = 0;
//    while (i < n && j < m)
//    {
//        if (a[i] < b[j])
//        {
//            c[k++] = a[i++];
//        }
//        else
//        {
//            c[k++] = b[j++];
//        }
//
//    }
//    if (j == m)//��˭��¼�꣬����˭��˭С
//    {
//        while (i < n)
//        {
//            c[k++] = a[i++];
//        }
//    }
//    else
//    {
//        while (j < m)
//        {
//            c[k++] = b[j++];
//        }
//    }
//    for (int i = 0; i < m + n; i++)
//    {
//        printf("%d ", c[i]);
//    }
//
//}
//int main() 
// {
//    int m, n;
//    scanf("%d%d", &n, &m);
//    int* a = (int*)malloc(sizeof(int) * n);
//    int* b = (int*)malloc(sizeof(int) * m);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d", &b[i]);
//    }
//    Sort(a, n, b, m);
//    return 0;
//}







//BC96 ���������ж�
//
//����
//����һ���������У��ж��Ƿ����������У�����ָ�����е�������С����������ߴӴ�С����(��ͬԪ��Ҳ��Ϊ����)��
//
//���ݷ�Χ�� 3 \le n \le 50 \3��n��50  �����е�ֵ������ 1 \le val \le 100 \1��val��100
//����������
//��һ������һ������N(3��N��50)��
//�ڶ�������N���������ÿո�ָ�N��������
//���������
//���Ϊһ�У���������������sorted���������unsorted��

//int main() 
//{
//    int numsize;
//    scanf("%d", &numsize);
//    int* a = (int*)malloc(sizeof(int) * numsize);
//    for (int i = 0; i < numsize; i++) 
//    {
//        scanf("%d", &a[i]);
//    }
//    if (a[0] <= a[1]) 
//    {
//        int i = 0;
//        while (a[i] <= a[i + 1] && i < numsize - 1) 
//        {
//            i++;
//        }
//        if (i == numsize - 1)
//            printf("sorted");
//        else
//            printf("unsorted");
//    }
//    else if (a[0] >= a[1]) 
//    {
//        int i = 0;
//        while (a[i] >= a[i + 1] && i < numsize - 1) 
//        {
//            i++;
//        }
//        if (i == numsize - 1)
//            printf("sorted");
//        else
//            printf("unsorted");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	return 0;
//}



//int main()
//{
//	char ch[3] = "��";//һ�����������ַ�
//	printf("%s", ch);
//	return 0;
//}





#include <stdio.h>
//void test()
//{
//	//static���ξֲ��������ı��������ڣ���ֻ���ں������������
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)//���ֲ�����ͬ��������ͬһ��
//	{
//		test();
//	}
//	return 0;
//}


//int main()
//{
//	int ret = printf("���");
//	printf("\n");
//	printf("%d", ret);
//	return 0;
//}


int main()
{
	double a=3.144612313434;
	float b = 3.144612313434f;
	int c = 2;
	printf("%lf\n", a);
	printf("%.7f\n", b);
	printf("%3d\n", c);
	printf("%03d", c);
	return 0;
}