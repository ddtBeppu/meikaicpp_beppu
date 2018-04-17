//============================================================================
// Name        : e08_19.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-19
//               文字列として表された実数値を、double型の実数に変換した値を返す関数str2doubleを作成せよ。
//============================================================================

#include <iostream>
#include <typeinfo>
#include <cctype>
#include <iomanip>

using namespace std;

const int iStrLen = 36; // 文字列の長さを定義
double str2double(const char* ccStr); // 文字列として表された整数値を、double型の整数値に変換した値を返す関数
int ten_pow(int iInput); // 10の累乗を求める関数
double real_pow(int iInput); // 10の階乗(負)の値を計算
bool check_digit(const char cStr); // 文字が数字であるかを判定する関数

int main() {
	char cStrInput[iStrLen] = ""; // キーボードから入力する一つ目の文字列を格納する変数

	// 文字列を入力
	cout << "文字列を入力してください。: " << endl;
	// キーボードからの読み込み
	cin >> cStrInput;

	// 関数の結果を返す
	cout << "実行結果: " << fixed << setprecision(3) << str2double(cStrInput) << endl;

	// 正常終了
	return 0;
}

// 文字列として表された整数値を、double型の整数値に変換した値を返す関数
double str2double(const char* ccStr) {
	double dResult = 0.0; // 返却値を格納する変数
	int iIter = 0; // 文字列の要素番号を格納する変数
	int iBefore = 0; // 小数点より前の桁数を格納する変数
	int iAfter = 0; // 小数点以下の桁を格納する変数
	bool bCheck = true;

	// 小数点より前の桁数を計算
	while (ccStr[iBefore] != '.') {
		// 小数点より前の桁数をカウントアップ
		iBefore++;
	}

	// 整数部の計算
	while (bCheck == true && iBefore-- > 0) {
		// 文字列が数字であるか判定
		bCheck = check_digit(ccStr[iIter]);
		// 文字を整数に直し、桁に対応するように、10の階乗をかけていく
		dResult += (ccStr[iIter] - '0') * ten_pow(iBefore);
		// 次の要素を参照する
		iIter++;
	}
	// '.'をスキップする
	iIter++;

	// 小数部の計算
	while (bCheck == true && ccStr[iIter] != '\0') {
		// 文字列が数字であるか判定
		bCheck = check_digit(ccStr[iIter]);
		// 小数点以下の桁数をカウントアップ
		iAfter++;
		// 順に加算していく
		dResult += (ccStr[iIter] - '0') * real_pow(iAfter);
		// 次の要素を参照
		iIter++;
	}

	if (bCheck == false) {
		dResult = 0.0;
	}
	// 計算結果を返却
	return dResult;
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

// 10の階乗(負)の値を計算
double real_pow(int iInput) {
	// // 0.1をかけていくので、返却値を1で初期化
	double iRet = 1;

	// 入力値をデクリメントしながら、処理を回していく
	while (iInput-- > 0) {
		// 0.1をかけていくことで、小数点以下を表現
		iRet *= 0.1;
	}
	// 計算結果を返却
	return iRet;
}

bool check_digit(const char cStr) {
	// 引数である文字が数字であるかを判定した値を格納
	bool isDigit = true;
	if (isdigit(cStr) == false) { // 読み込んだ文字が数字でなければ
		// 数字ではないことを伝える
		cout << "数字ではありません。" << endl;
		// falseを返す
		isDigit = false;
	}
	// 判定結果を返却
	return isDigit;
}
