#include "contact.h"

//初始化
void InitContact(Contact* con)
{
	assert(con);
	//动态
	con->data = (PeoInfo*)calloc(3, sizeof(PeoInfo));
	if (con->data == NULL)
		return;
	con->capacity = 3;
	con->sz = 0;

	LoadContact(con);
	//静态
	/*con->sz = 0;
	memset(con->data, 0, sizeof(con->data));*/
	/*for (int i = 0; i < 100; i++)
	{
		strcpy(con->data[i].name, 0);把地址为0的字符串放过去越界访问
		strcpy(con->data[i].phone, 0);
		strcpy(con->data[i].address, 0);
		strcpy(con->data[i].sex, 0);
		con->data[i].age = 0;
	}*/
}
//加载文件信息
void LoadContact(Contact* con)
{
	FILE* pf = fopen("contact.txt", "rb");
	if (NULL == pf)
	{
		perror("LoadContact");
		return;
	}
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		if (con->capacity == con->sz)
		{
			PeoInfo* ptr = (PeoInfo*)realloc(con->data, (con->capacity + 2) * sizeof(PeoInfo));
			if (ptr == NULL)
			{
				perror("LoadContact");
				return;
			}
			else
			{
				con->data = ptr;
				con->capacity += 2;
			}
		}
		con->data[con->sz] = tmp;
		con->sz++;
	}
	fclose(pf);
	pf = NULL;
}
//通过名字查找
int FindByName(const Contact* con, char* name)
{
	for (int i = 0; i < con->sz; i++)
	{
		if ((strcmp(name, con->data[i].name)) == 0)
		{
			return i;
		}
	}
	return -1;
}
//添加
void AddContact(Contact* con)
{
	assert(con);
	//动态
	if (con->capacity == con->sz)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(con->data, (con->capacity + 2) * sizeof(PeoInfo));
		if (ptr == NULL)
			perror("AddContact");
		else
		{
			con->data = ptr;
			con->capacity += 2;
		}	
	}
	//静态
	/*if (con->sz == MAX)
	{
		printf("通讯录已满，无法添加\n");
	}*/
	else 
	{
		printf("请输入名字>");
		scanf("%s", con->data[con->sz].name);
		printf("请输入性别>");
		scanf("%s", con->data[con->sz].sex);
		printf("请输入年龄>");
		scanf("%d", &(con->data[con->sz].age));
		printf("请输入电话>");
		scanf("%s", con->data[con->sz].phone);
		printf("请输入住址>");
		scanf("%s", con->data[con->sz].address);
		con->sz++;
		printf("成功添加\n");
	}
}
//删除
void DelContact(Contact* con)
{
	assert(con);
	if (con->sz == 0)
		printf("通讯录为空，无法删除\n");
	int del = 0;
	char name[MAX_NAME] = { 0 };
	printf("请输入要删除的联系人姓名>");
	scanf("%s", name);
	//找相关联系人的下标
	del = FindByName(con,name);
	/*for (int i = 0; i < con->sz; i++)
	{
		if ((strcmp(name, con->data[i].name)) == 0)
		{
			del = i;
			
		}
	}*/
	if (del != -1)
	{
		for (int i = del; i < con->sz - 1; i++)
		{
			//结构体数组可以直接这样赋值
			con->data[i] = con->data[i + 1];
		}
		con->sz--;
		printf("成功删除指定联系人\n");
	}
	else
		printf("未找到指定联系人\n");
}
//查找指定联系人
void SearchContact(const Contact* con)
{
	assert(con);
	int pos = 0;
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找的联系人姓名>");
	scanf("%s", name);
	pos = FindByName(con, name);
	if (pos == -1)
		printf("未找到该联系人\n");
	else
	{
		printf("%-20s\t%-5s\t%-3s\t%-15s\t%-30s\n", "名字", "性别", "年龄", "电话", "住址");
		printf("%-20s\t%-5s\t%-3d\t%-15s\t%-30s\n",
			con->data[pos].name,
			con->data[pos].sex,
			con->data[pos].age,
			con->data[pos].phone,
			con->data[pos].address);
	}
}
//修改指定联系人
void ModifyContact(Contact* con)
{
	assert(con);
	int pos = 0;
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改的联系人姓名>");
	scanf("%s", name);
	pos = FindByName(con, name);
	if (pos == -1)
		printf("未找到该联系人\n");
	else
	{
		printf("请输入名字>");
		scanf("%s", con->data[pos].name);
		printf("请输入性别>");
		scanf("%s", con->data[pos].sex);
		printf("请输入年龄>");
		scanf("%d", &(con->data[pos].age));
		printf("请输入电话>");
		scanf("%s", con->data[pos].phone);
		printf("请输入住址>");
		scanf("%s", con->data[pos].address);
		printf("成功修改\n");
	}
}
//联系人排序
void SortContact(const Contact* con)
{
	assert(con);
	qsort(con->data, con->sz, sizeof(con->data[0]), CmpByName);
	printf("排序成功\n");
}
//按名字比较
int CmpByName(const void* p1, const void* p2)
{
	return strcmp(((PeoInfo*)p1)->name, ((PeoInfo*)p2)->name);
}
//显示
void ShowContact(const Contact* con)
{
	assert(con);
	//标题
	printf("%-20s\t%-5s\t%-3s\t%-15s\t%-30s\n", "名字","性别","年龄","电话","住址");
	//数据
	for (int i = 0; i < con->sz; i++)
	{
		printf("%-20s\t%-5s\t%-3d\t%-15s\t%-30s\n", 
			con->data[i].name,
			con->data[i].sex,
			con->data[i].age,
			con->data[i].phone,
			con->data[i].address);
	}
}
//退出
void ExitContact(Contact* con)
{
	SaveContact(con);
	free(con->data);
	con->data = NULL;
	con->capacity = 0;
	con->sz = 0;
	printf("退出通讯录\n");
}
//保存数据
void SaveContact(const Contact* con)
{
	FILE* pf = fopen("contact.txt", "wb");
	if (NULL == pf)
	{
		perror("SaveContact");
		return;
	}
	
	fwrite(con->data, sizeof(PeoInfo), con->sz, pf);
	
	fclose(pf);
	pf = NULL;
}