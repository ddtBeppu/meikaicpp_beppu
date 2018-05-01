/*
 * Account.h
 *
 *  Created on: May 1, 2018
 *      Author: naotobeppu
 *
 *  演習11-4
 *  コンストラクタ初期化によって明示的に初期化しない場合に、メンバ部分オブジェクトが
 *  デフォルトコンストラクタで初期化されることをプログラムを作成して確認せよ。
 */

#include <string>
#include "Date.h"

class Account {
	std::string fullName; // 名義氏名
	std::string sNumber; // 口座番号
	long int crntBalance; // 預金残高
	Date dOpen; // 口座解説日のメンバ部分オブジェクト
public:
	// コンストラクタ
	Account(std::string name, std::string num, long int amount, int year, int month, int day);

	// 預け入れ操作を実装した関数
	void deposit(long int amount);
	// 引き出し操作を実装した関数
	void withdraw(long int amount);

	// 名義氏名にクラスの外からアクセスする際に用いる関数
	std::string name() const {
		// 値を返却
		return fullName;
	}
	// 名義氏名にクラスの外からアクセスする際に用いる関数
	std::string no() const {
		// 値を返却
		return sNumber;
	}
	// 名義氏名にクラスの外からアクセスする際に用いる関数
	long int balance() const {
		// 値を返却
		return crntBalance;
	}
	// 名義氏名にクラスの外からアクセスする際に用いる関数
	Date opening_date() const {
		// 値を返却
		return dOpen;
	}
};
