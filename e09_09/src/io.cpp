//============================================================================
// Name        : e09_09/io.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習9-9
//               演習9-6(p.337)中の内部結合を持つ識別子を、名前無し名前空間に属するように変更したプログラムを
//               作成せよ。
//============================================================================

#include <iostream>

using namespace std;

extern int iMaxNo; // 正解の値として生成する乱数の上限値
extern int iNumEx; // 解答を入力した回数
extern int iChance; // 入力できる回数の上限

// 正解の値を受け取る関数
int get_answer();

// 名前なし名前空間にて関数を定義し、内部結合とする
namespace {
	void prompt() {
		// 解答する値の範囲を示す
		cout << "0 ~ " << iMaxNo << "の数: ";
	}
}

// キーボードから読み込んだ値を返す関数
int input() {
	// 入力値を格納する変数を初期化
	int iVal = 0;
	// 不正な値が入力されたら入力をやり直す
	do {
		if (iNumEx == iChance) { // 入力回数が上限に達したら
			// 返却値に-1を設定
			iVal = -1;
			// ループを抜けて値を返却する
			break;
		}

		// 値の入力範囲を示し、入力を促す
		prompt();
		// キーボードから入力
		cin >> iVal;
	} while (iVal < 0 || iVal > iMaxNo); // 入力値に不正な値が入力されたら入力からやり直し

	// 入力回数をカウント
	iNumEx++;

	// 入力値を返却
	return iVal;
}

// 判定結果の値を受け取り、結果を知らせる関数
void call_result(int iJudge = 0) {
	if (iJudge == 0) { // 判定が0、すなわち正解の時
		// 正解するまで入力した回数と共に、正解である事を伝える
		cout << iNumEx << "回で正解です。" << endl;
	} else { // 入力上限回数に達した時点で正解しなかった場合
		// 正解を示す
		cout << "残念！正解は" << get_answer() << "です。" << endl;
	}
}

// ゲームの継続/終了を制御する関数
bool confirm_retry() {
	int iCont = 0; // 意志を表す整数値を格納する変数

	// 続行の意志を問う
	cout << "もう一度しますか？" << "\n"
		<< "<Yes...1 / No...0>: ";
	// キーボードから読み込み
	cin >> iCont;

	// 入力値をbool型にキャストし、返却
	return static_cast<bool> (iCont);
}
