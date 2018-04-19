//============================================================================
// Name        : e09_09/game.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習9-9
//               演習9-6(p.337)中の内部結合を持つ識別子を、名前無し名前空間に属するように変更したプログラムを
//               作成せよ。
//============================================================================

#include <ctime>
#include <cstdlib>

using namespace std;

// 名前なし名前空間にて変数を定義し、内部結合とする
namespace {
	int iAnswer = 0; // 乱数により生成した正解値を格納する
}
extern int iMaxNo; // 乱数で生成する上限値

// 乱数の種を生成する関数
void initialize() {
	// 現在の時間を元に乱数の種を生成
	srand(time(NULL));
}

// 乱数を生成する関数
void gen_no() {
	// 乱数の範囲を0 ~ iMaxNoとする計算
	iAnswer = rand() % (iMaxNo + 1);
}

// ファイルの外から生成した乱数値（正解）を参照するための関数
int get_answer() {
	// 正解値をそのまま返す
	return iAnswer;
}

// 入力値の正解/不正解を判定する関数
int judge(int iCand) {
	// 判定の値を0で初期化
	int iJudge = 0;
	if (iCand < 0) { // 入力回数が負の値(入力回数が上限に達した場合)
		// 入力値をそのまま返却する
		iJudge = iCand;
	} else if (iCand == iAnswer) { // 入力値 = 正解
		// 返却値に0を設定
		iJudge = 0;
	} else if (iCand > iAnswer) { // 入力値 > 正解
		// 返却値に1を設定
		iJudge = 1;
	} else if (iCand < iAnswer){ // 入力値 < 正解
		// 返却値に2を設定
		iJudge = 2;
	}

	// 判定結果の値を返却
	return iJudge;
}
