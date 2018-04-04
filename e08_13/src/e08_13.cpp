//============================================================================
// Name        : e08_13.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-13
//               文字列sに含まれる最も先頭に位置する文字cへのポインタを返す関数strchr_ptrを作成せよ。
//                    char* strchr_ptr(const char* s, char c);
//               文字列sが"ABSZXYX"で文字cが'X'であれば、返却するのは&s[4]である。なお、文字cが
//               文字sに含まれない場合はNULLを返すこと。
//============================================================================

#include <iostream>
using namespace std;

// 文字列sに含まれる最も先頭に位置する文字cへのポインタを返す関数
char* strchr_ptr(const char* cString, char cBegin);

int main() {
	const int iStrLen = 36; // 文字列の長さを定義
	char cStrInput[iStrLen] = ""; // キーボードから入力する文字列を定義
	char cBegin = 0; // 文字列中で検索する文字を定義

	char* iRes; // 関数strchr_ptrの返り値を格納する

	// 文字列の入力を促す
	cout << "文字列を入力してください。" << endl;
	// キーボードから読み込み
	cin >> cStrInput;

	// 文字列から検索する文字を入力
	cout << "文字列の中で検索する文字を入力してください。" << endl;
	// キーボードから値を読み込み
	cin >> cBegin;

	// 文字列中に文字cBeginが最初に現れる時のポインタ、または-1を返す
	iRes = strchr_ptr(cStrInput, cBegin);
	if (iRes == NULL) { // 文字が含まれていなかった場合
		// テキストの出力
		cout << "文字" << cBegin <<"は文字列に含まれていません。" << endl;
	} else { // 文字が文字列中にあった場合
		// 見つかった時のポインタを表示
		cout << "文字" << cBegin << "が最初に見つかった時のポインタは"
				<< &iRes << "です。" << endl;
	}

	// 正常終了
	return 0;
}

// 文字列sに含まれる最も先頭に位置する文字cへのポインタを返す関数
char* strchr_ptr(const char* cString, char cBegin) {
	while (*cString++ != 0){
		// cBeginが文字列中に存在した場合
		if (*cString == cBegin) {
			// 先頭文字のため、見つかった時点でポインタを返し、関数を抜ける
			return const_cast<char*> (cString);
		}
	}

	// 文字cBeginが文字列に現れなかった
	return NULL;
}
