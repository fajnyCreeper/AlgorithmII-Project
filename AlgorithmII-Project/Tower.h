#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
#include "Box.h"

class Tower
{
private:
	std::vector<Box> boxes; //!< Storage for all rotations of boxes.

	std::vector<int> memoization; //!< Vector for use in dynamic programming.

	int maxHeight; //!< Maximum height of tower.

	std::vector<Box> tower; //!< Finalized tower created from boxes.

	int RecursiveSearch(std::vector<Box>, int, int); //!< Recursive function for solving the tower problem.

public:
	//! Adds Box and all it's rotations to boxes vector.
	/*!
	 * Creates instance of Box class and adds it to boxes vector.
	 * \param height,width,length Dimensions of the box.
	 */
	void AddBox(int height, int width, int length);

	//! Creates the highest tower possible.
	/*!
	 * Sort boxes by area and call RecursiveSearch function to get hightest tower,
	 * then process the memoization vector and get the boxes used for the tower.
	 */
	void CreateTower();

	//! Prints information about the tower
	/*
	 * Prints formated information about the tower.
	 * Firstly print the maximum height we got,
	 * then print all of the boxes used.
	 */
	void PrintTower();
};

