#define _CRT_SECURE_NO_WARNINGS 1
//BC17 计算表达式的值
//
//描述
//请计算表达式“(-8 + 22)×a - 10 + c÷2”，其中，a = 40，c = 212。
//
//输入描述：
//无。
//输出描述：
////(-8 + 22)×a - 10 + c÷2计算之后的结果，为一个整数。
//#include <stdio.h>
//int main() {
//    int a = 40, c = 212;
//    int x = (-8 + 22) * a - 10 + c / 2;
//    printf("%d", x);
//    return 0;
//}



//求两个数的较大值
//
//作业内容
//写一个函数求两个整数的较大值
//
//如：
//
//输入：10 20
//
//输出较大值：20

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//	c = a > b ? a : b;
//	printf("%d", c);
//	return 0;
//}


//BC114 小乐乐排电梯
//
//描述
//小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）
//
//输入描述：
//输入包含一个整数n (0 ≤ n ≤ 109)
//
//输出描述：
//输出一个整数，即小乐乐到达楼上需要的时间。

//#include <stdio.h>
//int main() {
//    int n, time;
//    scanf("%d", &n);
//    time = (n / 12) * 4 + 2;
//    printf("%d", time);
//    return 0;
//}




//BC9 printf的返回值
//
//描述
//KiKi写了一个输出“Hello world!”的程序，BoBo老师告诉他printf函数有返回值，你能帮他写个程序输出printf(“Hello world!”)的返回值吗？
//输入描述：
//无
//输出描述：
//包括两行：
//第一行为“Hello world!”
//第二行为printf(“Hello world!”)调用后的返回值。

//#include <stdio.h>
//int main() {
//    int a;
//    a = printf("Hello world!");
//    printf("\n");
//    printf("%d", a);
//    return 0;
//}




//BC51 三角形判断
//
//描述
//KiKi想知道已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//
//输入描述：
//题目有多组输入数据，每一行输入三个a，b，c(0 < a, b, c < 1000)，作为三角形的三个边，用空格分隔。
//	
//输出描述：
//针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，等腰三角形则输出“Isosceles triangle!”，其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”。

//#include <stdio.h>
//int main() {
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)//多次输入就用EOF表示终止 Ctrl+ZZ表示输入结束返回EOF
//    {
//        if (a + b > c && a + c > b && c + b > a)
//        {
//            if (a == b || a == c || b == c)
//            {
//                if (a == b && a == c)
//                {
//                    printf("Equilateral triangle!\n");
//                }
//                else {
//                    printf("Isosceles triangle!\n");
//                }
//            }
//            else {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else {
//            printf("Not a triangle!\n");
//        }
//    }
//
//    return 0;
//}





//BC25 计算体重指数
//
//描述
//问题：计算BMI指数（身体质量指数）。BMI指数（即身体质量指数，简称体质指数又称体重，英文为Body Mass Index，简称BMI），是用体重公斤数除以身高米数平方得出的数字，是目前国际上常用的衡量人体胖瘦程度以及是否健康的一个标准。主要用于统计用途，当我们需要比较及分析一个人的体重对于不同高度的人所带来的健康影响时，BMI值是一个中立而可靠的指标。
//
//数据范围：输入的数据满足 50 \le n \le 180 \50≤n≤180 
//
//输入描述：
//一行，两个整数，分别表示体重（公斤），身高（厘米），中间用一个空格分隔。
//输出描述：
//一行，BMI指数（保留两位小数）。

//#include <stdio.h>
//int main() {
//    int a, b;
//    float c, d;
//    scanf("%d %d", &a, &b);
//    d = (float)b / 100;
//    c = a / d / d;
//    printf("%0.2f", c);
//    return 0;
//}




//BC22 你能活多少秒
//
//描述
//问题：一年约有 3.156×107 s，要求输入您的年龄，显示该年龄合多少秒。
//
//数据范围： 0 < age \le 200 \0 < age≤200 
//
//输入描述：
//	一行，包括一个整数age。
//输出描述：
//	一行，包含一个整数，输出年龄对应的秒数。

//#include <stdio.h>
//#define TIME 3.156e7
//int main() {
//    long long a;
//    scanf("%lld", &a);
//    long long b = a * TIME;
//    printf("%lld", b);
//    return 0;
//}

#include <stdio.h>
#define TIME 3.156e7
int main() {
    long long a;
    scanf("%lld", &a);
    printf("%lld", a*TIME);//数据存到整形读取的时候又进行升级改变了原有数据
    return 0;
}