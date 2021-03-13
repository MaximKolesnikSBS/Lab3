/*
	Автор: Максим Колесник
	Группа: СБС-001-О-01
	Задание№: 3: 5)
	Цель: Написать программу для вычисления определителя матрицы размерами 3 на 3.
*/

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
	srand(time(NULL));
	int matrix[3][3];
	for (int i = 1; i < 4; i++){
		for (int j = 1; j < 4; j++){
			matrix[i][j] = rand() % 10;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	int det;
	int f, s, t;
	f = matrix[1][1] * ((matrix[2][2] * matrix[3][3]) - (matrix[2][3] * matrix[3][2]));
	s = matrix[1][2] * ((matrix[2][1] * matrix[3][3]) - (matrix[2][3] * matrix[3][1]));
	t = matrix[1][3] * ((matrix[2][1] * matrix[3][2]) - (matrix[2][2] * matrix[3][1]));
	det = f - s + t;
	cout << "Determinant of a matrix = " << det << endl;
	return 0;
}