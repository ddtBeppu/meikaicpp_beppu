//============================================================================
// Name        : e06_01.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-1
//               受け取ったint型引数の値nが負であれば-1を返却し、0であれば0を返却し、正であれば1を返却する
//               関数sign_ofを作成せよ。以下の/*･･･*/の部分を作成すること。
//                    int sign_of(int n) {/*･･･*/}
//============================================================================

#include <iostream>
using namespace std;

// 受け取ったint型引数の値nが負であれば-1を返却し、0であれば0を返却し、正であれば1を返却する関数
int sign_of(int iGet);

int main() {
	int iInput = 0; // 入力値を格納する変数

	// 値の入力を促す。値は任意となる。
	cout << "任意の値を入力してください。: ";
	// キーボードから値を読み込む
	cin >> iInput;

	// 関数からの返却値を表示
	cout << sign_of(iInput) << endl;

	// 正常終了
	return 0;
}

// 受け取ったint型引数の値nが負であれば-1を返却し、0であれば0を返却し、正であれば1を返却する関数
int sign_of(int iGet) {
	if (iGet < 0) { // 受け取っと値が負の場合
		// -1を返却
		return -1;
	} else if (iGet > 0) { // 受け取っと値が正の場合
		// 1を返却
		return 1;
	}
	// いずれの条件も当てはまらない。すなわち受け取った値が0の場合
	return 0;
}
