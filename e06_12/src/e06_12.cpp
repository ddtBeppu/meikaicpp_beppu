//============================================================================
// Name        : e06_12.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-12
//               b以上a以下の全整数の和を求める関数sumを作成せよ。なお、bに対する実引数が省略されて呼び出された
//               場合は、bを1とみなして合計を求めること。
//                     int sum(int a, int b);
//============================================================================

#include <iostream>
#include <typeinfo>

using namespace std;

int sum(int iMax, int iMin = 1); // iMin以上iMax以下の全整数の和を求める関数

int main() {
	int iMax = 0; // 最大値を格納する変数
	int iMin = 0; // 最小値を格納する変数

	// 計算方法をアナウンスする
	cout << "b以上a以下の全整数の和を求めます。" << endl;

	// bに対応する値の入力を促す
	cout << "b: ";
	// キーボードから値を読み込み
	cin >> iMin;

	// aに対応する値の入力を促す
	cout << "a: ";
	// キーボードから値を読み込み
	cin >> iMax;

	// 関数によって求められた和を表示する。
	cout << "和は" << sum(iMax, iMin) << "です。" << endl;

	// bに対応する引数を省略した場合の計算
	cout << "\n1以上a以下の全整数の和を求めます。" << endl;

	// // aに対応する値の入力を促す
	cout << "a: ";
	// キーボードから値を読み込み
	cin >> iMax;

	// 関数によって求められた和を表示する。
	cout << "和は" << sum(iMax) << "です。" << endl;
}

// iMin以上iMax以下の全整数の和を求める
int sum(int iMax, int iMin) {
	// 合計値を格納する変数
	int iSum = 0;
	// iMinの値を加算しながら足し合わせていく。
	for (int i = iMin; i <= iMax; i++) {
		// 合計値に加算
		iSum += iMin;
		iMin++;
	}

	// 合計値を返却
	return iSum;
}
