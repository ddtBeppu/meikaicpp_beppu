//============================================================================
// Name        : e08_06.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-6
//               文字列sに含まれる文字cの個数を返す関数strch_cntを作成せよ。
//                  int strch_cnt(const char* s, char c);
//               例えば、文字列sが"abcabca"で文字cが'a'であれば、返却するのは3である。文字cが含まれない場合は
//               0を返すこと。
//============================================================================

#include <iostream>
using namespace std;

// 文字列ccStringに含まれる文字cCharaの個数を返す関数
int strch_cnt(const char* ccString, char cChara); //

int main() {
	const int iStrLen = 36; // 文字列の長さを定義
	char cString[iStrLen] = ""; // 関数に渡す文字列
	char cChara = 0; // 文字列cString中で検索する文字

	// 文字列の入力を促す
	cout << "文字列を入力してください。: ";
	// キーボードから読み込み
	cin >> cString;

	// 入力した文字列に含まれる、ある文字の個数を調べることをアナウンス
	cout << "文字列" << "\"" << cString << "\"の中に含まれる個数を調べる文字を入力してください。: " << endl;
	// キーボードから文字を読み込み
	cin >> cChara;

	// 個数を出力する
	cout << "文字列" << "\"" << cString << "\"の中に\"" << cChara << "\"は"
			<< strch_cnt(cString, cChara) << "個あります。" << endl;

	// 正常終了
	return 0;
}

// 文字列ccStringに含まれる文字cCharaの個数を返す関数
int strch_cnt(const char* ccString, char cChara) {
	// ccStringの中のcCharaの個数をカウントする変数
	int iCount = 0;

	// 最後の文字まで処理を行う
	do {
		// 文字列中の文字とcCharaが一致
		if (*ccString == cChara) {
			// 個数をカウント
			iCount++;
		}
	} while (*ccString++ != 0); // ナル文字でない限り続ける

	// 個数を返却
	return iCount;
}
