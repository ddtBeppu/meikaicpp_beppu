//============================================================================
// Name        : e05_10.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習5-10
//               ４行３列の行列と３行４列の行列の積を求めるプログラムを作成せよ。
//               各構成要素の値はキーボードから読み込むこと。
//============================================================================

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	const int iRow = 4; // 行列の列の最大値
	const int iCol = 3; // 行列の行の最大値
	int iArray43[iCol][iRow] = {}; // 4 * 3行列を格納する配列
	int iArray34[iRow][iCol] = {}; // 3 * 4行列を格納する配列

	int iArrayMul[iCol][iCol] = {0}; // 行列の積を格納する配列

	// 構成要素への値の代入を促す
	cout << "各構成要素の値を代入してください。" << endl;

	// 4 * 3行列の構成要素を入力
	for (int i = 0; i < iCol; i++) { // 縦方向にシフト
		for (int j = 0; j < iRow; j++) { // 横方向にシフト
			// i行j列の値の入力を促す
			cout << "iArray43[" << i << "]" << "[" << j << "]: ";
			// キーボードから読み込み
			cin >> iArray43[i][j];
		}
	}

	// 改行し、次の行列の入力を見やすくする
	cout << "\n";

	// 3 * 4行列の構成要素を入力
	for (int j = 0; j < iRow; j++) { // 縦方向にシフト
		for (int i = 0; i < iCol; i++) { // 横方向にシフト
			// j行i列の入力を促す
			cout << "iArray34[" << j << "]" << "[" << i << "]: ";
			// キーボードから読み込み
			cin >> iArray34[j][i];
		}
	}

	// 行列の積を計算
	for (int i = 0; i < iCol; i++) { // 縦方向にシフト
		for (int j = 0; j < iCol; j++) { // 横方向にシフト
			for (int k = 0; k < iRow; k++) { // 掛け合わせる行列の大きさに合わせて、演算
				// 行ごとに積和を計算
				iArrayMul[i][j] += iArray43[i][k] * iArray34[k][j];
			}
		}
	}

	// 4 * 3行列を表示
	cout << "4 * 3行列" << endl;
	for (int i = 0; i < iCol; i++) { // 縦方向
		for (int j = 0; j < iRow; j++) { // 横方向
			// 要素を表示
			cout << setw(3) << iArray43[i][j];
		}
		// 改行して、次の行に移る
		cout << "\n";
	}

	// 3 * 4行列を表示
	cout << "3 * 4行列" << endl;
	for (int i = 0; i < iRow; i++) { // 縦方向
		for (int j = 0; j < iCol; j++) { // 横方向
			// 要素を表示
			cout << setw(3) << iArray34[i][j];
		}
		// 改行して、次の行に移る
		cout << "\n";
	}

	// 行列の積を表示
	cout << "行列の積" << endl;
	for (int i = 0; i < iCol; i++) { // 縦方向
		for (int j = 0; j < iCol; j++) { // 横方向
			// 要素を表示
			cout << setw(3) << iArrayMul[i][j];
		}
		// 改行して、次の行に移る
		cout << "\n";
	}

	// 正常終了
	return 0;
}
