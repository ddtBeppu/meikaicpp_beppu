//============================================================================
// Name        : e06_19.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-19
//               List6-21の関数rを、不正な添字に対して安全に動作するものに書き換えよ。
//               静的記憶域期間をもつint型の変数を関数内部で定義して、idxが0以上a_size未満でなければ、その変数への
//               参照を返却すること。
//============================================================================

#include <iostream>
using namespace std;

const int aSize = 5; // 配列の要素数を定義
int& r (int idx); // iA[idx]への参照を返す関数

int main() {
	// idxの値の設定を変え、その挙動を見るため、idxの範囲以下の変数に代入することで可変にする。
	int iMin = 0; // idxの値の下限
	int iMax = 0; // idxの値の上限

	// idxの値の範囲を設定するように促す
	cout << "idxの値の範囲を設定しましょう。" << endl;
	// 下限の入力を促す
	cout << "下限: ";
	// キーボードから値を読み込み
	cin >> iMin;

	// 下限の入力を促す
	cout << "上限: ";
	// キーボードから値を読み込み
	cin >> iMax;

	// idxの値を増加させながら、関数の返却値を設定する
	for (int i = iMin; i < iMax; i++) {
		// idxの値を設定
		r(i) = i;
	}

	// idxの値を増加させながら、関数の返却値を表示、確認する
	for (int i = iMin; i < iMax; i++) {
		// 関数の出力値を返す
		cout << "r(" << i << ") = " << r(i) << endl;
	}

	// 正常終了
	return 0;
}

int& r (int idx) {
	static int iAlert = 0; // idxの値が0以上、aSize未満でなければ、この変数への参照を関数の返却値とする。
	static int iA[aSize]; // 返却値を設定

	// idxの値が0以上、aSize未満でない場合
	if (idx < 0 || idx >= aSize) {
		// インデックスの値を置き換え
		idx = iAlert;
	}

	// idxの値を添字とする要素への参照を返す
	return iA[idx];
}
