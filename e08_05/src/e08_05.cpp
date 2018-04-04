//============================================================================
// Name        : e08_05.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-5
//               文字列sの全文字を先頭から順に1行に1文字ずつ表示する関数putvを作成せよ。
//                     void putv(const char* s);
//============================================================================

#include <iostream>
using namespace std;

void putv(const char* ccString);

int main() {
	char cString[] = ""; // 表示する文字列

	// 文字列の入力を促す
	cout << "表示する文字列を入力してください。: " << endl;
	// キーボードから読み込み
	cin >> cString;

	// 宣言した文字列を1行ずつ表示
	putv(cString);

	// 正常終了
	return 0;
}

// 文字列の文字を先頭から順に表示する関数
void putv(const char* ccString) {
	// 先頭から順に表示するため、先に表示した後次の文字に移る
	do {
		// 現在見ている文字を表示
		cout << *ccString << endl;
	} while (*ccString++ != 0); // アドレスを一つ後ろにずらす
}
