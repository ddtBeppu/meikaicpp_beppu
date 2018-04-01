//============================================================================
// Name        : e07_16.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習7-16
//               double型の配列を動的に生成するプログラムを作成せよ。要素数はキーボードから読み込むこと。
//               また、生成に失敗した場合の処理も行うこと。
//============================================================================

#include <new>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	int iArrSize = 0; // 配列の要素数を格納する配列
	double* dArray; // 動的に生成する配列へのポインタとして定義

	// 要素数を尋ねる
	cout << "要素数: ";
	// キーボードから入力
	cin >> iArrSize;

	try {
		dArray = new double[iArrSize]; // 配列を生成
	} catch (bad_alloc) { // 要素数が負の値になるなどの異常が発生したときに以下を実行
		// 異常が発生したことを伝える
		cout << "配列の生成に失敗しましたのでプログラムを中断します。" << endl;
		// 異常終了
		return 1;
	}

	// 配列の要素の入力を促す
	cout << "\n配列の要素を設定してください。" << endl;
	// 配列の要素数だけ繰り返し
	for (int i = 0; i < iArrSize; i++) {
		// 現在の配列の要素の入力を促す
		cout << "dArray[" << i << "]: ";
		// キーボードからの読み込み
		cin >> dArray[i];
	}

	// 配列の全要素を表示する
	for (int i = 0; i < iArrSize; i++) {
		// 小数点第一位までを表示する
		cout << "dArray[" << i << "] = " << fixed << setprecision(1) << dArray[i] << endl;
	}

	// 動的に生成した配列を破棄する
	delete[] dArray;

	// 正常終了
	return 0;
}
