//============================================================================
// Name        : e03_26.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-26
// 人間とコンピュータとが対戦するジャンケンプログラムを作成せよ。
// ・人間が望む限り何度でも繰り返せるようにするもの
// ・いずれか一方が3回勝つまで繰り返すもの
// など、複数のパターンのプログラムを作成すること。

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int i_div = 3; // 乱数を3で割り、0 ~ 2の乱数を発生させる
const string hands[3] = {"グー", "チョキ", "パー"}; // ジャンケンの手を表す文字列を格納する配列

// ジャンケンをする関数
int rock_paper_scissors ();
// 勝者、あるいは引き分けをアナウンスする関数
void call_winner (int win);
// ゲームの終了判定をする関数
int finish_game (int end);

int main() {
	int i_rule = 0; // ゲームの内容を決定する変数を格納する変数
	int i_finish = 1; // ゲーム終了を制御する変数

	int h_win_count = 0; // 人間の勝利数
	int pc_win_count = 0; // コンピュータの勝利数
	const int count_max = 3; // この数だけ勝利すればゲーム終了とする
	int winner = 0; // 勝者、あるいは引き分けを表す変数

	// ゲーム開始を告げる
	cout << "ジャンケンの勝負をしましょう。" << endl;
	// 対戦ルールを選択することを促す
	cout << "対戦ルールを選んでください。" << endl;
	// 終了を宣言するまでループするゲーム
	cout << "- 0: 望む限りいつまででも続ける" << endl;
	// 人間かPCのどちらかが先に3回勝利すると終了するゲーム
	cout << "- 1: どちらかが先に3回勝ったら終わり" << endl;
	// 対戦ルールを入力する
	cin >> i_rule;

	switch (i_rule) { // 入力値により、ゲームを切り替える
	case 0: // 0が入力された時、
		// 終了を宣言するまでループするゲームを記述した箇所に移動
		goto ENDLESS;
		break; // 処理の終了
	case 1: // 1が入力された時
		// 人間かPCのどちらかが先に3回勝利すると終了するゲームを記述した箇所に移動
		goto WIN_THREE_THEN_END;
		break; // 処理の終了
	}

// 望む限りいつまででも続けるルール
ENDLESS:
	do { // 以下を実行
		// ジャンケンをする関数を実行。
		// 返り値として勝者、あるいは引き分けを示す整数を返す
		winner = rock_paper_scissors();
		// rock_paper_scissors()の引数に応じて、勝敗をアナウンス
		call_winner(winner);

		// 続行/終了を尋ねる
		cout << "\n続けますか？ （続ける...1 /終わる...0）: ";
		// いずれかの整数を入力
		cin >> i_finish;

		/* 入力値に応じて、続行、終了をアナウンスするfinish_game()関数
		       の帰り値が1(すなわち続行)の間、ループする */
	} while(finish_game(i_finish) == 1);

	// 整数値を返す
	return 0;

// どちらかが先に3回勝ったら終わりのルール
WIN_THREE_THEN_END:
	do { // 以下を実行
		// 返り値として勝者、あるいは引き分けを示す整数を返す
		winner = rock_paper_scissors();
		// rock_paper_scissors()の引数に応じて、勝敗をアナウンス
		call_winner(winner);

		if (winner == 0) { // 勝者がPCの場合
			// PCの勝利数を+1する
			pc_win_count++;
		} else if (winner == 1) { // 勝者が人間の場合
			// 人間の勝利数を+1する
			h_win_count++;
		}

		if (count_max - pc_win_count == 1) { // 目標勝利数-1の時
			// PCがあと一勝で勝利することを告げる
			cout << "\nあと一勝で私の勝ちです。" << endl;
		} else if (count_max - h_win_count == 1) { // 目標勝利数-1の時
			// 人間があと一勝で勝利することを告げる
			cout << "\nあと一勝であなたの勝ちです。" << endl;
		}

		// PCまたは人間が目標勝利数に達した時
		if (pc_win_count == count_max || h_win_count == count_max) {
			// 終了を制御する変数に0を代入
			// -> finish_game()関数が0を返すので、終了する
			i_finish = 0;
		}

		/* 入力値に応じて、続行、終了をアナウンスするfinish_game()関数
				       の帰り値が1(すなわち続行)の間、ループする */
	} while(finish_game(i_finish) == 1);

	// 整数値を返す
	return 0;
}

// ジャンケンをする関数
int rock_paper_scissors() {
	int i_hand = 0; // 人間のジャンケンの手を決める変数
	int i_winner = 0; // 0: PCの勝ち、1: 人間の勝ち、2: 引き分け

	srand(time(NULL)); // 乱数の種を生成
	int i_pc_hand = rand() % i_div; // 0 ~ 2の乱数を発生させる。ジャンケンの手を決める。

	// ジャンケンの手を決めることを促す
	cout << "最初はグー。ジャンケン（0: グー, 1: チョキ, 2: パー）: ";
	// 手を入力
	cin >> i_hand;

	// 人間の出した手を表示
	cout << "あなた: " << hands[i_hand] << endl;
	// PCの出した手を表示
	cout << "PC : " << hands[i_pc_hand] << endl;

	if (i_pc_hand == 0) { // PCがグー
		if (i_hand == 1) { // 人間がチョキ
			i_winner = 0; // PCが勝利
		} else if (i_hand == 2) { // 人間がパー
			i_winner = 1; // 人間が勝利
		} else { // 人間がグー
			i_winner = 2; // 引き分け
		}
	} else if (i_pc_hand == 1) { // PCがチョキ
		if (i_hand == 2) { // 人間がパー
			i_winner = 0; // PCが勝利
		} else if (i_hand == 0) { // 人間がグー
			i_winner = 1; // 人間が勝利
		} else { // 人間がチョキ
			i_winner = 2; // 引き分け
		}
	} else if (i_pc_hand == 2) { // PCがパー
		if (i_hand == 0) { // 人間がグー
			i_winner = 0; // PCが勝利
		} else if (i_hand == 1) { // 人間がチョキ
			i_winner = 1; // 人間が勝利
		} else { // 人間がパー
			i_winner = 2; // 引き分け
		}
	}

	// 勝者を表す整数値を返す
	return i_winner;
}

// 勝者、あるいは引き分けをアナウンスする関数
void call_winner (int result) {
	// 勝敗を表す引数に応じて、出力するテキストが変化
	switch (result) {
	case 0: // 引数が0の時
		// PCが勝ちと伝える
		cout << "私の勝ち!!!" << endl;
		// 処理の終了
		break;
	case 1: // 引数が1の時
		// 人間が勝ちと伝える
		cout << "あなたの勝ち!!" << endl;
		// 処理の終了
		break;
	case 2: // 引数が2の時
		// 引き分けであると伝える
		cout << "引き分けです。" << endl;
		// 処理の終了
		break;
	}
}

// ゲームの終了判定を行う関数
int finish_game (int end) {
	if (end == 1) { // 引数が1の場合
		// 続行を伝える
		cout << "続けます。";
		// 1を返す
		return 1;
	}
	// 終了を伝える
	cout << "\n終わり!!" << endl;
	// 0を返す
	return 0;
}
