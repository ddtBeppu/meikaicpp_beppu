//============================================================================
// Name        : e08_20.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-20
//               二つの文字列を指すポインタを交換する関数を作成せよ。関数の仕様は自分で考えること。
//============================================================================

#include <iostream>
using namespace std;

void swt_strPtr(char* cStr1, char* cStr2); // 二つの文字列を指すポインタを交換する関数

int main() {
	const int iStrLen = 36; // 文字列の長さ
	char cStr1[iStrLen] = ""; // 一つ目の文字列を格納する配列
	char cStr2[iStrLen] = ""; // 二つ目の文字列を格納する配列

	// 文字列を指すポインタの交換を行うことをアナウンス
	cout << "文字列を指すポインタを交換します。" << endl;
	// 文字列1の入力
	cout << "文字列1: ";
	// キーボードから読み込み
	cin >> cStr1;

	// 文字列2の入力
	cout << "文字列2: ";
	// キーボードから読み込み
	cin >> cStr2;

	// 文字列を指すポインタの交換を行う関数
	swt_strPtr(cStr1, cStr2);

	// 交換後の文字列1
	cout << "文字列1: " << cStr1 << endl;
	// 交換後の文字列2
	cout << "文字列2: " << cStr2 << endl;

	// 正常終了
	return 0;
}

// 二つの文字列を指すポインタを交換する関数
void swt_strPtr(char* cStr1, char* cStr2) {
	char cSwap; // 文字列を一時退避させる変数

	// 長い方の文字列の長さを変数の値として格納し、処理回数として用いる
	int iIter = strlen(cStr1) > strlen(cStr2) ? strlen(cStr1) : strlen(cStr2);

	// 長い方の文字列の末尾まで処理を繰り返す
	for (int i = 0; i < iIter; i++) {
		// 文字列を指すポインタを退避
		cSwap = *(cStr1 + i);
		// 値の上書き
		*(cStr1 + i) = *(cStr2 + i);
		// 退避させておいた値で上書き
		*(cStr2 + i) = cSwap;
	}
}
