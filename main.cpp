#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

int main() {

    vector<string> cipher; // This Vector Will Hold Our Numbers (As Strings). We Will Parse The Raw User Input And Push Back Into This Vector

    cout << "Please Enter The Cipher Text: ";
    string ciphertext;
    cin >> ciphertext;

    /* We are looping through the user input to grab values separated in between commas.
     * We push back those values into the cipher vector.

    string substr;
    getline( ciphertext, substr, ',' );
    cipher.push_back( substr );

    cout << ciphertext;
    */

// These Vectors Are The First Set of Vectors That Will Hold The
// Index Positions At Which The Number (Named In The Vector) Occurs.

     vector<string> holds_index_positions_for_number0;
     vector<string> holds_index_positions_for_number1;
     vector<string> holds_index_positions_for_number2;
     vector<string> holds_index_positions_for_number3;
     vector<string> holds_index_positions_for_number4;
     vector<string> holds_index_positions_for_number5;
     vector<string> holds_index_positions_for_number6;
     vector<string> holds_index_positions_for_number7;
     vector<string> holds_index_positions_for_number8;
     vector<string> holds_index_positions_for_number9;
     vector<string> holds_index_positions_for_number10;
     vector<string> holds_index_positions_for_number11;
     vector<string> holds_index_positions_for_number12;
     vector<string> holds_index_positions_for_number13;
     vector<string> holds_index_positions_for_number14;
     vector<string> holds_index_positions_for_number15;
     vector<string> holds_index_positions_for_number16;
     vector<string> holds_index_positions_for_number17;
     vector<string> holds_index_positions_for_number18;
     vector<string> holds_index_positions_for_number19;
     vector<string> holds_index_positions_for_number20;
     vector<string> holds_index_positions_for_number21;
     vector<string> holds_index_positions_for_number22;
     vector<string> holds_index_positions_for_number23;
     vector<string> holds_index_positions_for_number24;
     vector<string> holds_index_positions_for_number25;
     vector<string> holds_index_positions_for_number26;
     vector<string> holds_index_positions_for_number27;
     vector<string> holds_index_positions_for_number28;
     vector<string> holds_index_positions_for_number29;
     vector<string> holds_index_positions_for_number30;
     vector<string> holds_index_positions_for_number31;
     vector<string> holds_index_positions_for_number32;
     vector<string> holds_index_positions_for_number33;
     vector<string> holds_index_positions_for_number34;
     vector<string> holds_index_positions_for_number35;
     vector<string> holds_index_positions_for_number36;
     vector<string> holds_index_positions_for_number37;
     vector<string> holds_index_positions_for_number38;
     vector<string> holds_index_positions_for_number39;
     vector<string> holds_index_positions_for_number40;
     vector<string> holds_index_positions_for_number41;
     vector<string> holds_index_positions_for_number42;
     vector<string> holds_index_positions_for_number43;
     vector<string> holds_index_positions_for_number44;
     vector<string> holds_index_positions_for_number45;
     vector<string> holds_index_positions_for_number46;
     vector<string> holds_index_positions_for_number47;
     vector<string> holds_index_positions_for_number48;
     vector<string> holds_index_positions_for_number49;
     vector<string> holds_index_positions_for_number50;
     vector<string> holds_index_positions_for_number51;
     vector<string> holds_index_positions_for_number52;
     vector<string> holds_index_positions_for_number53;
     vector<string> holds_index_positions_for_number54;
     vector<string> holds_index_positions_for_number55;
     vector<string> holds_index_positions_for_number56;
     vector<string> holds_index_positions_for_number57;
     vector<string> holds_index_positions_for_number58;
     vector<string> holds_index_positions_for_number59;
     vector<string> holds_index_positions_for_number60;
     vector<string> holds_index_positions_for_number61;
     vector<string> holds_index_positions_for_number62;
     vector<string> holds_index_positions_for_number63;
     vector<string> holds_index_positions_for_number64;
     vector<string> holds_index_positions_for_number65;
     vector<string> holds_index_positions_for_number66;
     vector<string> holds_index_positions_for_number67;
     vector<string> holds_index_positions_for_number68;
     vector<string> holds_index_positions_for_number69;
     vector<string> holds_index_positions_for_number70;
     vector<string> holds_index_positions_for_number71;
     vector<string> holds_index_positions_for_number72;
     vector<string> holds_index_positions_for_number73;
     vector<string> holds_index_positions_for_number74;
     vector<string> holds_index_positions_for_number75;
     vector<string> holds_index_positions_for_number76;
     vector<string> holds_index_positions_for_number77;
     vector<string> holds_index_positions_for_number78;
     vector<string> holds_index_positions_for_number79;
     vector<string> holds_index_positions_for_number80;
     vector<string> holds_index_positions_for_number81;
     vector<string> holds_index_positions_for_number82;
     vector<string> holds_index_positions_for_number83;
     vector<string> holds_index_positions_for_number84;
     vector<string> holds_index_positions_for_number85;
     vector<string> holds_index_positions_for_number86;
     vector<string> holds_index_positions_for_number87;
     vector<string> holds_index_positions_for_number88;
     vector<string> holds_index_positions_for_number89;
     vector<string> holds_index_positions_for_number90;
     vector<string> holds_index_positions_for_number91;
     vector<string> holds_index_positions_for_number92;
     vector<string> holds_index_positions_for_number93;
     vector<string> holds_index_positions_for_number94;
     vector<string> holds_index_positions_for_number95;
     vector<string> holds_index_positions_for_number96;
     vector<string> holds_index_positions_for_number97;
     vector<string> holds_index_positions_for_number98;
     vector<string> holds_index_positions_for_number99;
     vector<string> holds_index_positions_for_number100;
     vector<string> holds_index_positions_for_number101;
     vector<string> holds_index_positions_for_number102;
     vector<string> holds_index_positions_for_number103;
     vector<string> holds_index_positions_for_number104;
     vector<string> holds_index_positions_for_number105;


    /* Next, We Will Loop Through The Cipher Vector, Recording Indexes Where Numbers Occurred

     for(int i=0; i < 106 ; i++){

     holds_index_positions_for_number[i].pushback(i)
     }
    */

    // These Vectors Are The Second Set of Vectors That Will Hold The
    // Potential Letters That Are Mapped To That Number.

    vector<string> possible_letters_for_number1 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number2 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number3 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number4 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number5 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number6 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number7 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number8 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number9 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number10 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number11 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number12 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number13 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number14 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number15 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number16 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number17 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number18 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number19 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number20 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number21 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number22 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number23 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number24 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number25 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number26 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number27 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number28 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number29 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number30 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number31 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number32 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number33 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number34 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number35 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number36 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number37 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number38 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number39 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number40 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number41 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number42 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number43 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number44 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number45 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number46 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number47 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number48 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number49 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number50 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number51 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number52 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number53 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number54 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number55 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number56 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number57 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number58 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number59 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number60 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number61 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number62 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number63 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number64 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number65 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number66 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number67 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number68 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number69 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number70 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number71 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number72 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number73 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number74 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number75 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number76 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number77 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number78 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number79 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number80 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number81 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number82 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number83 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number84 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number85 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number86 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number87 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number88 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number89 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number90 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number91 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number92 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number93 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number94 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number95 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number96 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number97 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number98 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number99 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number100 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number101 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number102 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number103 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number104 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};
    vector<string> possible_letters_for_number105 = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};


    /* Start looping through all the vectors, starting @ 0. We are comparing the left value to the right value)
     * The only issue I can see, is that holdindexpositions will never have 106 entries.. it's going to error.
     * But we need the counter!
     * We are also going to have to nest for loops here... As what I have written below doesn't work.

    for(int i=0; i < 106 ; i++){

     holds_index_positions_for_number[i] mod 19 = compare19_1
     holds_index_positions_for_number[i] mod 10 = compare10_1
     holds_index_positions_for_number[i] mod 7 = compare7_1
     holds_index_positions_for_number[i] mod 6 = compare6_1
     holds_index_positions_for_number[i] mod 5 = compare5_1
     holds_index_positions_for_number[i] mod 4 = compare4_1
     holds_index_positions_for_number[i] mod 3 = compare3_1
     holds_index_positions_for_number[i] mod 2 = compare2_1
     holds_index_positions_for_number[i] mod 1 = compare1_1

     holds_index_positions_for_number[i+1] mod 19 = compare19_2
     holds_index_positions_for_number[i+1] mod 10 = compare10_2
     holds_index_positions_for_number[i+1] mod 7 = compare7_2
     holds_index_positions_for_number[i+1] mod 6 = compare6_2
     holds_index_positions_for_number[i+1] mod 5 = compare5_2
     holds_index_positions_for_number[i+1] mod 4 = compare4_2
     holds_index_positions_for_number[i+1] mod 3 = compare3_2
     holds_index_positions_for_number[i+1] mod 2 = compare2_2
     holds_index_positions_for_number[i+1] mod 1 = compare1_2

     if compare19_1 != compare19_2
        remove " " from possible_letters_for_number[i]

     if compare10_1 != compare10_2
        remove "e" from possible_letters_for_number[i]

     if compare7_1 != compare7_2
        remove "a", "t" from possible_letters_for_number[i]

     if compare6_1 != compare6_2
        remove "i", "n", "o" from possible_letters_for_number[i]

     if compare5_1 != compare5_2
        remove "h", "r", "s" from possible_letters_for_number[i]

     if compare4_1 != compare4_2
        remove "d" from possible_letters_for_number[i]

     if compare3_1 != compare3_2
        remove "l" from possible_letters_for_number[i]

     if compare2_1 != compare2_2
        remove "c", "f", "g", "m", "p", "u", "w", y" from possible_letters_for_number[i]

     if compare1_1 != compare1_2
        remove "b", "j", "k", "q", "v", "x", "z" from possible_letters_for_number[i]
  }
 */

    /* Because The First Word Can't Start With A Space, Remove Space From The First Number's "possible_letters_for_number" vector
    pos1isnotaspace =  find(possible_letters_for_number[cipher[0]].begin(), possible_letters_for_number[cipher[0]].end(), " ");
    possible_letters_for_number[cipher[0]].erase(pos1isnotaspace)

     Where cipher[0] = the first number that was entered...this is not a <space> for sure.
     */

    // Now That We Have All Of That, We Need To Start Brute Forcing!



}