/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

// Function to add delay
void delay(int milliseconds) {
    this_thread::sleep_for(chrono::milliseconds(milliseconds));
}

// Function to print animated dots
void loadingEffect(string text) {
    cout << text;
    for (int i = 0; i < 3; i++) {
        cout << ". ";
        cout.flush();
        delay(500);
    }
    cout << endl;
}

// Function to display a heart
void printHeart() {
    string heart[] = {
        "  **    **  ",
        " ****  **** ",
        " **********  ",
        "  ******** ",
        "   ******   ",
        "    ****    ",
        "     **     "
    };
    for (string line : heart) {
        cout << line << endl;
        delay(300);
    }
}

int main() {
    system("cls"); // Clear screen (Windows), use "clear" for Linux/Mac

    loadingEffect("Hey, there's something I want to ask you");

    delay(1000);
    
    cout << "\nBut first, here's something for you 💖" << endl;
    delay(1000);

    printHeart();  // Show the animated heart

    delay(1000);
    
    cout << "\nWill you be my Valentine? 💕 (Yes/No): ";
    string response;
    cin >> response;

    if (response == "Yes" || response == "yes") {
        cout << "\nYay!! You just made my day! 💞" << endl;
    } else {
        cout << "\nI will still take that as a yes hehe" << endl;
    }

    return 0;
}