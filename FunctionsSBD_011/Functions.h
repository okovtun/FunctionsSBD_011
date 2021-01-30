#pragma once
#include<iostream>
using namespace std;

//VCS - Version Conreol System
//СКВ - Система контроля версий
//Commit
//Branches
//Scram, Agile....
//GitHub
//VCS: SVN, Subversion, Jira, .... !!!Git!!!
//GitHub
//Repository - это хранилище исходных кодов.

#ifdef OVERLOAD_EXAMPLES
void function()
{
	cout << "Без параметров" << endl;
}
int function(int a)
{
	cout << "Один параметр типа int" << endl;
	return 0;
}
#endif // OVERLOAD_EXAMPLES

#define FILLRAND_OVERLOADED

const int ROWS = 8;
const int COLS = 5;

#ifdef FILLRAND_OVERLOADED
void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);

void FillRand(int arr[ROWS][COLS], const int m, const int n);
void FillRand(double arr[ROWS][COLS], const int m, const int n);
void FillRand(char arr[ROWS][COLS], const int m, const int n);
#endif // FILLRAND_OVERLOADED
#ifndef FILLRAND_OVERLOADED
template<typename T>
void FillRand(T arr[], const int n);
template<typename T>
void FillRand(T arr[ROWS][COLS], const int m, const int n);
#endif


template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int m, const int n);

template<typename T>T Sum(T arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int m, const int n);