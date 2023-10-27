//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%d\n", a);
//	printf("%d\n", *pa);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 10;
//    char* pc = (char*)&n;
//    int* pi = &n;
//
//    printf("%p\n", &n);
//    printf("%p\n", pc);
//    printf("%p\n", pc + 1);
//    printf("%p\n", pi);
//    printf("%p\n", pi + 1);
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0;
//	*pi = 0;
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//    printf("%p\n", arr);
//    printf("%p\n", &arr[0]);
//    return 0;
//}



#include <stdio.h>

int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 6.5;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);

	float a = 5.5f;
	printf("%d", a);

	//int a = 10;
	////double& b = a;
	//const double& c = a;


	return 0;
}