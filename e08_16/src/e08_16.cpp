//============================================================================
// Name        : e08_16.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-16
//               文字列s内の数字文字を削除する関数strrmv_digitsを作成せよ。
//                  char* strrmv_digits(char* s);
//               例えば、文字列sが"a1bc39d"であれば、その文字列を"abcd"に更新する。
//               受け取ったsの値をそのまま返却すること。
//============================================================================

#include <cstring>
#include <iostream>
using namespace std;

char* strrmv_digits(char* cString); // 文字列cString内の数字文字を削除する関数

int main() {
	const int iStrLen = 36; // 文字列の長さを定義
	char cStrInput[iStrLen] = ""; // キーボードから入力する、元の文字列を定義

	// 文字列の入力
	cout << "文字列を入力してください。: " << endl;
	// キーボードからの読み込み
	cin >> cStrInput;

	// 数字文字の削除
	cout << "数字文字を削除します。" << endl;
	// 数字文字を削除した後の文字列が返却される
	cout << strrmv_digits(cStrInput) << endl;

	// 正常終了
	return 0;
}

// 文字列cString内の数字文字を削除する関数
char* strrmv_digits(char* cString) {
	char* catStr; // 数字文字が見つかったすぐ後ろからの文字列を指すポインタ。
	                  // これが指す文字列を、数字文字より前の文字列に連結する。
	int i = 0; // 繰り返し回数を初期化

	// 文字列の最後尾まで処理を実施
	while (cString[i] != '\0') {
		// 数字文字が見つかった場合
		if (isdigit(cString[i])) {
			// 数字文字の直後の文字列へのポインタを指す
			catStr = (cString + i + 1);
			// 数字文字をナル文字で置き換えて、文字列を分割
			cString[i] = '\0';
			// 文字列を連結して更新
			strcat(cString, catStr);

			// 数字文字が連続する可能性も考慮して、iのインクリメントをせず、その場から再開
			continue;
		}
		// 次の文字を調べる
		i++;
	}
	// 更新した文字列を返却
	return cString;
}
