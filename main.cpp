#include <iostream>

int ** create(size_t rows, size_t cols);

void remove (int **matrix, size_t rows, size_t cols);

void input(int ** matrix, size_t rows, size_t cols);

void output(const int * const * matrix, size_t rows, size_t cols);
int main()
{
	size_t rows = 0, cols = 0;
	std::cin >> rows >> cols;
	if (!std::cin){
		return 1;}
	std::cout << rows * cols << "\n";


	int ** matrix = create(rows, cols);
	input (matrix, rows, cols);
	output(matrix, rows, cols);

	remove(matrix, rows, cols);

	std::cout << "\n";	
}	
