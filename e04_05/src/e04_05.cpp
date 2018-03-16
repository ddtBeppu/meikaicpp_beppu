//============================================================================
// Name        : e04_05.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習4-5
//               float型の変数とdouble型の変数にキーボードから数値を読み込んで、
//               その値を表示するプログラムを作成せよ。
//============================================================================

#include <iostream>
using namespace std;

int main() {
	float fInput = 0.0; // float型の入力値
	double dInput = 0.0; // double型の入力値
	string sRetry = "";

	do { // 以下、実行
		// float型の値の入力を促す
		cout << "float型の値を入力: ";
		// キーボードから値を読み込む
		cin >> fInput;

		// float型の入力値を表示
		cout << "float型の入力値を表示 : " << fInput << endl;


		// double型の値の入力を促す
		cout << "double型の値を入力: ";
		// キーボードから値を読み込む
		cin >> dInput;

		// double型の入力値を表示
		cout << "double型の入力値を表示 : " << dInput << endl;

		// 続行/終了を尋ねる
		cout << "continue? (y/n): ";
		// キーボードからy/nを入力して意思表示
		cin >> sRetry;
	} while (sRetry == "y"); // yが入力されるまで繰り返す

	// 整数値を返す
	return 0;
}
