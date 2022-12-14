#pragma once
#include <string>
#include <sstream>

//! Class representing single box.
class Box
{
public:
	int height; //!< Height of the box.
	int width; //!< Width of the box.
	int length; //!< Length of the box.

	//! Class constructor.
	/*!
	 * Construct object by passing height, width, length represented by integer.
	 * \param height,width,length Dimensions of box.
	 */
	Box(int height, int width, int length);

	//! Transform the values to string format.
	/*!
	 * Returns standardized output in format width x length x height.
	 * \return String representation of box.
	 */
	std::string ToString();
};

