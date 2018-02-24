//============================================================================
// Name        : e03_01.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-1
// 読み込んだ整数値の符号を判定するList2-5(p.44)を、
// 好きなだけ何度でも入力・表示を繰り返せるようにしたプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int num; // 変数の宣言

	do{ // while() == falseの間、以下を実行
		cout << "整数値: "; // テキストの出力
		cin >> num; // キーボードからの入力

		if (num < 0) // num < 0の時
			// テキストの出力
			cout << "負の値が入力されました。" << endl;
		else if (num > 0) // num > 0の時
			// テキストの出力
			cout << "正の値が入力されました。" << endl;
		else // num = 0の時
			// テキストの出力
			cout << "0が入力されました。" << endl;
	} while(num != 0); // numが0でない場合

	return 0; // 整数値を返す
}
