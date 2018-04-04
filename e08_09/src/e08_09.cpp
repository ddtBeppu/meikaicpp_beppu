//============================================================================
// Name        : e08_09.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-9
//               p.308で学習したstrcpy関数およびstrncpyと同等な関数を作成せよ。
//============================================================================

#include <iostream>
using namespace std;

void strCpy(char* cStrCpy, char* cStrOrigin); // 文字列をコピーする関数
void strNCpy(char* cStrCpy, char* cStrOrigin, int tLen); // 文字列を指定の長さだけコピーする関数

int main() {
	const int iStrLen = 36; // 文字列の長さを定義
	char* cStrInput; // charへのポインタを定義。異なる文字列を入力するため、一旦破棄して再利用する。
	char* cCopy; // charへのポインタを定義。異なる文字列を入力するため、一旦破棄して再利用する。

	int cpyLen = 0; // strNCpy関数にて定義する、コピーする長さの値を格納

	// char型オブジェクトを動的に生成
	cStrInput = new char[iStrLen];
	// char型オブジェクトを動的に生成
	cCopy = new char[iStrLen];

	// コピー元文字列の入力を促す
	cout << "文字列を入力してください。" << endl;
	// キーボードからの読み込み
	cin >> cStrInput;
	// 文字列をコピーする
	strCpy(cCopy, cStrInput);

	// コピー完了
	cout << "文字列をコピーしました。" << endl;
	// コピー元を表示。コピー先と相違ないことを示す。
	cout << "元の文字列: " << cStrInput << endl;
	// コピーされた文字列
	cout << "コピー: " << cCopy << endl;

	// オブジェクトを破棄
	delete[] cStrInput;
	// オブジェクトを破棄
	delete[] cCopy;


	// char型オブジェクトを動的に生成
	cStrInput = new char[iStrLen];
	// char型オブジェクトを動的に生成
	cCopy = new char[iStrLen];

	// コピー元文字列の入力を促す
	cout << "\n文字列を入力してください。" << endl;
	// キーボードからの読み込み
	cin >> cStrInput;

	// コピーする長さを尋ねる
	cout << "何文字までコピーしますか。: ";
	// キーボードからの読み込み
	cin >> cpyLen;
	// 入力値ぶんの長さだけ文字列をコピー
	strNCpy(cCopy, cStrInput, cpyLen);

	// コピー完了
	cout << "文字列をコピーしました。" << endl;
	cout << cCopy;

	// オブジェクトを破棄
	delete[] cStrInput;
	// オブジェクトを破棄
	delete[] cCopy;

	// 正常終了
	return 0;
}

// 文字列をコピーする関数
void strCpy(char* cStrCpy, char* cStrOrigin) {
	// 入力した文字列の長さだけ、そっくりそのまま
	for(int l = 0; l < strlen(cStrOrigin); l++) {
		// 対応するアドレスのオブジェクトに代入
		*(cStrCpy + l) = *(cStrOrigin + l);
	}
}

// 文字列を指定の長さだけコピーする関数
void strNCpy(char* cStrCpy, char* cStrOrigin, int tLen) {
	// 入力した文字列の長さが、指定した長さに満たない場合
	if (strlen(cStrOrigin) < tLen) {
		// 入力した文字列の文字は全てコピー
		for(int l = 0; l <= strlen(cStrOrigin); l++) {
			// 対応するアドレスのオブジェクトに代入
			*(cStrCpy + l) = *(cStrOrigin + l);
		}
		// その後、ナル文字で埋める
		for (int n = strlen(cStrOrigin) + 1; n < tLen; n++) {
			// ナル文字で埋める
			cStrCpy[n] = '\0';
		}

	} else { // 入力した文字列の長さが、指定した長さ以上の場合
		for(int l = 0; l < tLen; l++) {
			// 文字をコピー
			*(cStrCpy + l) = *(cStrOrigin + l);
		}
	}
}
