#include <iostream>
#include <vector>
#include "Tower.h"

using namespace std;

int main(void)
{
	int size = 4;
	vector<vector<int>> boxes = {
		{4, 6, 7},
		{1, 2, 3},
		{4, 5, 6},
		{10, 12, 32}
	};

	Tower tower = Tower();

	for (int i = 0; i < size; i++)
		tower.AddBox(boxes[i][0], boxes[i][1], boxes[i][2]);

	tower.CreateTower();
	tower.PrintTower();

	return 0;
}