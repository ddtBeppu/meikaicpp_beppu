//============================================================================
// Name        : e08_12.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-12
//               文字列に含まれる最も先頭に位置する文字cの添字を返す関数strchr_idxを作成せよ。
//                  int strchr_idx(const char* s, char c);
//               文字列sが"ABSZXYX"で文字cが'X'であれば、返却するのは4である。なお、文字cが文字列sに
//               含まれない場合は-1を返却すること。
//============================================================================

#include <iostream>
using namespace std;

// 文字列に含まれる最も先頭に位置する文字cBeginの添字を返す関数
int strchr_idx(const char* cString, char cBegin);

int main() {
	const int iStrLen = 36; // 文字列の長さを定義
	char cStrInput[iStrLen] = ""; // キーボードから入力する文字列を定義
	char cBegin = 0; // 文字列中で検索する文字を定義

	int iRes = 0; // 関数strchr_idxの返り値を格納する

	// 文字列の入力を促す
	cout << "文字列を入力してください。" << endl;
	// キーボードから読み込み
	cin >> cStrInput;

	// 文字列から検索する文字を入力
	cout << "文字列の中で検索する文字を入力してください。" << endl;
	// キーボードから値を読み込み
	cin >> cBegin;

	// 文字列中に文字cBeginが最初に現れる時のインデックス、または-1を返す
	iRes = strchr_idx(cStrInput, cBegin);
	if (iRes == -1) { // 文字が含まれていなかった場合
		// テキストの出力
		cout << "文字" << cBegin <<"は文字列に含まれていません。" << endl;
	} else { // 文字が文字列中にあった場合
		// 見つかった時のインデックスを表示
		cout << "文字" << cBegin << "は" << iRes + 1 << "番目に最初に現れます。" << endl;
	}

	// 正常終了
	return 0;
}

// // 文字列に含まれる最も先頭に位置する文字cBeginの添字を返す関数
int strchr_idx(const char* cString, char cBegin) {
	static int iNumBegin = 0; // cBeginが文字列中で見つかった時のインデックスを格納
	while (*cString++ != 0) {
		// cBeginが文字列中に存在した場合
		if (*cString == cBegin) {
			// 先頭文字のため、見つかった時点でreturn
			return iNumBegin;
		}
		// まだ見つからない場合、カウントアップして次の文字を参照
		iNumBegin++;
	}

	// 文字cBeginが文字列に現れなかった
	return -1;
}
