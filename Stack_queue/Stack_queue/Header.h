#pragma once 
#include <iostream>
#include<fstream>
using namespace std;
struct Node
{
	int info;
	Node *next;
};
void init(Node *&sp);
bool isEmpty(Node *sp);
bool addPush(Node *&sp,int x);
bool pop(Node *&sp);
int getPop(Node *sp);
void readFile(Node *&sp, string tenfile);
void print(Node *sp);
void changeDecimalToBinary(Node *&sp,int socandoi);
void changeDecimalToK(Node *&sp, int socandoi, int hecandoi);
void xuatHe(Node *&sp);
void giaiphong(Node *&sp);
