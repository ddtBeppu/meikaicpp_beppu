//============================================================================
// Name        : e04_01.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習4-1
// 全ての文字について、数字/英大文字/英小文字/記号文字などの
// 文字種がわかる一覧表を出力するプログラムを作成せよ。

#include <cctype>
#include <climits>
#include <iostream>

using namespace std;

const int char_max = 127; // char型の表現できる最大数

int main() {
	char c_text = 0; // 文字を格納する変数

	// 一覧表示のタイトル
	cout << "文字と文字種: " << endl;

	// ひたすら文字を表示し続ける
	// 下方にて、最大数表示後に終了する処理を記述
	for (; ; c_text++) {
		// 文字の値により、条件分岐
		switch (c_text) {
		case '\a': // 文字が\aの時
			// \aを表示
			cout << "\\a";
			// ループを抜ける
			break;
		case '\b': // 文字が\bの時
			cout << "\\b";
			// ループを抜ける
			break;
		case '\f': // 文字が\fの時
			cout << "\\f";
			// ループを抜ける
			break;
		case '\n': // 文字が\nの時
			cout << "\\n";
			// ループを抜ける
			break;
		case '\r': // 文字が\rの時
			cout << "\\r";
			// ループを抜ける
			break;
		case '\t': // 文字が\tの時
			cout << "\\t";
			// ループを抜ける
			break;
		case '\v': // 文字が\vの時
			cout << "\\v";
			// ループを抜ける
			break;
		default: // 上記の条件以外の場合
			cout << c_text;
		}

		// スペースを表示
		cout << " ";

		if (isdigit(c_text) == true) { // 文字が数字の場合
			// 数字に分類
			cout << "数字" << endl;
		} else if (isupper(c_text) == true) {
			// 英大文字に分類
			cout << "英大文字" << endl;
		} else if (islower(c_text) == true) {
			// 英小文字に分類
			cout << "英小文字" << endl;
		} else if (isspace(c_text) == true) {
			// 空白類文字に分類
			cout << "空白類文字" << endl;
		} else if (isgraph(c_text) == true) {
			// 記号文字に分類
			cout << "記号文字" << endl;
		} else {
			// 該当なしとする
			cout << "該当なし" << endl;
		}

		if (c_text == char_max) { // 表示できる最大数を表示した時
			// ループを抜ける
			break;
		}
	}
	// 整数値を返す
	return 0;
}
