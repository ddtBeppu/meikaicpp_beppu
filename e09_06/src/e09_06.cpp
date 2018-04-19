//============================================================================
// Name        : e09_06.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習9-6
//               数当てゲーム第二番を以下のように変更したプログラムを作成せよ。
//                ・当てるべき数を0 ~ 999とする。
//                ・プレーヤが数値を入力できる回数を最大で10回までに制限する。
//                ・入力ミスを行った（0 ~ 999）場合は、回数としてカウントしない。
//                ・正解した場合は何回で正解したのかを表示し、最後まで正解しなかった場合は正解を表示する。
//============================================================================

#include <iostream>
using namespace std;

void initialize(); // 乱数の種を生成する関数
void gen_no(); // 乱数を生成する関数
int judge(int iCand); // 入力値の正解/不正解を判定する関数
int input(); // キーボードから読み込んだ値を返す関数
bool confirm_retry(); // ゲームの継続/終了を制御する関数
void call_result(int iJudge); // 判定結果の値を受け取り、結果を知らせる関数

int iMaxNo = 999; // 当てるべき関数の上限値
int iNumEx = 0; // 入力した回数をカウントする
int iChance = 10; // 入力てきる回数の上限

int main() {
	// 乱数の種を生成
	initialize();
	// ゲームの開始を伝える
	cout << "数当てゲーム開始！" << endl;

	// 終了とするまでゲームを続ける
	do {
		// 乱数により値を生成。この値が何かを答える。
		gen_no();
		// 判定の値を初期化
		int iHantei = 0;
		// 正解するまで続ける
		do {
			// 入力値との比較を行った結果をiHanteiに格納
			iHantei = judge(input());
			if (iHantei == 1) { // 入力値 > 正解
				// 正解の値は入力値より小さいと伝える
				cout << "\aもっと小さいですよ。" << endl;
			} else if (iHantei == 2) { // 入力値 < 正解
				// 正解の値は入力値より大きいと伝える
				cout << "\aもっと大きいですよ。" << endl;
			}
		}while (iHantei > 0); // 入力値 = 正解、または入力回数の判定が10回となるまで繰り返し
		// 結果をアナウンス
		call_result(iHantei);
		// 入力した回数を初期化する
		iNumEx = 0;
	} while (confirm_retry()); // 続行の意思があるか確認する

	// 正常終了
	return 0;
}
