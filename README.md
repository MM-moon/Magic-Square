# Magic-Square
This program creates a magic square of odd size between 1 and 9. The user is prompted to enter an odd number between 1 and 9. If the input is not valid, the program asks the user again to enter a valid input. 

the program then creates a two dimensional array called "magicSquare" with all elements initialized to zero. It then sets the starting position for the first number in the magic square by setting row to n-1 (the last row) and col to n/2 (the middle column). It also initializes num to 1, which will be used to fill in each cell of the magic square.

The program then enters a loop that continues until all cells in the magic square have been filled with numbers. In each iteration of the loop, it sets the current cell (row, col) to num and increments num by 1. It then updates row and col based on a specific algorithm for creating magic squares.

The algorithm works as follows: 
- Move up one row and right one column (i.e., decrement row and increment col).
- If row becomes -1 (i.e., goes off the top of the square), wrap around to the bottom row.
- If col becomes n (i.e., goes off the right side of the square), wrap around to column 0.
- If the current cell is already filled with a number, move down one row from where you started and stay in the same column.

Once all cells have been filled with numbers, the program prints out the completed magic square by iterating through each element of magicSquare and outputting it to console.
