//============================================================================
// Name        : e08_15.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-15
//               文字列s1の中に含まれる最も先頭に位置する文字列s2の先頭文字へのポインタを返す関数str_match
//               を作成せよ。
//                   char* str_match(char* s1, char* s2);
//               例えば、受け取った文字列s1が"abcabcdef"でs2が"abcd"であれば、返却するのは&s1[3]の
//               値である。文字列s2がs1に含まれない場合はNULLを返却すること。
//============================================================================

#include <cstring>
#include <iostream>
using namespace std;

// 文字列cString1の中に含まれる最も先頭に位置する文字列cString2の先頭文字へのポインタを返す関数
char* str_match(char* cString1, char* cString2);

int main() {
	const int iStrLen = 36; // 文字列の長さを定義
	char cStrInput[iStrLen] = ""; // キーボードから入力する、元の文字列を定義
	char cSearch[iStrLen] = ""; // 入力したcStrInputの中から、この文字列を探索する

	// 文字列の入力
	cout << "文字列を入力してください。: " << endl;
	// キーボードからの読み込み
	cin >> cStrInput;

	// 文字列の中から検索する文字列の入力
	cout << "検索する文字列を入力してください。: " << endl;
	// キーボードからの読み込み
	cin >> cSearch;

	// 検索結果を示す
	if (str_match(cStrInput, cSearch) == NULL) { // ヒットしなかった場合
		// 検索文字列は踏まれていなかったことを伝える
		cout << "マッチする文字列はありませんでした。" << endl;
	} else { // マッチした時
		// マッチした先頭文字へのポインタを返す
		cout << "match: " << str_match(cStrInput, cSearch) << endl;
	}

	// 正常終了
	return 0;
}

// 文字列cString1の中に含まれる最も先頭に位置する文字列cString2の先頭文字へのポインタを返す関数
char* str_match(char* cString1, char* cString2) {
	// 文字列cString1の長さだけ繰り返し
	for (int i = 0; i < strlen(cString1); i++) {
		// 文字列cString1の文字をずらしながら、cString2の先頭文字とマッチするかを見ていく
		if (cString1[i] != *cString2) { // なければ
			// 繰り返し。文字列cString1の次の文字を見る
			continue;
		}

		// cString2の先頭文字とcString1[i]がマッチしたので、それ以降の文字がマッチするかを調べる
		if (strncmp(cString1 + i, cString2, strlen(cString2)) == 0) {
			// マッチした場合、その時のポインタを返す
			return (cString1 + i);
		}
	}

	// 検索文字列とマッチしなかった場合、NULLを返却
	return NULL;
}
