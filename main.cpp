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

void reverse(const vector<int>&);
//reverse
//@param const vector<int>& - vector to be printed backwards

void printEvens(const vector<int>&);
//printEvens - only prints even numbers in vector
//@param const vector<int>& - the vector to be printed

void replace(vector<int>&);
//replace
//@param vector<int>& - vector in question

//Main Function
int main()
{

	vector<int> myVector;

	fillVector(myVector);
	printVector(myVector);

	reverse(myVector);
	printEvens(myVector);
	replace(myVector);

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

void reverse(const vector<int>& newMyVector)
{

	cout << "Vector reversed: ";
	for (unsigned int i = newMyVector.size(); i > 0; i--)
	{
		cout << newMyVector[i - 1] << " ";
	}

	cout << endl;
}

void printEvens(const vector<int>& newMyVector)
{
	cout << "Even Vectors: ";
	for (unsigned int i = 0; i < newMyVector.size(); i++)
	{
		if ((newMyVector[i] % 2) == 0)
		{
			cout << newMyVector[i] << " ";
		}
	}
	cout << endl;
}

void replace(vector<int>& newMyVector)
{
	int old, replace;

	cout << "Type in a number to be replaced with another number: ";
	cin >> old >> replace;

	for (unsigned int i = 0; i < newMyVector.size(); i++)
	{
		if (newMyVector[i] == old)
		{
			newMyVector[i] = replace;
		}
	}
	printVector(newMyVector);
	cout << endl;
}