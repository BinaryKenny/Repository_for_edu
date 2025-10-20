#include <iostream>
void remove (int **matrix, size_t rows);

int ** create(size_t rows, size_t cols){
	int ** result = nullptr;
	size_t i = 0;
	try {
		result = new int* [rows];
		for (; i < rows; ++i){
			result[i] = new int[cols];
		}
	}catch (...){
		remove(result, i);
		throw;
	}
	return result; 
}
void remove (int **matrix, size_t rows){
	for (size_t i = 0; i < rows; ++i){
		delete[] matrix[i];
	} 
	delete[] matrix;
}
void input(int ** matrix, size_t rows, size_t cols){
	for (size_t i = 0; i < rows && std::cin; ++i){
		for (size_t j = 0; j < cols && std::cin;++j){
			std::cin >> matrix[i][j];
		}
	}
} 

void output(const int * const * matrix, size_t rows, size_t cols){
	for (size_t i = 0; i < rows; ++i){
		for (size_t j = 0; j < cols; ++j){
			std::cout << matrix[i][j] << " ";
		}
	}
}
int main()
{
	size_t rows = 0, cols = 0;
	std::cin >> rows >> cols;
	if (!std::cin){
		return 1;
	}
	std::cout << rows * cols << "\n";


	int ** matrix = create(rows, cols);
	input (matrix, rows, cols);
	if (!std::cin){
		remove(matrix, rows);
		return 1;
	}
	output(matrix, rows, cols);

	remove(matrix, rows);

	std::cout << "\n";	
}	
