//============================================================================
// Name        : e08_07.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-7
//               文字列sに含まれる数字文字'0', '1', ..., '9'の個数をカウントして、各文字の個数を
//               c[0], c[1], ..., c[9]に格納する関数count_digitsを作成せよ。
//                  void count_digits(const char* s, int c[]);
//               例えば、文字列sが"W140S500L88"であれば、c[0]に3を、c[1], c[4], c[5]に1を、
//               c[8]に2を格納し、それ以外の要素には0を格納する。
//============================================================================

#include <cstring>
#include <iostream>
using namespace std;

void count_digits(const char* ccString, int cArray[]);

int main() {
	const int iStrLen = 36; // 文字列の長さを定義
	const int nDigit = 10; // 比較する数字の数
	char cString[iStrLen] = ""; // 関数に渡す文字列
	int cArray[nDigit] = {0}; // 文字列中に含まれる数字文字の数を格納する配列

	// 文字列の入力を促す
	cout << "文字列を入力してください。: " << endl;
	// キーボードから読み込み
	cin >> cString;

	// 文字列cString中に含まれる数字文字をカウントし、cArrayに格納する
	count_digits(cString, cArray);

	// テキストの出力
	cout << "文字列" << "\"" << cString << "\"の中に" << endl;
	// 数字ごとに表示
	for (int i = 0; i < nDigit; i++) {
		// それぞれの数字文字の個数を表示
		cout << i << "は" << cArray[i] << "個" << endl;
	}

	// 正常終了
	return 0;
}

// 文字列ccString中に含まれる数字文字の数をカウントする関数
void count_digits(const char* ccString, int cArray[]) {
	char cNums[] = "0123456789"; // 数字文字の文字列。それぞれの文字と文字列ccStringを比較する。
	// 文字列の最後まで参照する
	do {
		// 数字文字列の文字と逐次比較
		for (int i = 0; i < strlen(cNums); i++) {
			// 文字列ccStringに数字文字がある場合
			if (*ccString == cNums[i]) {
				// 対応する数字の個数をカウントアップ
				cArray[i]++;
			}
		}
	} while (*ccString++ != 0); // ナル文字にたどり着くまで繰り返し
}
