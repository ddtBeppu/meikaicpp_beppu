//============================================================================
// Name        : e07_03.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習7-3
//               List6-16(p.222)の関数sortを、参照渡しではなく、ポインタの値渡しによって
//               行うように変更したプログラムを作成せよ。
//============================================================================

#include <iostream>
using namespace std;

void swap(int& iX, int& iY); // 値を入れ替える関数
void sort(int* iA, int* iB, int* iC); // 値を昇順にソートする関数

int main() {
	int iA = 0; // 変数aとして入力する値を格納する変数
	int iB = 0; // 変数bとして入力する値を格納する変数
	int iC = 0; // 変数cとして入力する値を格納する変数

	// 変数aの入力を促す
	cout << "変数a: ";
	// キーボードから値を読み込む
	cin >> iA;

	// 変数bの入力を促す
	cout << "変数b: ";
	// キーボードから値を読み込む
	cin >> iB;

	// 変数cの入力を促す
	cout << "変数c: ";
	// キーボードから値を読み込む
	cin >> iC;

	// 値を昇順にソートする
	// 3値が格納されたアドレスを交換することで、値の交換を実現。
	sort(&iA, &iB, &iC);

	// 値の並べ替えが行われたことを伝える
	cout << "\n整数a, b, cを昇順に並べ替えました。" << endl;
	// 変数aの値を出力
	cout << "変数aの値は" << iA << "です。" << endl;
	// 変数bの値を出力
	cout << "変数bの値は" << iB << "です。" << endl;
	// 変数cの値を出力
	cout << "変数cの値は" << iC << "です。" << endl;

	// 正常終了
	return 0;
}

// 参照渡しにより、値を入れ替える。
// 引数がiX, iYがエイリアスとなるため、引数の値が格納されたアドレス自体を入れ替え、値を入れ替える
void swap(int& iX, int& iY) {
	// 参照をコピー
	int iT = iX;
	// 参照するアドレスを更新
	iX = iY;
	// // 参照するアドレスを更新
	iY = iT;
}

// 値を昇順にソートする関数
void sort(int* iA, int* iB, int* iC) {
	if (iA > iB) { // 先頭2値の入れ替え
		// ポインタを引数とすることで、ポインタが参照するアドレスを入れ替える
		swap(*iA, *iB);
	}
	if (iB > iC) { // 後ろの2値の入れ替え
		// ポインタを引数とすることで、ポインタが参照するアドレスを入れ替える
		swap(*iB, *iC);
	}
	if (iA > iB) { // 最後に先頭2値を入れ替え、順番確定
		// ポインタを引数とすることで、ポインタが参照するアドレスを入れ替える
		swap(*iA, *iB);
	}
}
