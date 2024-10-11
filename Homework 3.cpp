// Homework 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string Author;
    int yearPublished;
    Book(string x, string y, int z) {
        title = x;
        Author = y;
        yearPublished = z;
    }
    Book() {
        title = "Unknown Title";
        Author = "Unknown Author";
        yearPublished = 0;
    }
    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << Author << endl;
        cout << "Year Published: " << yearPublished << endl;
    }
};

int findOldestbook(Book books[4], int size) {
    int oldestYearIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (books[i].yearPublished <= books[oldestYearIndex].yearPublished)
        {
            oldestYearIndex = i;
        }
    }
    return oldestYearIndex;
}

int main()
{
    Book arr1[3]{ {"Dog", "Cat", 7}, {"Elephant", "Monkey", 16}, {"Car", "James", 134} };
    Book arr2[5];
    Book arr3[4]{ {"Writing", "Jim", 1345}, {"Driving", "Mark", 1983}, {"Flying", "Bird", 11}, {"Swimming", "Fish", 12} };
    for (Book book : arr1)
    {
        book.displayInfo();
    }
    cout << endl;
    for (Book book : arr2)
    {
        book.displayInfo();
    }
    cout << "The oldest book in array 3 and its details are:" << endl;
    arr3[findOldestbook(arr3, 4)].displayInfo();
    cout << "Hello World!\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
