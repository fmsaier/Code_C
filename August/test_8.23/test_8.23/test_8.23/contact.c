#include "contact.h"

//��ʼ��
void InitContact(Contact* con)
{
	assert(con);
	//��̬
	con->data = (PeoInfo*)calloc(3, sizeof(PeoInfo));
	if (con->data == NULL)
		return;
	con->capacity = 3;
	con->sz = 0;

	LoadContact(con);
	//��̬
	/*con->sz = 0;
	memset(con->data, 0, sizeof(con->data));*/
	/*for (int i = 0; i < 100; i++)
	{
		strcpy(con->data[i].name, 0);�ѵ�ַΪ0���ַ����Ź�ȥԽ�����
		strcpy(con->data[i].phone, 0);
		strcpy(con->data[i].address, 0);
		strcpy(con->data[i].sex, 0);
		con->data[i].age = 0;
	}*/
}
//�����ļ���Ϣ
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
//ͨ�����ֲ���
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
//���
void AddContact(Contact* con)
{
	assert(con);
	//��̬
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
	//��̬
	/*if (con->sz == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
	}*/
	else 
	{
		printf("����������>");
		scanf("%s", con->data[con->sz].name);
		printf("�������Ա�>");
		scanf("%s", con->data[con->sz].sex);
		printf("����������>");
		scanf("%d", &(con->data[con->sz].age));
		printf("������绰>");
		scanf("%s", con->data[con->sz].phone);
		printf("������סַ>");
		scanf("%s", con->data[con->sz].address);
		con->sz++;
		printf("�ɹ����\n");
	}
}
//ɾ��
void DelContact(Contact* con)
{
	assert(con);
	if (con->sz == 0)
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
	int del = 0;
	char name[MAX_NAME] = { 0 };
	printf("������Ҫɾ������ϵ������>");
	scanf("%s", name);
	//�������ϵ�˵��±�
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
			//�ṹ���������ֱ��������ֵ
			con->data[i] = con->data[i + 1];
		}
		con->sz--;
		printf("�ɹ�ɾ��ָ����ϵ��\n");
	}
	else
		printf("δ�ҵ�ָ����ϵ��\n");
}
//����ָ����ϵ��
void SearchContact(const Contact* con)
{
	assert(con);
	int pos = 0;
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ���ҵ���ϵ������>");
	scanf("%s", name);
	pos = FindByName(con, name);
	if (pos == -1)
		printf("δ�ҵ�����ϵ��\n");
	else
	{
		printf("%-20s\t%-5s\t%-3s\t%-15s\t%-30s\n", "����", "�Ա�", "����", "�绰", "סַ");
		printf("%-20s\t%-5s\t%-3d\t%-15s\t%-30s\n",
			con->data[pos].name,
			con->data[pos].sex,
			con->data[pos].age,
			con->data[pos].phone,
			con->data[pos].address);
	}
}
//�޸�ָ����ϵ��
void ModifyContact(Contact* con)
{
	assert(con);
	int pos = 0;
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸ĵ���ϵ������>");
	scanf("%s", name);
	pos = FindByName(con, name);
	if (pos == -1)
		printf("δ�ҵ�����ϵ��\n");
	else
	{
		printf("����������>");
		scanf("%s", con->data[pos].name);
		printf("�������Ա�>");
		scanf("%s", con->data[pos].sex);
		printf("����������>");
		scanf("%d", &(con->data[pos].age));
		printf("������绰>");
		scanf("%s", con->data[pos].phone);
		printf("������סַ>");
		scanf("%s", con->data[pos].address);
		printf("�ɹ��޸�\n");
	}
}
//��ϵ������
void SortContact(const Contact* con)
{
	assert(con);
	qsort(con->data, con->sz, sizeof(con->data[0]), CmpByName);
	printf("����ɹ�\n");
}
//�����ֱȽ�
int CmpByName(const void* p1, const void* p2)
{
	return strcmp(((PeoInfo*)p1)->name, ((PeoInfo*)p2)->name);
}
//��ʾ
void ShowContact(const Contact* con)
{
	assert(con);
	//����
	printf("%-20s\t%-5s\t%-3s\t%-15s\t%-30s\n", "����","�Ա�","����","�绰","סַ");
	//����
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
//�˳�
void ExitContact(Contact* con)
{
	SaveContact(con);
	free(con->data);
	con->data = NULL;
	con->capacity = 0;
	con->sz = 0;
	printf("�˳�ͨѶ¼\n");
}
//��������
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