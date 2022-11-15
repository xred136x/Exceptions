// ������
#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

double devide(double num1, double num2) {
	if (num2 == 0)
		//throw " / 0";
		//throw std::exception("/0");
		throw invalid_argument("/0");
	return num1 / num2;
}

template <typename T>
void fill_arr(T arr[], const int len, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < len; i++)
		arr[i] = rand() % (end - begin) + begin;
}
template <typename T>
void show_arr(T arr[], const int len) {
	if (len <= 0)
		throw std::invalid_argument("���������� ������������� ����� �������");
	cout << '[';
	for (int i = 0; i < len; i++)
		cout << arr[i] << ", ";
	cout << "\b\b\n";
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	// ������������ ��������(if....else)
	/*cout << "������� ������ ���������: ";
	cin >> n;
	cout << "������� ����� ���������: ";
	cin >> m;
	if (n < m)
		cout << "Ok\n";
	else
		cout << "error\n";*/
	// ��������� ����������
	/*try {
		cout << "������� ������ ���������: ";
		cin >> n;
		cout << "������� ����� ���������: ";
		cin >> m;
		if (n > m)
			throw 1;
		if (n == m)
			throw "������� ��������� �����";
		cout << "its Ok";
	}
	catch (const int& e) {
		if (e == 1)
			cout << "begin > end error\n";
		//else
			//if (e == 2)
				//cout << "begin == end error\n";
	}
	catch (const char* e) {
		cout << "error: " << e << endl;
	}*/
	// ��������� ������� �� 0
	/*try {
		cout << "������� 2 �����\n";
		cin >> n >> m;
		cout << n << " / " << m << devide(n, m) << endl;
	}
	catch (const char* e) {
		cout << "error: " << e << endl;
	}
	catch (const std::exception& ex) {
		cout << "error: " << ex.what() << endl;
	}*/
	// ���������� ��� ������ � �������
	/*string path = "file.txt/22424";

	std::ofstream out;
	out.exceptions(ios::badbit | ios::failbit | ios::eofbit);


	try {
		out.open(path);
		cout << "file open\n";
		out.close();
	}
	catch (const ios::failure& ex) {
		cout << "error open file" << ex.what() << endl;
		cout << "code error: " << ex.code().value() << endl;
	}
	//out.close();*/

	// Task 1. ����� ������� �� �����
	cout << "Task 1\n";
	const int size = 10;
	int arr[size];
	try {
		fill_arr(arr, size, 1, 11);
		show_arr(arr, size);
	}
	catch (const exception& ex) {
		cout << "error:" << ex.what() << endl;
	}


	return 0;
}