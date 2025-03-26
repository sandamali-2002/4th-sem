// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <list>
#include <iostream>

class HashTable {
private:
    static const int size = 10;
    list<int> hashtable[size];
public:
    int Hash(int key)
    {
        return size % size;
    }

    void insert(int key)
    {
        int index = Hash(key);
        hashtable[index].push_back(key);

    }
    bool search(int key)
    {
        int index = Hash(key);
        for (auto it = hashtable[index].begin(); it != hashtable[index].end(); it++)
        {
            if (*it == key)
            {
                return true;
            }
        }
        return false;

    }

    void display() {

        for (int i = 0; i < size; i++)
        {
            cout << i << ".>";
            for (auto it = hashtable[i].begin(); it != hashtable[i].end(); it++)
            {
                cout << *it <<"->";
            }

            cout << endl;


        }
    }

};

int main()
{
    HashTable h;
    h.insert(1);
    h.insert(2);
    h.insert(78);
    h.insert(88);
    h.insert(45);
    h.insert(80);
    h.insert(65);

    h.display();




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
