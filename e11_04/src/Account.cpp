/*
 * Account.cpp
 *
 *  Created on: May 1, 2018
 *      Author: naotobeppu
 *
 *  コンストラクタ初期化によって明示的に初期化しない場合に、メンバ部分オブジェクトが
 *  デフォルトコンストラクタで初期化されることをプログラムを作成して確認せよ。
 */

#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

// コンストラクタ
Account::Account(string name, string num, long int amount, int year, int month, int day)
 //: dOpen(year, month, day) // ← 題意より、コンストラクタ初期化子をコメントアウト
{
	// 名義氏名を設定
	fullName = name;
	// 口座番号を設定
	sNumber = num;
	// 預金残高を設定
	crntBalance = amount;
}
// 預け入れ操作を実装した関数
void Account::deposit(long int amount) {
	// 預金残高に加算
	crntBalance += amount;
}
// 引き出し操作を実装した関数
void Account::withdraw(long int amount) {
	// 預金残高から引数を減算
	crntBalance -= amount;
}
