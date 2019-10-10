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
//Algorithm and code by @MoSatt github.com/mo2019
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

	vector< vector<int> > cypher;
	vector< vector<int> > dupes(106);
	vector< vector<char> > letters(106);

	vector<int> cyphertext;
	vector<int> row(500);
	vector<char> alpha(27);
	alpha.push_back('a');
	alpha.push_back('b');
	alpha.push_back('c');
	alpha.push_back('d');
	alpha.push_back('e');
	alpha.push_back('f');
	alpha.push_back('g');
	alpha.push_back('h');
	alpha.push_back('i');
	alpha.push_back('j');
	alpha.push_back('k');
	alpha.push_back('l');
	alpha.push_back('m');
	alpha.push_back('n');
	alpha.push_back('o');
	alpha.push_back('p');
	alpha.push_back('q');
	alpha.push_back('r');
	alpha.push_back('s');
	alpha.push_back('t');
	alpha.push_back('u');
	alpha.push_back('v');
	alpha.push_back('w');
	alpha.push_back('x');
	alpha.push_back('y');
	alpha.push_back('z');
	alpha.push_back(' ');

	int input;
	cout << "Enter Cypher Text seperated by spaces, end with -1" << endl;
	while (cin >> input && input != -1) {
		cyphertext.push_back(input);
	}


	cypher.push_back(cyphertext);
	for (int i = 0; i < 10; i++) {
		cypher.push_back(row);
	}

	for (int i = 0; i < 10; i++) {
		dupes.push_back(row);
	}
	for (int i = 0; i < 27; i++) {
		letters.push_back(alpha);
	}

	

	for (int i = 0; i < 500; i++) {
				dupes[cypher[0][i]].push_back(i);
	}


	for (int i = 0; i < 500; i++) {
		if (dupes[cypher[0][i]][0] > 1) {
			cypher[1][i] = (i % 1);
			cout << "mod 1: " << cypher[1][i] << endl;
			cypher[2][i] = (i % 2);
			cout << "mod 2: " << cypher[2][i] << endl;
			cypher[3][i] = (i % 3);
			cout << "mod 3: " << cypher[3][i] << endl;
			cypher[4][i] = (i % 4);
			cout << "mod 4: " << cypher[4][i] << endl;
			cypher[5][i] = (i % 5);
			cout << "mod 5: " << cypher[5][i] << endl;
			cypher[6][i] = (i % 6);
			cout << "mod 6: " << cypher[6][i] << endl;
			cypher[7][i] = (i % 7);
			cout << "mod 7: " << cypher[7][i] << endl;
			cypher[8][i] = (i % 10);
			cout << "mod 10: " << cypher[8][i] << endl;
			cypher[9][i] = (i % 19);
			cout << "mod 19: " << cypher[9][i] << endl;
		}
	}
	
	//for (int i = 0; i < dupes.size(); i++) {
		//if (dupes[cypher[0][i]][1] > 1) {
			//if (cypher[1][dupes[cypher[0][i]][1]] != cypher[1][dupes[cypher[0][i]][2]])
				//cout << "mod 1 mismatch " << cypher[0][i] << endl;
		//}
		//}
	


	
	return 0;
}
