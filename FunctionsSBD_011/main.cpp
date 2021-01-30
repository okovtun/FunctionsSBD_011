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

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	//setlocale(LC_ALL, "C");
	const int C_SIZE = 25;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	char c_arr_2[ROWS][COLS];
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
}

#ifdef FILLRAND_OVERLOADED
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= 10;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void FillRand(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = double(rand() % 10000)/100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand();
		}
	}
}
#endif // FILLRAND_OVERLOADED
#ifndef FILLRAND_OVERLOADED
template<typename T>
void FillRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 25600;
		arr[i] /= 100;
	}
}
template<typename T>
void FillRand(T arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 25600;
			arr[i][j] /= 10;
		}
	}
}
#endif

template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>void Print(T arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template<typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template<typename T>T Sum(T arr[ROWS][COLS], const int m, const int n)
{
	T sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}