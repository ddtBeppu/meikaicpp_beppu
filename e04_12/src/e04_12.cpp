//============================================================================
// Name        : e04_12.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習4-12
//               トランプの記号（ダイヤ、ハート、クラブ、スペード）の四つの列挙子をもつ列挙体を定義せよ。
//               各列挙子の値は、先頭から順に0,1,2,3とし、List4-17と同様にキーボードから値を読み込んで
//               表示すること。
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// トランプの記号を表す列挙体
	enum cards {
		Diamond, // ダイヤ
		Heart, // ハート
		Club, // クラブ
		Spade // スペード
	};

	int iType = 0; // 列挙子の値を指定するための変数
	cards cDesign = static_cast<cards> (iType);

	// 以下、繰り返し
	do {
		// 列挙体中の値を提示
		cout << "0･･･ダイヤ、1･･･ハート、2･･･クラブ、3･･･スペード";
		// キーボード入力により選択
		cin >> iType;
	} while (iType < Diamond || iType > Spade); // 入力値が0より小さい、または3より大きい場合、継続

	// 指定したカードの絵柄の名称を表示
	switch (cDesign) {
	case Diamond: // ダイヤの場合
		// テキストの出力
		cout << "ダイヤ" << endl;
		// switch文を抜ける
		break;
	case Heart: // ハートの場合
		// テキストの出力
		cout << "ハート" << endl;
		// switch文を抜ける
		break;
	case Club: // クラブの場合
		// テキストの出力
		cout << "クラブ" << endl;
		// switch文を抜ける
		break;
	case Spade: // スペードの場合
		// テキストの出力
		cout << "スペード" << endl;
		// switch文を抜ける
		break;
	}

	// 整数値を返す
	return 0;
}
