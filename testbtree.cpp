#pragma warning(disable:4996)
//tstbtree.cc

#include "btnode.h"
#include "btnode.cpp"
#include "btree.h"
#include "btree.cpp"
#include "simpind.h"
#include "simpind.cpp"
#include <iostream>
#include <string>

using namespace std;

const char * keys = "CSDTAMPIBWNGURKEHOLJYQZFXV";

const int BTreeSize = 8;
int main(int argc, char * argv){

	int result, i;
	BTree <char> bt(BTreeSize);
	cout << "input data = " << keys << endl;
	result = bt.Create("btree.dat", ios::in | ios::out);
	if (!result) { 
		cout << "Please delete testbt.dat" << endl; 
		system("pause");
		return 0; 
	}
	for (i = 0; i<26; i++)
	{
		cout << "Inserting " << keys[i] << endl;
		result = bt.Insert(keys[i], i);
		bt.Print(cout);
	}
	bt.Search(1, 1);

	system("pause");
	return 1;
}


