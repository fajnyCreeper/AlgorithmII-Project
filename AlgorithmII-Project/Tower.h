#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
#include "Box.h"

class Tower
{
private:
	std::vector<Box> boxes; //Storage for all rotations of boxes.

	std::vector<int> memoization; //Vector for use in dynamic programming

	int maxHeight; //Maximum height of tower.

	std::vector<Box> tower; //Finalized tower created from boxes.

	int RecursiveSearch(std::vector<Box>, int, int); //Recursive function for solving the tower problem.

public:
	void AddBox(int, int, int); //Add box to the "boxes" vector.
	void CreateTower(); //Create the highest tower possible.
	void PrintTower(); //Formated output of the "tower" vector.
};

