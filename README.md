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
The following solution is inspired by 
