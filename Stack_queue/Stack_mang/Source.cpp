#include"Header.h"
int menu()
{
	int chon;
	cout << "-------------------------------\n"
		<< "1.Them vao phan tu vao Stack\n"
		<< "2.Lay ra phan tu dau cua Stack\n"
		<< "3.Xoa phan tu dau cua Stack\n"
		<< "4.Doi so tu he 10 sang he 2\n"
		<< "5.Doi so tu he 10 sang he K bat ky\n"
		<< "0.Thoat!\n"; cin >> chon;
	return chon;
}
void init(int a[], int &sp)
{
	sp = -1;
}
bool isEmpty(int a[], int sp)
{
	if (sp == -1)
		return true;
	return false;
}
bool isFull(int a[], int sp)
{
	if (sp == MAX - 1)
		return true;
	return false;
}
void push(int a[],int &sp, int x)
{
	if (sp < MAX - 1)
	{
		a[++sp] = x;
	}
}
void pop(int a[],int &sp,int &x)
{
	if (sp != -1)
	{
		x = a[sp--];
	}
}
int getPop(int a[])
{
	return a[sp];
}
void readFile(int a[],int &sp,string tenfile)
{
	ifstream fin;
	fin.open(tenfile, ios_base::in);
	int n,x;
	/*if (fin.is_open())
	{
		fin >> n;
		for (int i = 0; !fin.eof() && i < n; i++)
		{
			fin >> x;
			push(a,sp,x);
		}
	}*/
	fin >> n;
	for (int i = 0;i < n; i++)
	{
		fin >> x;
		push(a, sp, x);
	}
	fin.close();
}
void print(int a[],int sp)
{
	for (int i = sp; i >= 0;i--)
	{
		cout << a[i] << " ";
	}
	//cout << endl;
}
void changeDecimalToBinary(int a[],int &sp, int socandoi)
{
	while (socandoi != 0)
	{
		int x = socandoi % 2;
		socandoi /= 2;
		push(a, sp, x);
	}
}
void changeDecimalToK(int a[],int &sp, int socandoi, int hecandoi)
{
	while (socandoi != 0)
	{
		int x = socandoi%hecandoi;
		socandoi /= hecandoi;
		push(a, sp, x);
	}
}
void xuatHe(int a[],int &sp)
{
	while (!isEmpty(a, sp))
	{
		int x;
		pop(a, sp,x);
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

	}
	cout << endl;
}
void giaiphong(int a[]);
void listApp()
{
	int chon;
	int a[MAX];
	int sp;
	init(a, sp);
	chon = menu();
	switch (chon)
	{
	case 1:
	{			 
			  break;
	}
	case 2:
	{
			  break;
	}
	case 3:
	{
			  break;
	}
	case 4:
	{
			  break;
	}
	}
}

int main()
{
	//listApp();
	int a[MAX];
	int sp;
	init(a, sp);
	/*push(a, sp, 1);
	push(a, sp, 2);
	push(a, sp, 3);
	push(a, sp, 4);
	push(a, sp, 5);*/
	//readFile(a,sp,"input.txt");
	//print(a,sp);
	changeDecimalToBinary(a, sp, 10);
	xuatHe(a, sp);
	changeDecimalToK(a, sp, 10, 8);
	xuatHe(a, sp);
	system("pause");
	return 0;
}