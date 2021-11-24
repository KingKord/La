#include <iostream>
using namespace std;

char finish[] = "finish";
bool is_finish(char* s, int i) { // проверка на стоп слово fff qwwwwwwwwwwwww qwe eeeeeeeeeee qwe qqqq finish
	int num = 0;
	for (int i = 0; i < strlen(finish); i++) if (s[i] == finish[i]) num++;;
	if (num == strlen(finish))return true;
	else return false;
}


int main() {
	setlocale(0, "ru");

	cout << "Введите текст\n";
	char** s = new char*[10000];
	int num_words = 0;
	for (int i = 0;; i++) { // считывание
		s[i] = new char;
		cin >> s[i];
		num_words++;
		if (is_finish(s[i], 0)) {
			break;
		}
	}
	int n = 0, temp_n = 0;
	cout << "\nМаксимальное количество слов в строке: \n";

	cin >> n;
	// int arr[100]; // массив индексов на самое длинное словo в каждой строке
	//for (int i = 0; i < (num_words / n) + 1; i+=n) // строки
	//{
	//	for (int j = 0; j < n; j++) // слова
	//	{
	//		int max_num = 0;
	//		arr[i] = j;
	//		if (strlen(s[j]) > max_num) {

	//			max_num = strlen(s[j]);
	//			arr[i] = j;
	//		}
	//	}
	//}
	int num_str = 0;
	for (int i = 0; i < num_words - 1; i++) { // решение

		//int sum_num = 0, max_num = 0, i_max_num = i;
		//	for (; i < n; i++) {
		//		for (int j = 0; j <= strlen(s[i]); j++) { // подсчёт количества букв в слове
		//			if (s[i][j] >= 'a' and s[i][j] <= 'z' or s[i][j] >= 'A' and s[i][j] <= 'Z')  sum_num++;
		//		}
		//		if (max_num < sum_num) {
		//			
		//			
		//		}
		//	}
		//
		/*if (arr[num_str] != i) */cout << s[i] << " ";
		temp_n++;
		if (temp_n == n) {
			cout << endl;
			temp_n = 0;
			num_str++;
		}
	}
	for (int i = 0; i < num_words; i++) { // удаление
		s[i] = 0;
		delete[] s[i];
	}
	delete[] s;
}