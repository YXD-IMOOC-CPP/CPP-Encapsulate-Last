#include <iostream>
#include <stdlib.h>
#include "Coor.h"

using namespace std;

int main(void) {

	Coor coor[3];//栈中实例化数组
	coor[0].x = 3;
	coor[0].y = 5;

	Coor *p = new Coor[3];//堆中创建数组
	p->x = 7;
	p->y = 8;

	p++;
	p->x = 71;
	p->y = 82;

	p[1].x = 15;

	for (int i=0; i<3; i++)
	{
		cout <<"Hello"<< coor[i].x << endl;
		cout << "Hello" << coor[i].y << endl;
	}

	p--;

	for (int i = 0; i<3; i++)
	{
		cout << "Hello" << p[i].x << endl;
		cout << "Hello" << p[i].y << endl;
	}

	delete []p;//注意此时P必须指回到索引0的位置！！！
	p = NULL;

	system("pause");
	return 0;
}