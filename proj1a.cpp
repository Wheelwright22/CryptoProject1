// Take in dictionary word(s) as dict
// Take in cyphertext as cypher, record dupes in dupes where number of dupes stored in index of value
// Perform frequency analysis on cypher and store results in freq
// Scan freq for matches to letters of list length 1
// Take in list lengths for all l > 1 store as lists where letter(s) is value of index
// For all dupes in cypher, find index j and calculate j mod every list length (2,3,4,5,6,7,10,19) 
// eliminate all indexes i in lists where i < (j mod l)
// Find index in arr3 where j mod l always equals same index, eliminate other indexes.
// Compare value of index with value of arr[i] to see which letters are possible.Eliminate others.
// Return letter values of all indexes in arr2b

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//vector<string> dict;
	//dict.push_back("masterwork");
	//dict.push_back(" ");
	//dict.push_back("swept");
	//dict.push_back(" ");
	//dict.push_back("squanders");
	//dict.push_back(" ");
	//dict.push_back("grounders");
	
	vector<double> *cypher = new vector<double>;
	

	double input;
	cout << "Enter Cypher Text:" << endl;
	while (cin >> input && input != -1) {
		cypher->push_back(input);
	}

	
		
	

	
	vector<int> dupes(200);
	
	//string lists[10] = { "0", "b j k q v x z" , "c f g m p u w y" , "l" , "d" , "h r s" , "i n o" , "a t" , "e" , "space" };

	for (int i = 0; i < cypher->size(); i++) {
		cout << "Cyphertext: " << (*cypher)[i] << endl;
		dupes[(*cypher)[i]]++;
		
	}
	for (int i = 0; i < dupes.size(); i++)
		if (dupes[i] > 1) {
			cout << "There are " << dupes[i] << " instances of " << i << endl << endl;
		}
	for (int j = 0; j < dupes.size(); j++)
		if (dupes[(*cypher)[j]] > 1) {
			cout << "Value " << (*cypher)[j] << " found in index: " << j << endl << endl;
			cout << " index " << j << " mod 19 equals: " << j % 19 << endl;
			cout << " index " << j << " mod 10 equals: " << j % 10 << endl;
			cout << " index " << j << " mod 7 equals: " << j % 7 << endl;
			cout << " index " << j << " mod 6 equals: " << j % 6 << endl;
			cout << " index " << j << " mod 5 equals: " << j % 5 << endl;
			cout << " index " << j << " mod 4 equals: " << j % 4 << endl;
			cout << " index " << j << " mod 3 equals: " << j % 3 << endl;
			cout << " index " << j << " mod 2 equals: " << j % 2 << endl;
			cout << " index " << j << " mod 1 equals: " << j % 1 << endl << endl;
		}




	return 0;
}

