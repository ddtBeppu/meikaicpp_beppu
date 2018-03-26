//============================================================================
// Name        : e06_11.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-11
//               List6-11を拡張して、以下の４種類の問題をランダムに出題するプログラムを作成せよ。
//                  x + y + z
//                  x + y - z
//                  x - y + z
//                  x - y - z
//============================================================================

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

bool confirm_entry(); // 続行 / 終了を問う関数
int calculate(int iType, int iX, int iY, int iZ); // 3変数の演算を行う関数

int main() {
	/* x, y, zを用いて計算を行う*/
	int iX = 0; // 計算に用いるxの値
	int iY = 0; // 計算に用いるyの値
	int iZ = 0; // 計算に用いるzの値

	int iPatt = 0; // 計算式および表示する演算子のパターンを決定する変数

	// 表示する演算子の組み合わせ
	string cSymbol[4][2] = {
			{" + ", " + "},
			{" + ", " - "},
			{" - ", " + "},
			{" - ", " - "},
	};

	int iAnswer = 0; // 計算の答えを格納する変数

	// 乱数の種を生成
	srand(time(NULL));

	// 開始を告げる
	cout << "暗算トレーニング開始!!" << endl;

	// 続行を支持する限り繰り返すループ
	do {
		// xの値をランダムに決定
		iX = rand() % 900 + 100;
		// yの値をランダムに決定
		iY = rand() % 900 + 100;
		// zの値をランダムに決定
		iZ = rand() % 900 + 100;

		// 計算式、演算子のパターンをランダムに決定
		iPatt = rand() % 4;

		// 暗算にて正解し、ループを抜けるまで、繰り返し処理が行われる
		while (true) {
			// ランダムに決定された計算式が表示される。
			cout << iX << cSymbol[iPatt][0] << iY << cSymbol[iPatt][1] << iZ << " = ";
			// 計算式の暗算を行い、答えを入力する
			cin >> iAnswer;
			// 正解の場合
			if (iAnswer == calculate(iPatt, iX, iY, iZ)) {
				// whileループを抜ける
				break;
			}
			// 不正解の場合
			cout << "\a違いますよ!!" << endl;
		}
	} while (confirm_entry()); // 続行 / 終了が問われ、続行とした場合、繰り返す

	// 正常終了
	return 0;
}

// 続行 / 終了を問う関数
bool confirm_entry() {
	// 続行か終了かの判定を値として格納する変数
	int iRetry = 0;
	do { // 以下、実行
		// 意志表示を求める
		cout << "もう一度？<Yes...1 / No...0>: ";
		// 答えに対応する値を入力
		cin >> iRetry;
	} while (iRetry != 0 && iRetry != 1); // 入力値が0でも１でもない場合、繰り返し

	// 0/1をbool型にキャストした値を返す
	return static_cast<bool> (iRetry);
}

// 3変数の演算を行う関数
int calculate(int iType, int iX, int iY, int iZ) {
	// iTypeの値により、計算式が変化
	switch (iType) {
		case 0: // 0の場合
			// 以下の計算結果を返す
			return iX + iY + iZ;
		case 1: // 1の場合
			// 以下の計算結果を返す
			return iX + iY - iZ;
		case 2: // 2の場合
			// 以下の計算結果を返す
			return iX - iY + iZ;
		case 3: // 3の場合
			// 以下の計算結果を返す
			return iX - iY - iZ;
	}
}
