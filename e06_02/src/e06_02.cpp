//============================================================================
// Name        : e06_02.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-2
//               三つのint型引数の最小値を求める関数minを作成せよ。
//============================================================================

#include <iostream>
using namespace std;

const int iNumElem = 3; // 比較する値の数
int min(int iMinCandidate[iNumElem]); // 入力された値の中で最小値を求める関数

int main() {
	int iMin = INT_MAX; // 最小値を格納する変数
	int iInput[iNumElem] = {}; // キーボードからの入力値を格納する配列

	// 決められた個数の値を、キーボードから入力
	for (int i = 0; i < iNumElem; i++) {
		// 値の入力を促す
		cout << "値を入力してください。" << endl;
		// 入力する値が何個目か分かるように、テキストを出力
		cout << "値" << i + 1 << ": ";
		// キーボードから値を読み込み
 		cin >> iInput[i];
	}

	// 入力値の中から最小値を求める関数minから返却された値を、最小値として得る
	iMin = min(iInput);
	// 返却された最小値を出力
	cout << "\n最小値は" << iMin << "です。" << endl;

	// 正常終了
	return 0;
}

// 入力された値の中で最小値を求める関数
int min(int iMinCandidate[iNumElem]) {
	int iMin = INT_MAX; //　最小値を格納する変数
	// 繰り返し大小比較を行い、最小値を求める
	for (int i = 0; i < iNumElem; i++) {
		if (iMinCandidate[i] < iMin) { // 現在の最小値よりも値が小さい場合
			// 最小値を更新
			iMin = iMinCandidate[i];
		}
	}

	// 最小値を返却する
	return iMin;
}
