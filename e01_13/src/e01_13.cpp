//============================================================================
// Name        : e01_13.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習1-13
// 以下に示すプログラムを作成せよ。
//・1桁の正の整数値（すなわち1以上9以下の値）をランダムに生成して表示。
//・1桁の負の整数値（すなわち-9以上-1以下の値）をランダムに生成して表示。
//・2桁の正の整数値（すなわち10以上99以下の値）をランダムに生成して表示。

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	time_t t=time(NULL); // 現在の時刻を取得

	srand(t); // 時刻を引数として、乱数の種を生成
	int pos_i = rand() % 9 + 1;// 1桁の正の整数値を生成

	srand(rand()); // 乱数を引数として、乱数の種を生成
	int neg_i = rand() % 9 + 1; // 1桁の負の整数値を生成
	neg_i = neg_i * -1;

	srand(rand()); // 乱数を引数として、生成乱数の種を生成
	int pos_di = rand() % 90 + 10; // 2桁の正の整数値を生成

	// 1桁の正の整数値を表示
	cout << "1桁の正の整数値：　" <<  pos_i << "\n" << endl;

	// 1桁の負の整数値を表示
	cout << "1桁の負の整数値：　" <<  neg_i << "\n" << endl;

	// 2桁の正の整数値を表示
	cout << "2桁の正の整数値：　" <<  pos_di << "\n" << endl;

	return 0; // 整数を返す
}
