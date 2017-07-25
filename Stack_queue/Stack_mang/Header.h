#pragma once 
#include<iostream>
#include<fstream>
#define MAX 100
using namespace std;
int a[MAX];
int sp;
int menu();
void init(int a[],int &sp);
bool isFull(int a[], int sp);
bool isEmpty(int a[],int sp);
void push(int a[],int &sp,int x);
void pop(int a[],int &sp,int &x);
int getPop(int a[]);
void readFile(int a[], int &sp,string tenfile);
void print(int a[],int sp);
void changeDecimalToBinary(int a[],int &sp,int socandoi);
void changeDecimalToK(int a[],int &sp,int socandoi,int hecandoi);
void xuatHe(int a[],int &sp);
void giaiphong(int a[]);
void listApp();