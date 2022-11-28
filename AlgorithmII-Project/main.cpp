#include <iostream>
#include <vector>
#include "Tower.h"
#include "File.h"

using namespace std;

int main(void)
{
	std::vector<std::vector<int>> b1, b2;

	cout << "Tower no. 1" << endl;
	File f1 = File("SetOfBlocks1.txt");
	if (f1.ProcessFile())
		b1 = f1.GetLines();

	Tower t1 = Tower();

	for (int i = 0; i < b1.size(); i++)
		t1.AddBox(b1[i][0], b1[i][1], b1[i][2]);

	t1.CreateTower();
	t1.PrintTower();

	cout << endl << "Tower no. 2" << endl;
	File f2 = File("SetOfBlocks2.txt");
	if (f2.ProcessFile())
		b2 = f2.GetLines();

	Tower t2 = Tower();

	for (int i = 0; i < b2.size(); i++)
		t2.AddBox(b2[i][0], b2[i][1], b2[i][2]);

	t2.CreateTower();
	t2.PrintTower();

	return 0;
}