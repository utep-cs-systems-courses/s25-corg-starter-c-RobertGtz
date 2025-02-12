#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}
//prints a arrow, I use previes methods to create mine
void print_arrow(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size; //set the space for the poity part start
  int sizeMid = size/2;
  for (int row = 0; row < size + leftCol; row++){ //arrow + leftCol since the shaft need addtional
    int col = 0;
    int midCol = size + endCol/2, maxCol = endCol + row -1, minCol = endCol - row + size; //midCol to set the poit of the arrow
    for (       ; col < size; col++) putchar(' ');
    for (       ; col < maxCol && row<=sizeMid; col++) putchar('*');
    if (col==midCol){ //of we find the poit of the arrow we put the shaft
	putchar('\n');
	int col3 = 0;
	for (; col3 < leftCol; col3++) putchar(' ');
	for (       ; col3 < maxCol;  col3++) putchar('*');
    }
    for (       ; col < minCol && row>=sizeMid; col++) putchar('*');
    putchar('\n');
  }
}
