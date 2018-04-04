//============================================================================
// Name        : e08_11.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-11
//               p.312で学習したstrcmp関数およびstrncm関数と同等な関数を作成せよ。
//============================================================================

#include <cstring>
#include <iostream>
using namespace std;

// 二つの文字列を比較し、等しい場合に0、異なる場合、それ以外を返す
int strCmp(const char* cString1, const char* cString2);
int strNCmp(const char* cString1, const char* cString2, int iLen);

int main() {
	const int iStrLen = 36; // 文字列の長さを定義
	char* cStrInput1; // charへのポインタを定義。異なる文字列を入力するため、一旦破棄して再利用する。
	char* cStrInput2; // charへのポインタを定義。異なる文字列を入力するため、一旦破棄して再利用する。
	int iCmpLen = 0;
	int iResCmp = 0;

	// char型オブジェクトを動的に生成
	cStrInput1 = new char[iStrLen];
	// char型オブジェクトを動的に生成
	cStrInput2 = new char[iStrLen];

	// 元の文字列の入力を促す
	cout << "二つの文字列を比較します。それぞれ入力してください。: " << endl;
	// 文字列1
	cin >> cStrInput1;
	// 文字列2
	cin >> cStrInput2;

	// 文字列を連結
	iResCmp = strCmp(cStrInput1, cStrInput2);

	if (iResCmp == 0) {
		cout << "二つの文字列は等しいです。" << endl;
	} else {
		cout << "二つの文字列は異なります。" << endl;
	}

	// オブジェクトを破棄
	delete[] cStrInput1;
	// オブジェクトを破棄
	delete[] cStrInput2;


	// char型オブジェクトを動的に生成
	cStrInput1 = new char[iStrLen];
	// char型オブジェクトを動的に生成
	cStrInput2 = new char[iStrLen];

	// 比較する文字列の入力を促す
	cout << "\n二つの文字列を比較します。それぞれ入力してください。: " << endl;
	// 文字列1
	cin >> cStrInput1;
	// 文字列2
	cin >> cStrInput2;

	// 連結する長さを尋ねる
	cout << "先頭何文字を比較しますか。: ";
	// キーボードからの読み込み
	cin >> iCmpLen;
	// 入力値ぶんの長さだけ文字列を連結

	// 文字列比較の結果を整数として返す
	iResCmp = strNCmp(cStrInput1, cStrInput2, iCmpLen);

	if (iResCmp == 0) { // 返却値が0の場合
		// 文字列は等しい
		cout << "二つの文字列は等しいです。" << endl;
	} else {
		// 異なる文字列である
		cout << "二つの文字列は異なります。" << endl;
	}

	// オブジェクトを破棄
	delete[] cStrInput1;
	// オブジェクトを破棄
	delete[] cStrInput2;

	// 正常終了
	return 0;
}

// 二つの文字列を比較し、等しい場合に0、異なる場合、それ以外を返す
int strCmp(const char* cString1, const char* cString2) {
	int iIter = strlen(cString1); // 比較回数を決める
	int iCmpRes = 0; // 比較結果となる整数を格納

	// 決めた比較回数だけ文字列を比較
	for (int i = 0; i < iIter; i++) {
		// char型の値の差分を計算し、それを加算することで文字列が等しいか否かを求める
		iCmpRes += ( *(cString1 + i) - *(cString2 + i) );
	}

	// 比較結果を返す
	return iCmpRes;
}

// 二つの文字列の先頭iLen文字を比較し、等しい場合に0、異なる場合、それ以外を返す
int strNCmp(const char* cString1, const char* cString2, int iLen) {
	int iIter = iLen; // 引数として与えた比較する長さを比較回数とする
	int iCmpRes = 0; // // 比較結果となる整数を格納

	// 決めた比較回数だけ文字列を比較
	for (int i = 0; i < iIter; i++) {
		// char型の値の差分を計算し、それを加算することで文字列が等しいか否かを求める
		iCmpRes += ( *(cString1 + i) - *(cString2 + i) );
	}

	// 比較結果を返す
	return iCmpRes;
}
