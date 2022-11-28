#include "Tower.h"

void Tower::AddBox(int height, int width, int length)
{
	this->boxes.push_back(Box(
		height,
		std::max(length, width),
		std::min(length, width)
	));

	this->boxes.push_back(Box(
		width, 
		std::max(height, length),
		std::min(height, length)
	));

	this->boxes.push_back(Box(
		length, 
		std::max(width, height),
		std::min(width, height)
	));
}

int Tower::RecursiveSearch(std::vector<Box> boxes, int bottomIndex, int index)
{
	if (index < 0)
		return 0;

	if (this->memoization[index] != -1)
		return this->memoization[index];

	int maxHeight = 0;

	for (int i = index; i >= 0; i--)
	{
		if (bottomIndex == -1 || (this->boxes[i].width < this->boxes[bottomIndex].width && this->boxes[i].length < this->boxes[bottomIndex].length))
		{
			maxHeight = std::max(maxHeight, RecursiveSearch(this->boxes, i, i - 1) + boxes[i].height);
		}
	}

	return this->memoization[index] = maxHeight;
}

void Tower::CreateTower()
{
	std::sort(this->boxes.begin(), this->boxes.end(), [](Box first, Box second) { return ((first.width * first.length) < (second.width * second.length)); });

	std::vector<int> init(boxes.size(), -1);
	this->memoization = init;

	this->maxHeight = RecursiveSearch(this->boxes, -1, this->boxes.size() - 1);

	int index = 0;
	for (int i = 0; i < this->boxes.size(); i++)
	{
		while (this->memoization[index] == this->memoization[index + 1])
			index++;

		if (this->memoization[index] + this->boxes[i].height == this->memoization[index + 1])
		{
			this->tower.push_back(this->boxes[i]);
			index++;
		}
	}
	
}

void Tower::PrintTower()
{
	std::cout << "Maximum height: " << this->maxHeight << std::endl;
	std::cout << "Boxes used:" << std::endl;

	for (int i = this->tower.size() - 1; i >= 0; i--)
		std::cout << this->tower[i].ToString() << std::endl;
}