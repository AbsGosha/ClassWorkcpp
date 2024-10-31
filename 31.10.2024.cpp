#include <iostream>
#include "Book.h"
#include "Worker.h"
using namespace std;
void showBookAvtor(Book* arr, int size, string avtor)
{
	int counterBook = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i].getAvtor() == avtor) {
			cout << arr[i].getName() << " ";
			counterBook++;
		}
	}
	cout << counterBook;
}
void showBookPublish(Book* arr, int size, string publish)
{
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i].getPublish() == publish) {
			cout << arr[i].getName() << " ";
			counter++;
		}
	}
	cout << counter;
}
void showBookYear(Book* arr, int size, int year)
{
	int counter = 0; 
	for (int i = 0; i < size; i++) {
		if (arr[i].getYear() == year) {
			cout << arr[i].getName() << " ";
			counter++;
		}
	}
	cout << counter;
}
void stagWorker(Worker* arr, int size, int year)
{
	int counter = 0;
	cout << "Information about an employee who exceeds the specified number of years of work: ";
	cout << endl;
	for (int i = 0; i < size; i++) {
		if (2024 - arr[i].getYearStartWork() > year) {
			cout << arr[i].getFamilia() << endl;
			cout << arr[i].getfatherName() << endl;
			cout << arr[i].getName() << endl;
			cout << arr[i].getPost() << endl;
			cout << arr[i].getYearStartWork() << endl;
			cout << arr[i].getZP() << endl;
			counter++;
			cout << endl;
		}
	}
	cout << "The number of such worker: " << counter;
	cout << endl;
}
void highZp(Worker* arr, int size, int zp)
{
	int counter = 0;
	cout << "Information about an employee whose salary exceeds the specified one: ";
	cout << endl;
	for (int i = 0; i < size; i++) {
		if (arr[i].getZP() < zp) {
			cout << arr[i].getFamilia() << endl;
			cout << arr[i].getfatherName() << endl;
			cout << arr[i].getName() << endl;
			cout << arr[i].getPost() << endl;
			cout << arr[i].getYearStartWork() << endl;
			cout << arr[i].getZP() << endl;
			counter++;
			cout << endl;
		}
	}
	cout << "The number of such worker: " << counter;
	cout << endl;
}
void thisPost(Worker* arr, int size, string post)
{
	int counter = 0;
	cout << "Information about the employee holding the specified position: ";
	cout << endl;
	for (int i = 0; i < size; i++) {
		if (arr[i].getPost() == post) {
			cout << arr[i].getFamilia() << endl;
			cout << arr[i].getfatherName() << endl;
			cout << arr[i].getName() << endl;
			cout << arr[i].getPost() << endl;
			cout << arr[i].getYearStartWork() << endl;
			cout << arr[i].getZP() << endl;
			counter++;
			cout << endl;
		}
	}
	cout << "The number of such worker: " << counter;
	cout << endl;
}

int main()
{
	srand(time(NULL));
	const int SIZE = 5;

	/*Book book1("Gogol", "death sols", "Novosibirsk", 1700, 400);
	Book book2("Turgenev", "Mymy", "Tver", 1850, 200);
	Book book3("Kuprin", "Poedinok", "Kaliningrad", 1900, 700);
	Book book4("Tolstoy", "War and world", "Piter", 1800, 5000);
	Book book5("Pushkin", "Evgeniy Onegin", "Rostov", 1750, 1000);

	Book* arr = new Book [SIZE] {book1, book2, book3, book4, book5};

	showBookAvtor(arr, SIZE, "Pushkin");
	cout << endl;
	showBookPublish(arr, SIZE, "Rostov");
	cout << endl;
	showBookYear(arr, SIZE, 1850);*/

	const int SIZE1 = 5;
	Worker worker1("Ivanov", "Ivan", "Ivanovich", "manager", 2015, 60000);
	Worker worker2("Petrov", "Petr", "Petrovich", "boss", 2000, 100000);
	Worker worker3("Alexandrov", "Alexandr", "Alexandrovich", "bugalter", 2005, 70000);
	Worker worker4("Mikhailov", "Mikhail", "Mikhailovich", "seller", 2010, 50000);
	Worker worker5("Danilov", "Danil", "Danilovich", "seller", 2020, 50000);

	Worker* arr1 = new Worker[SIZE1]{ worker1, worker2, worker3, worker4, worker5 };

	stagWorker(arr1, SIZE1, 5);
	cout << endl;
	highZp(arr1, SIZE1, 30000);
	cout << endl;
	thisPost(arr1, SIZE1, "seller");


}
