#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
void main()
{
	string A,B;
	A = "guurdbaxypvwotateuursrhqnzqeqk";
	B = "qktmyfzeyelbckekldbbhrgbnpzqwo";
	int n = A.length();
	int m = B.length();
	//生成二维数组
	int **L = new int*[n+1];
	for (int i = 0; i < n+1; i++)
	{
		L[i] = new int[m+1];
	}

	for(int i = 0; i<=n; i++)
	{
		L[i][0] = 0;
	}
	for(int j = 0; j<=m; j++)
	{
		L[0][j] = 0;
	}
	for(int i = 1; i<=n; i++)
	{
		for(int j = 1; j<=m; j++)
		{
			if(A[i-1] == B[j-1])
				L[i][j] = L[i - 1][j - 1] + 1;
			else
				L[i][j] = (L[i][j - 1] > L[i - 1][j]) ? L[i][j - 1] : L[i - 1][j];
		}
	}
	cout<<L[n][m];
	free(L);
}