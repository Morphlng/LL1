#pragma once
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
using namespace std;

// ����ʽ�ṹ��
struct pstring {
	char left;
	string right;
};

class Grammar
{
public:
	Grammar();
	// �������캯��
	Grammar(const Grammar&);
	// �û������ʼ���ķ�
	void init();
	// ��ʼ������ʽ����
	void init_P();			
	// ������ʽ�Ҳ��һ���ַ�Ϊ���ս���Ľ��д����滻
	void first_letter_substitution();
	// ��ȡ����ʽ
	void left_common_factor();
	// ����First����
	void cal_First();			
	// ����Follow����
	void cal_Follow();		
	// ���õݹ鷽������Follow����
	void cal_Follow_recur();
	// ����Select����
	void cal_Select();
	// ����Ԥ�����������ͬһ��Ԫ���ж��ʽ��ʱ������false
	bool get_Table();
	// �ж��Ƿ�ΪLL(1)�ķ�
	bool is_LL1();
	// ��ĳ�����ս����First����
	void get_First_recur(char);				
	// ���ݹ�����Follow����
	void get_Follow();					
	// ��ĳ�����ս����Follow����
	void get_Follow_recur(char,int);	
	// �ж��Ƿ�Ϊ�ս��
	bool inVt(char);					
	// �ж��Ƿ�Ϊ���ս��
	bool inVn(char);				
	// ���ս����Ԥ��������е��б�
	int index_in_terminal(char);
	// ����ս����Ԥ��������е��б�
	int index_in_nonterminal(char);
	// �������ʽ��
	void printProduction();
	// ���First��
	void printFirst();					
	// ���Follow��
	void printFollow();					
	// ���Select��
	void printSelect();			
	// ���Ԥ�������
	void printTable();
	~Grammar();

private:
	// �ս������Сд��ĸ
	set<char> Vt;						
	// ���ս��������д��ĸ
	set<char> Vn;						
	// ����ʽ����P
	vector<pstring> P;					
	// ����ʽ�а������ս����
	set<char> terminal;					
	// ����ʽ�а����ķ��ս����
	set<char> nonterminal;				
	// First����
	map<char, set<char>> first_set;		
	// Follow����
	map<char, set<char>> follow_set;	
	// Select����
	vector<set<char>> select_set;		
	// Ԥ�������
	int** predict_table;
	// ����ʽ����
	int pnum;
	// ��ʼ����
	char S;								
};