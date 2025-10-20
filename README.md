## Banking Program
This is a simple console-based banking application written in C++. It allows users to:

--Deposit money

--Withdraw money

--View current balance

The program starts with a default balance of 600.00.

Users interact with the program by entering numeric choices (e.g., 1 = deposit, 2 = withdraw, 3 = show balance).

The program runs in a loop until the user chooses to exit.

## Requirements
To run this program, you’ll need the following:

--A C++ compiler that supports C++11 or later

--Compatible with Windows (Made in W11)

--main.cpp – Main source file containing the program logic

## How to run
(BASH)Open a terminal in the folder where main.cpp is located and run: 

    g++ -std=c++11 -o banking main.cpp

After successful compilation, run the executable:

    ./banking

On Windows: 

    banking.exe

## GCC via MSYS2
If you're on Windows, this program uses GCC installed through the MSYS2 environment.

Make sure you have MSYS2 installed and that you're using the ucrt64 toolchain:

You can then build the program directly in Visual Studio Code using the provided tasks.json configuration.

##You're welcome to use, adapt, or build upon this code for your own learning or development.