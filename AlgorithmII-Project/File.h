#pragma once
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

class File
{
private:
	std::string filename;
	std::vector<std::vector<int>> lines;

public:
	//! Constructor for File class.
	/*!
	 * Create instance of File class.
	 * \param filename Path to file with input.
	 */
	File(std::string filename);

	//! Process the input file
	/*!
	 * Opens the input file, if file was not opened correnctly, return false,
	 * otherwise reads first line, which contains count of the rest of the lines.
	 * Then we read the file line by line, where we split the file using whitespaces.
	 * All the values ve got from single line, we store as dimensions in vector,
	 * and when finished reading single line, push the dimensions vector into vector
	 * \return True, if file was processed correctly, otherwise false.
	 */
	bool ProcessFile();

	//! Getter for lines vector
	/*
	 * Get the line vector and return it
	 * \return Vector of all lines
	 */
	std::vector<std::vector<int>> GetLines();
};

