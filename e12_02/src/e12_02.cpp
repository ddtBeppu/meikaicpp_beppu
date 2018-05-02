//============================================================================
// Name        : e12_02.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習12-2
//               クラスBooleanに対して、vがFalseであればbool型のtrueを、Trueであればbool型のfalseを
//               返却する演算子関数!を追加せよ。
//============================================================================

#include <iostream>
#include "Boolean.h"

using namespace std;

// 引数同士が等しいかを判定する
Boolean int_eq(int inputX, int inputY) {
	// 引数同士の等式を判定した値を返却
	return inputX == inputY;
}

int main() {
	int inputNum = 0; // キーボードから読み込む値
	Boolean inputA; // デフォルトコンストラクタを呼び出し。False
	Boolean inputB = inputA; // コピーコンストラクタを呼び出し。False
	Boolean inputC = 100; // 変換コンストラクタを定義。値が!=0のため、Trueが設定される。
	Boolean bCase[8]; // デフォルトコンストラクタを複数生成

	// 整数値の入力を促す
	cout << "整数値: ";
	// キーボードから値を読み込み
	cin >> inputNum;

	bCase[0] = int_eq(inputNum, 5); // 入力値と5が等しいかを判定し、その判定値を格納
	bCase[1] = (inputNum != 3); // 入力値が3でなければTrueを格納
	bCase[2] = Boolean::False; // Falseの値を設定
	bCase[3] = 1000; // 1000の値で初期化
	bCase[4] = inputC = Boolean::True; // Trueの値で初期化

	/*-- 設問に該当する箇所 --*/
	bCase[5] = !true; // 演算子関数!()の動作確認用

	// aの値をint型にキャストして表示
	cout << "aの値: " << int(inputA) << endl;
	// bの値をint型に静的キャストして表示
	cout << "bの値: " << static_cast<const char*>(inputB) << endl;

	// 8回処理を行う
	for (int i = 0; i < 8; i++) {
		// 判定値を表示
		cout << "bCase[" << i << "] = " << bCase[i] << endl;
	}

	// 正常終了
	return 0;
}
