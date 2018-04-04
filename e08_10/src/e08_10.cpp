//============================================================================
// Name        : e08_10.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-10
//               p.310で学習したstrcat関数およびstrncat関数と同等な関数を作成せよ。
//============================================================================

#include <cstring>
#include <iostream>
using namespace std;

void strCat(char* cString, const char* cCat); // 文字列cCatをcStringの末尾に連結する関数
void strNCat(char* cString, const char* cCat, int iLen); // 文字列のcCatをiLenだけcStringに連結する

int main() {
	const int iStrLen = 36; // 文字列の長さを定義
	char* cStrInput; // charへのポインタを定義。異なる文字列を入力するため、一旦破棄して再利用する。
	char* cCat; // charへのポインタを定義。異なる文字列を入力するため、一旦破棄して再利用する。

	int catLen = 0; // strNCat関数にて定義する、連結する長さの値を格納

	// char型オブジェクトを動的に生成
	cStrInput = new char[iStrLen];
	// char型オブジェクトを動的に生成
	cCat = new char[iStrLen];

	// 元の文字列の入力を促す
	cout << "文字列を入力してください。" << endl;
	// キーボードからの読み込み
	cin >> cStrInput;

	cout << "連結する文字列を入力してください。: " << endl;
	cin >> cCat;
	// 文字列を連結
	strCat(cStrInput, cCat);

	// 連結した結果の文字列を表示する
	cout << "連結後の文字列: " << cStrInput << endl;

	// オブジェクトを破棄
	delete[] cStrInput;
	// オブジェクトを破棄
	delete[] cCat;


	// char型オブジェクトを動的に生成
	cStrInput = new char[iStrLen];
	// char型オブジェクトを動的に生成
	cCat = new char[iStrLen];

	// 元の文字列の入力を促す
	cout << "\n文字列を入力してください。" << endl;
	// キーボードからの読み込み
	cin >> cStrInput;

	cout << "連結する文字列を入力してください。: " << endl;
	cin >> cCat;

	// 連結する長さを尋ねる
	cout << "何文字まで連結しますか。: ";
	// キーボードからの読み込み
	cin >> catLen;
	// 入力値ぶんの長さだけ文字列を連結
	strNCat(cStrInput, cCat, catLen);

	// 連結した結果の文字列を表示する
	cout << "連結後の文字列: " << cStrInput << endl;

	// オブジェクトを破棄
	delete[] cStrInput;
	// オブジェクトを破棄
	delete[] cCat;

	// 正常終了
	return 0;
}

// 文字列cCatをcStringの末尾に連結する関数
void strCat(char* cString, const char* cCat) {
	// 文字列の長さを値として格納し、この値を連結値を挿入するアドレスの先頭とする
	int iBeginCat = strlen(cString);

	// 連結する文字列の長さだけ処理を繰り返し、連結を実現
	for (int i = 0; i < strlen(cCat); i++) {
		// 元の文字列の末尾(ナル文字があるアドレス)を出発とし、値を格納していく
		*(cString + iBeginCat + i) = cCat[i];
	}
}

// 文字列のcCatをiLenだけcStringに連結する
void strNCat(char* cString, const char* cCat, int iLen) {
	// 文字列の長さを値として格納し、この値を連結値を挿入するアドレスの先頭とする
	int iBeginCat = strlen(cString);

	// 連結する長さとして設定した値だけくり返す
	for (int i = 0; i < iLen; i++) {
		// 元の文字列の末尾(ナル文字があるアドレス)を出発とし、値を格納していく
		*(cString + iBeginCat + i) = cCat[i];
	}
}
