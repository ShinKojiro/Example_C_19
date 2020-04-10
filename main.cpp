#include <iostream>
#include <vector>

using namespace std;

// Function Declarations
void fillVector(vector<int>&);
// fiiVector
//@param vector<int>& - the vector to be filled

void printVector(const vector<int>&);
//printVector
//@param const vector<int>& - the vector to be printed

//Main Function
int main()
{

	vector<int> myVector;

	fillVector(myVector);
	printVector(myVector);


	return 0;
}

//Function Definitions
void fillVector(vector<int>& newMyVector)
{
	cout << "Type in a list of numbers (-1 to stop): ";
	int input;
	cin >> input;

	while (input != -1)
	{
		newMyVector.push_back(input);
		cin >> input;
	}

	cout << endl;
}

void printVector(const vector<int>& newMyVector)
{

	cout << "Vector: ";
	for (unsigned int i = 0; i < newMyVector.size(); i++)
	{
		cout << newMyVector[i] << " ";
	}

	cout << endl;
}