//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));//ת���ַ���һ����
//    return 0;
//}

//BC83 ��5��������
//
//����
//�ж�һ�������Ƿ���5������һ��ͦ�򵥵����⣬�����KiKi���ǲ����Լ����������ҵ������д���룬��Ͱ�����ɡ�
//
//����������
//�������һ������M��1��M��100, 000����
//���������
//�������һ�У����M���Ա�5���������YES���������NO�������Сд���У���

#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if (a % 5 == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
