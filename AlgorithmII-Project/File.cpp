#include "File.h"

File::File(std::string filename)
{
	this->filename = filename;
}

bool File::ProcessFile()
{
	std::ifstream inputFile;
	inputFile.open(filename);

	if (!inputFile.is_open())
		return false;

	std::string line;
	getline(inputFile, line);
	int size = stoi(line);
	std::vector<std::vector<int>> lines;
	for (int i = 0; i < size; i++)
	{
		getline(inputFile, line);
		std::stringstream stream(line);
		std::string dimension;
		std::vector<int> box;
		while (stream >> dimension)
			box.push_back(stoi(dimension));
		lines.push_back(box);
	}

	this->lines = lines;

	inputFile.close();

	return true;
}

std::vector<std::vector<int>> File::GetLines()
{
	return this->lines;
}