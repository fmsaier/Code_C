#include "contact.h"

void menu()
{
	printf("**************************\n");
	printf("****1.add     2.del*******\n");
	printf("****3.search  4.modify****\n");
	printf("****5.show    6.sort******\n");
	printf("****0.exit          ******\n");
}
void test()
{
	//0改成退出？
	void(*contact[8])(Contact*) =
	{ ExitContact ,AddContact ,DelContact ,SearchContact ,ModifyContact ,ShowContact ,SortContact ,InitContact };
	int input = 0;
	Contact con;
	contact[7](&con);
	do
	{
		menu();
		printf("请输入>");
		scanf("%d", &input);
		//函数指针数组
		if (input > 6 && input < 0)
			printf("输入非法，请重新输入\n");
		contact[input](&con);
		//枚举
		/*switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("输入非法，请重新输入\n");
			break;
		}*/
	} while (input);
}
int main()
{
	test();
	return 0;
}
