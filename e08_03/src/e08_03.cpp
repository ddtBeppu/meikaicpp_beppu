//============================================================================
// Name        : e08_03.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-3
//               文字列中の大文字を小文字に変換した上で表示する関数put_lowerを作成せよ。
//                   void put_lower(const char s[]);
//============================================================================

#include <iostream>
using namespace std;

// 文字列中の大文字を小文字に変換して表示する関数
void put_lower(const char cString[]);

int main() {
	char cInput[36] = ""; // 空文字列を定義。キーボードからの入力値を格納する

	// 文字列の入力を促す
	cout << "文字列を入力してください。" << endl;
	// キーボードから値を読み込み
	cin >> cInput;

	// 大文字を小文字に変換して表示
	put_lower(cInput);

	// 正常終了
	return 0;
}

// 文字列中の大文字を小文字に変換して表示する関数
void put_lower(const char cStr[]) {
	// 文字列を先頭から参照し、ナル文字が見つかるまでくまなく
	for (int i = 0; cStr[i]; i++) {
		// 大文字を小文字に変換する
		cout << static_cast<char> (tolower(cStr[i]));
	}
}
