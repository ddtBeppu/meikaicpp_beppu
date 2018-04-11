//============================================================================
// Name        : e08_17.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-17
//               二つの文字列s1とs2の内容をそっくり入れ替える関数swap_stringを作成せよ。
//                 void swap_string(char* s1, char* s2);
//============================================================================

#include <iostream>
using namespace std;

const int iStrLen = 36; // 文字列の長さを定義
void swap_string(char* cStr1, char* cStr2); // 二つの文字列cStr1とcStr2の内容をそっくり入れ替える関数

int main() {
	char cStrInput1[iStrLen] = ""; // キーボードから入力する一つ目の文字列を格納する変数
	char cStrInput2[iStrLen] = ""; // キーボードから入力する二つ目の文字列を格納する変数

	// 二つの文字列を入れ替えることをアナウンス
	cout << "二つの文字列を入れ替えます。" << endl;
	// 一つ目の文字列の入力を促す
	cout << "一つ目の文字列を入力してください。: " << endl;
	// キーボードからの読み込み
	cin >> cStrInput1;


	// 二つ目の文字列の入力を促す
	cout << "つ目の文字列を入力してください。: " << endl;
	// キーボードからの読み込み
	cin >> cStrInput2;

	// 文字列を入れ替える関数を呼び出し
	swap_string(cStrInput1, cStrInput2);
	cout << "一つ目の文字列: " << cStrInput1 << endl;
	cout << "二つ目の文字列: " << cStrInput2 << endl;

	// 正常終了
	return 0;
}

// 二つの文字列cStr1とcStr2の内容をそっくり入れ替える関数
void swap_string(char* cStr1, char* cStr2) {
	char* strSwap = new char[iStrLen]; // 文字列の入れ替えのため、片方の文字列を一時退避させるためのポインタを生成

	// cStr1の長さだけ、文字の更新処理を実施
	for (int i = 0; i < strlen(cStr1); i++) {
		// 文字を前から上書き
		*(strSwap + i) = *(cStr1 + i);
	}
	// ナル文字を末尾に置くことで、文字列の長さを確定
	strSwap[strlen(cStr1)] = '\0';

	// cStr2の長さだけ、文字の更新処理を実施
	for (int i = 0; i < strlen(cStr2); i++) {
		// 文字を上書き
		*(cStr1 + i) = *(cStr2 + i);
	}
	// ナル文字を末尾に置くことで、文字列の長さを確定
	cStr1[strlen(cStr2)] = '\0';

	// 退避させた文字列の長さだけ、文字の更新処理を実施
	for (int i = 0; i < strlen(strSwap); i++) {
		// 文字を上書き
		*(cStr2 + i) = *(strSwap + i);
	}
	// ナル文字を末尾に置くことで、文字列の長さを確定
	cStr2[strlen(strSwap)] = '\0';

	// 生成したポインタを破棄
	delete[] strSwap;
}
