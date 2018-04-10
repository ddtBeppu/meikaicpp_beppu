//============================================================================
// Name        : e08_14.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-14
//               文字列sの文字の並びを反転する関数str_rvsを作成せよ。
//                   char* str_rvs(char* s);
//               例えば、文字列sが"abc"であれば、その文字列を"cba"に更新する。受け取ったsの値を
//               そのまま返却すること。
//============================================================================

#include <cstring>
#include <iostream>
using namespace std;

char* str_rvs(char* cString); // 文字列cStringの並びを反転する関数

int main() {
	const int iStrLen = 36; // 文字列の文字数を定義
	char cString[iStrLen] = ""; // キーボードから読みこむ文字列を格納する

	// 文字列の入力
	cout << "文字列を入力してください。: " << endl;
	//　キーボードからの読み込み
	cin >> cString;

	// 文字列の反転
	cout << "文字列の並びを反転します。" << endl;
	// 関数に引数として渡した値を反転した値が返ってくる
	cout << "結果: " << str_rvs(cString) << endl;

	// 正常終了
	return 0;
}

// 文字列cStringの並びを反転する関数
char* str_rvs(char* cString) {
	// 文字列の最後尾の要素を表す値を定義
	int iIdx = strlen(cString) - 1;
	// 文字列の半分から前後に値を入れ替えるため、値のアドレスを移し替えるためのポインタを生成
	char* cpyChar = new char;

	// 文字列を真ん中から前後に分割して考えるため、反復回数は文字列の長さ/2
	for (int i = 0; i < strlen(cString) / 2; i++) {
		// ポインタで最後尾の文字の値を指す
		*cpyChar = cString[iIdx - i];
		// 最後尾のアドレスに先頭の値を代入
		cString[iIdx - i] = cString[i];
		// ポインタが指した最後尾の値を文字列の先頭に上書き
		cString[i] = *cpyChar;
	}
	// ポインタを破棄
	delete cpyChar;

	// 値の順序を並び替えた文字列を返却
	return cString;
}
