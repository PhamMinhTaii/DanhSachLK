#include "Header.h"
void init(Node *&sp)
{
	sp = NULL;
}
bool isEmpty(Node *sp)
{
	if (sp == NULL)
	{
		return true;
	}	
	return false;
}
bool addPush(Node *&sp,int x)
{
	Node *p = new Node;
	if (p == NULL)
	{
		return false;
	}
	p->info = x;
	if (sp != NULL)
	{
		p->next = sp;
	}
	sp = p;
	return true;
}
bool pop(Node *&sp)
{
	if (sp != NULL)
	{
		Node *p = sp;
		sp = sp->next;
		delete p;
        return true;
	}
	return false;
}
int getPop(Node *sp)
{
	if (sp != NULL)
	{
		return sp->info;
	}
	return NULL;
}
//void readFile(Node *&sp,string tenfile)
//{
//	ifstream fIn;
//	ofstream fOut;
//	int n, x;
//	fIn.open(tenfile,ios_base::in);
//	fIn >> n;
//	for (int i = 0; i < n; i++)
//	{
//		fIn >> x;
//		addPush(sp, x);
//		//cout << x << " ";
//	}
//	fIn.close();
//	
//	
//}
void print(Node *sp)
{
	while (!isEmpty(sp))
	{
		int x = getPop(sp);
		pop(sp);
		cout << x << "  ";
	}
	cout << endl;
}
void changeDecimalToBinary(Node *&sp,int socandoi)
{
	while (socandoi != 0)
	{
		int sohehai;
		sohehai = socandoi % 2;
		socandoi /= 2;
		addPush(sp, sohehai);
	}
}
void changeDecimalToK(Node *&sp, int socandoi,int hecandoi)
{
	while (socandoi != NULL)
	{
		int x;
		x = socandoi%hecandoi;
		socandoi /= hecandoi;
		addPush(sp, x);
	}
}
void xuatHe(Node *&sp)
{
	while (!isEmpty(sp))
	{
		int x = getPop(sp);
		pop(sp);
		if (x < 10)
		{
			cout << x;
		}
		else if (x == 10)
		{
			cout << "A";
		}
		else if (x == 11)
		{
			cout << "B";
		}
		else if (x == 12)
		{
			cout << "C";
		}
		else if (x == 13)
		{
			cout << "D";
		}
		else if (x == 14)
		{
			cout << "E";
		}
		else if (x == 15)
		{
			cout << "F";
		}
		cout << endl;
	}
}
void giaiphong(Node *&sp)
{
	while (sp!=NULL)
	{
		Node *p = sp;
		sp = sp->next;
		delete p;
	}
}
int main()
{
	Node *sp=new Node;
	init(sp);
	//readFile(sp, "input.txt");
	addPush(sp, 1);
	addPush(sp, 2);
	addPush(sp, 3);
	addPush(sp, 4);
	print(sp);
	//changeDecimalToBinary(sp, 10);
	//xuatHe(sp);
	//changeDecimalToK(sp, 10, 16);
	//xuatHe(sp);
	//giaiphong(sp);
	system("pause");
	return 0;
}