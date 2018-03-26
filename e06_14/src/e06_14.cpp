//============================================================================
// Name        : e06_14.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-14
//               a, bを昇順にソートする（a ≦ bとなるように並べかえる）関数sortを作成せよ。
//============================================================================

#include <iostream>
using namespace std;

void swap(int& iX, int& iY); // 引数の値を交換する関数
void sort(int& iBegin, int& iEnd); // 引数の値を昇順にソートする関数

int main() {
	int iBegin = 0; // aの値として入力される値を格納する変数
	int iEnd = 0; // bの値として入力される値を格納する変数

	// 2数の入力を促す
	cout << "2つの値を入力してください。" << endl;
	// aの値の入力を促す
	cout << "a: ";
	// キーボードから任意の値を入力
	cin >> iBegin;

	// bの値の入力を促す
	cout << "b: ";
	// キーボードから任意の値を入力
	cin >> iEnd;

	// 入力された2数を昇順にソートする
	sort(iBegin, iEnd);

	// ソートの終了を告げる
	cout << "2つの値a, bを昇順(a ≦ b)に並べ替えました。" << endl;
	// aの値(小さい方)を出力する
	cout << "変数aの値は" << iBegin << "です。" << endl;
	// bの値(大きい方)を出力する
	cout << "変数bの値は" << iEnd << "です。" << endl;

	// 正常終了
	return 0;
}

// 引数の値を交換する関数
void swap(int& iX, int& iY) {
	// iXの値を退避させる
	int t = iX;
	// iXにiYを代入。
	iX = iY;
	// 退避させた値をiYに代入すると交換が完了
	iY = t;
}

// 引数の値を昇順にソートする関数
void sort(int& iBegin, int& iEnd) {
	// 引数として与えらえた2数が、昇順でない時
	if (iBegin > iEnd) {
		// 順序を入れ替える
		swap(iBegin, iEnd);
	}
}
