#include "Grammar.h"

int main()
{
	Grammar g;
	g.init();
	/*
	// 最左非终结符代入
	g.first_letter_substitution();
	cout << "代入后：" << endl;
	g.printProduction();

	// 消除左递归
	g.parsing_left_recursion();
	cout << "消除左递归：" << endl;
	g.printProduction();

	// 提取左公因子
	g.left_common_factor();
	cout << "提取左公因子：" << endl;
	g.printProduction();

	// 删除不可达的产生式
	g.del_unreachable_production();
	g.printProduction();
	*/

	// 计算First集合
	g.cal_First();
	g.printFirst();

	// 计算Follow集合
	g.cal_Follow();
	g.printFollow();

	// 计算Select集合
	g.cal_Select();
	g.printSelect();

	if (g.is_LL1())
	{
		g.printTable();
		if (g.grammar_parsing())
		{
			cout << "句子匹配成功" << endl;
		}
	}
	else
<<<<<<< HEAD
		cout << "输入文法不是LL(1)型文法" << endl;

=======
		cout << "杈撳叆鏂囨硶涓嶆槸LL(1)鍨嬫枃娉�" << endl;
	*/
>>>>>>> 563fd49d0e9ab69e515faae5f407a511da1c58f6
	return 0;
}
