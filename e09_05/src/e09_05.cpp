//============================================================================
// Name        : e09_05.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習9-5
//               配列の全要素の最小値を求める関数テンプレートを作成せよ。
//                   template <class Type> Type minof(const Type x[], int n);
//               なお、最も小さい文字列を求められるようにするために、const char*型に明示的に特殊化したものを
//               合わせて作成すること。
//============================================================================

#include <iostream>
using namespace std;

// 配列の全要素の最小値を求める関数テンプレート
template <class Type> Type minof(const Type arrayX[], int arrSize);
// 配列の全要素の最小値を求める関数テンプレート。第一引数をconst char*型とし、文字列を受け取る
template <class Type> Type minof(const char* arrayX[], int arrSize);

int main() {
	const int arrSize = 6; // 配列の大きさを定義
	int iArray[arrSize] = {0}; // int型の値を格納する配列を定義
	char cArray[arrSize] = ""; // 文字列を格納する配列を定義

	for (int i = 0; i < arrSize; i++) { // 配列の要素数だけループ
		// 配列要素の入力を促す
		cout << "配列要素" << i << ": ";
		// キーボードから入力
		cin >> iArray[i];
	}
	// 要素の中での最小値を求める
	cout << minof(iArray, arrSize) << endl;


	// 文字列の入力を促す
	cout << "文字列: ";
	// キーボードから入力
	cin >> cArray;

	// 要素の中で最小値を求める
	cout << minof(cArray, arrSize) << endl;

	// 正常終了
	return 0;
}

// 配列の全要素の最小値を求める関数テンプレート
template <class Type> Type minof(const Type arrayX[], int arrSize) {
	// 比較し、最小値を求める。初期値として先頭要素を代入
	Type tMin = arrayX[0];

	// 二番目以降の要素と比較
	for (int i = 1; i < arrSize; i++) {
		// 参照する要素が最小値よりも小さい
		if (tMin > arrayX[i]) {
			// 最小値を更新
			tMin = arrayX[i];
		}
	}

	// 最小値を返却
	return tMin;
}

// 配列の全要素の最小値を求める関数テンプレート。第一引数をconst char*型とし、文字列を受け取る
template <class Type> Type minof(const char* arrayX[], int arrSize) {
	// 比較し、最小値を求める。初期値として先頭要素を代入
	Type tMin = arrayX[0];

	// 二番目以降の要素と比較
	for (int i = 1; i < arrSize; i++) {
		// 参照する要素が最小値よりも小さい
		if (tMin > arrayX[i]) {
			// 最小値を更新
			tMin = arrayX[i];
		}
	}

	// 最小値を返却
	return tMin;
}
