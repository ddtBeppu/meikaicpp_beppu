//============================================================================
// Name        : e08_08.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-8
//               文字列s内の文字を末尾から先頭へと逆順に表示する関数put_revを作成せよ。
//                 void put_rev(const char* s);
//============================================================================

#include <iostream>
using namespace std;

void put_rev(const char* ccString); // 文字列ccString内の文字を末尾から先頭へと逆順に表示する関数

int main() {
	const int sLen = 36; // 文字列の長さを定義する
	char cString[sLen] = ""; // キーボードから入力される文字列を格納する

	// 目的
	cout << "文字列を入力してください。入力された文字列を逆順に表示します。:" << endl;
	// キーボードから読み込み
	cin >> cString;

	// 入力した文字列を逆順に表示
	put_rev(cString);

	// 正常終了
	return 0;
}

// 文字列ccString内の文字を末尾から先頭へと逆順に表示する関数
void put_rev(const char* ccString) {
	// 文字列の長さ-1を末尾のインデックスとして取得し、先頭まで参照
	for (int i = strlen(ccString) -1; i >= 0; i--) {
		// 文字を表示
		cout << ccString[i];
	}
}
