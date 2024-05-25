// cpp.practice_13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Item {
private:
    std::string title;
    double price;

public:
    virtual void getData() {

        std::cout << "**************** ";
        std::cout << "\nEnter title:"<<std::endl;

        std::getline(std::cin,title);

        //std::cout << "\nEnter title:";
        //std::getline(std::cin, title);

        
        std::cout << "\nEnter price:";
        std::cin>> price;
    }
    virtual void putData() {
        std::cout << "\nTitle: " << title;
        std::cout << "\nPrice: " << price;
    }
};
class Paperbook: public Item {
private:
    int pages;
public: 
    void getData() {
        Item::getData();
        std::cout << "Enter pages quantity: ";
        std::cin >> pages;
    }
    void putData() {
        Item::putData();
        std::cout << "\nPages: " << pages; 
    }
};

class AudioBook :public Item {
private:
    double time;
public:
    void getData() {
        Item::getData();
        std::cout << "Enter track time: " << '\n';
        std::cin >> time;
    }
    void putData() {
        Item::putData();
        std::cout << "\nTrack time: " << time;
    }

};

int main()
{
    Item *pubarr[100];

    /*
    std::string name;
    std::cout << "What is your name? ";
    std::getline(std::cin, name);
    std::cout << "Hello " << name << ", nice to meet you.\n";
    */

    int n{ 0 };
    char choice;
    do {
        std::cout << "\nWhould you like to enter data for book or audiofile (b/a)?";
        std::cin>>choice;
        if (choice == 'b') {
            pubarr[n] = new Paperbook;
        }
        else {
            pubarr[n] = new AudioBook;
        }
        pubarr[n++]->getData();
        std::cout << "\nWould you like to continue?";
        std::cin >> choice;
    } while (choice == 'y');
    for (int j{};j < n;j++) {
        pubarr[j]->putData();
    }
    std::cout << std::endl;
    
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
