//============================================================================
// Name        : e09_02.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習9-2
//               二つの整数値xとyの最大公約数をユークリッドの互除法を用いて求める関数
//                  int gcd(int x, int y);
//               を作成せよ。
//============================================================================

#include <iostream>
using namespace std;

int gcd(int iX, int iY); // 二つの整数値iXとiYの最大公約数をユークリッドの互除法を用いて求める関数

int main() {
	int iInputX = 0; // 第一引数として関数に与える値を格納する
	int iInputY = 0; // 第二引数として関数に与える値を格納する

	// ユークリッド互除法を用いて最大公約数を求める
	cout << "二数の最大公約数を求めます。" << endl;

	// xの入力
	cout << "x: ";
	// キーボードから読み込み
	cin >> iInputX;

	// yの入力
	cout << "y: ";
	// キーボードから読み込み
	cin >> iInputY;

	// 最大公約数を表示する
	cout << "最大公約数は" << gcd(iInputX, iInputY) << "です。" << endl;

	// 正常終了
	return 0;
}

// 二つの整数値iXとiYの最大公約数をユークリッドの互除法を用いて求める関数
int gcd(int iX, int iY) {
	if (iX > iY) { // 第一引数の方が大きい場合
		// 減算
		iX -= iY;
	} else if (iX < iY) { // 第二引数の方が大きい場合
		// 減算
		iY -= iX;
	} else { // iXとiYが等しい。すなわち、計算が収束した時
		// iXまたはiYを返せば良い
		return iX;
	}

	// 計算結果に応じて、再帰の際の計算方法、あるいは返り値が変化
	return gcd(iX, iY);
}
