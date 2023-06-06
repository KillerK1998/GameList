#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;
using std::getline;

/*Reverse order function:
Input:
	(bonus points: store user input as the list_of_strings)
	vector<string> list_of_strings = {"Final Fantasy", "The Sorcerer's Stone", "Gran Tourismo", "Inside Out", "How to Train Your Dragon"};
	reverse(list_of_strings);
	printVector(list_of_strings);
Ouput:
	"How to Train Your Dragon"
	...
	"Final Fantasy"
	/*/
string toString(float number, int precision) {
	ostringstream stream; //include <sstream>
	stream << fixed;
	stream << setprecision(precision); //include <iomanip>
	stream << number;
	return stream.str();
}
// if you want 2.55, call toString(2.55, 2).
// if you want 2, call toString(2.55, 0).

//step 1: user inputs things into a string and is stored into a vector
//step 2 figure out a way to reverse order for list

int main(){
	vector<string>anticipatedGames = {};
	
	string game = "Enter anticipated game";
	string highly = "your highly anticipated games are: ";
	string x = " ";

	for (int count = 1; count < 6; count++) {
		cout << game << " " << count << ":" << "\n";
		getline(cin, x);
		anticipatedGames.push_back(x);
	}
	reverse(anticipatedGames.begin(), anticipatedGames.end());
	for (int i = 0; i < anticipatedGames.size(); i++) {
		x = x + "\n" + anticipatedGames[i];
	}
	cout << highly << " " << x << "\n";
		return 0;
}
