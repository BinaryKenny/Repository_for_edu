#include <iostream>

int ** create(size_t rows, size_t cols);

void remove (int **matrix, size_t rows, size_t cols);

void input(int ** matrix, size_t rows, size_t cols){
	for (size_t i = 0; i < rows && std::cin; ++i){
		for (size_t j = 0; i < cols && std::cin;++j){
			std::cin >> matrix[i][j];
		}
	}
} 

void output(const int * const * matrix, size_t rows, size_t cols){
	std << rows << " " << cols;

int main()
{
	size_t rows = 0, cols = 0;
	std::cin >> rows >> cols;
	if (!std::cin){
		remove(matrix, rows, cols);
		return 1;}
	std::cout << rows * cols << "\n";


	int ** matrix = create(rows, cols);
	input (matrix, rows, cols);
	if (!std::cin){
		remove(matrix, rows, cols);
		return 1;
	}
	output(matrix, rows, cols);

	remove(matrix, rows, cols);

	std::cout << "\n";	
}	
