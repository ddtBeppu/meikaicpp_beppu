//============================================================================
// Name        : e08_18.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-18
//               文字列として表された整数値を、int型の整数値に変換した値を返す関数str2intを作成せよ。
//                   int str2int(const char* s);
//============================================================================

#include <iostream>
#include <typeinfo>
#include <cctype>

using namespace std;

const int iStrLen = 36; // 文字列の長さを定義
int ten_pow(int iInput); // 10の累乗を求める関数
int str2int(const char* ccStr); // 文字列として表された整数値を、int型の整数値に変換した値を返す関数

int main() {
	char cStrInput[iStrLen] = ""; // キーボードから入力する一つ目の文字列を格納する変数

	// 文字列を入力
	cout << "文字列を入力してください。: " << endl;
	// キーボードからの読み込み
	cin >> cStrInput;

	// 関数の結果を返す
	cout << "実行結果: " << str2int(cStrInput) << endl;

	// 正常終了
	return 0;
}

// 文字列として表された整数値を、int型の整数値に変換した値を返す関数
int str2int(const char* ccStr) {
	int res = 0; // 返却値を格納する変数
	int iIter = strlen(ccStr); // 文字列の長さをループの回数として用いる
	int iElem = 0; // 配列の要素番号に順にアクセスするため、この値を加算して行く

	// 個々の文字に、10の乗数をかけ、整数値として復元する
	while (iIter-- > 0) {
		// 読み込んだ文字が数字でなければ、返却値を0とし、処理終了
		if (isdigit(ccStr[iElem]) == false) {
			// 返却値を0とする
			res = 0;
			// ループを抜けて、そのままreturnする
			break;
		}

		// 文字を整数値に直しつつ、10の乗数をかけていく
		res += (ccStr[iElem] - '0') * ten_pow(iIter);
		// 次の要素に以降
		iElem++;
	}

	// 計算結果を返却
	return res;
}

// 10の累乗を求める関数
int ten_pow(int iInput) {
	// 10の乗数をかけていくので、返却値を1で初期化
	int iRet = 1;

	// 入力値をデクリメントしながら、処理を回していく
	while (iInput-- > 0) {
		// 10をかけていく
		iRet *= 10;
	}

	// 計算結果を返却
	return iRet;
}
