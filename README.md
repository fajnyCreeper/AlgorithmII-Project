# Tower of Boxes
This project is solution to the "Tower of Boxes" problem.

## Task description
We have a set of *n* types boxes. All boxes are blocks with dimensions *h x w x l*. For the purpose of this task, it is not important which dimension is which.

Our goal is to build the highest tower possible but we have to follow these rules:
1. We can build only upwards. One layer of the tower **must** be made from one box only. That means we cannot place two boxes next to each other.
1. We can rotate the box by 90° in all three axes.
1. We can re-use the same box type, but all other rules must be followed.
1. We can place on top only boxes, that have sides of base shorter than the current box on the top. That means, we cannot place two identical boxes on top of each other.

### Notes
The boxes are stored in *txt* file, on which the first line is the number of boxes we have.  
Then we have the boxes, which are stored in following format: `h w l`

## Approach to the solution
The solution is derived from following source: https://www.geeksforgeeks.org/box-stacking-problem-dp-22/

First, we need to load the boxes from the file, which is handled by `File` class.  
We then pass all the loaded boxes into `Tower` class, using `Tower::AddBox()` method, which not only saved passed box, but all possible rotations.

When we added all the boxes, we wanted, we call `Tower::CreateTower()` method. First thing, we do, is sort all boxes by it's area in ascending order. Then we call `Tower::RecursiveSearch()` method, which uses memoization to build the highest tower possible.

When the highest tower was created, we store it's size into `Tower::maxHeight` variable and then we go though the `Tower::memoization` vector to search for the blocks we used to build the tower. We save these blocks into `Tower::tower` vector.

After we have built the tower, we can call `Tower::PrintTower()` function which will print the result of our calculations in formated order.  
Frist, we print the height of the tower, followed by all blocks we used in descending order (starting from base and going to the top).
