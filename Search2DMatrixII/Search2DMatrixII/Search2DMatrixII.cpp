// Search2DMatrixII.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"Search2DMatrix.h"

int main()
{
	int row(0), col(0),key(0);
	cin >> row >> col;
	vector<vector<int> > m(row);
	for (int i = 0; i < row; i++) {
		m[i].resize(col);
		for (int j = 0; j < col; j++)
			cin >> m[i][j];
	}
	cin >>key;
	Search2DMatrix S;
	if (S.searchMatrix(m, key))
		cout << "Searched" << '\n';
	else cout << "UnSearched" << '\n';
    return 0;
}

