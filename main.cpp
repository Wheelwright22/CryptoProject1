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
     * What if one vector has 4 while the other vector has 4

    for(int i=0; i < 106 ; i++){

        for(int j=0; j < holds_index_positions_for_number..i.size() ; j++){

     holds_index_positions_for_number..i[j] mod 19 = compare19_1
     holds_index_positions_for_number..i[j] mod 10 = compare10_1
     holds_index_positions_for_number..i[j] mod 7 = compare7_1
     holds_index_positions_for_number..i[j] mod 6 = compare6_1
     holds_index_positions_for_number..i[j] mod 5 = compare5_1
     holds_index_positions_for_number..i[j] mod 4 = compare4_1
     holds_index_positions_for_number..i[j] mod 3 = compare3_1
     holds_index_positions_for_number..i[j] mod 2 = compare2_1
     holds_index_positions_for_number..i[j] mod 1 = compare1_1

     holds_index_positions_for_number..i+1[j] mod 19 = compare19_2
     holds_index_positions_for_number..i+1[j] mod 10 = compare10_2
     holds_index_positions_for_number..i+1[j] mod 7 = compare7_2
     holds_index_positions_for_number..i+1[j] mod 6 = compare6_2
     holds_index_positions_for_number..i+1[j] mod 5 = compare5_2
     holds_index_positions_for_number..i+1[j] mod 4 = compare4_2
     holds_index_positions_for_number..i+1[j] mod 3 = compare3_2
     holds_index_positions_for_number..i+1[j] mod 2 = compare2_2
     holds_index_positions_for_number..i+1[j] mod 1 = compare1_2

     if compare19_1 != compare19_2 {
        space =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), " ");
        possible_letters_for_number..i.erase(space)
        }

     if compare10_1 != compare10_2 {
        e =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "e");
        possible_letters_for_number..i.erase(e)
        }

     if compare7_1 != compare7_2 {
        a =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "a");
        possible_letters_for_number..i.erase(a)

        t =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "t");
        possible_letters_for_number..i.erase(t)
        }

     if compare6_1 != compare6_2 {
        i =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "i");
        possible_letters_for_number..i.erase(i)

        n =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "n");
        possible_letters_for_number..i.erase(n)

        o =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "o");
        possible_letters_for_number..i.erase(o)
        }

     if compare5_1 != compare5_2{
        h =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "h");
        possible_letters_for_number..i.erase(h)

        r =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "r");
        possible_letters_for_number..i.erase(r)

        s =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "s");
        possible_letters_for_number..i.erase(s)
        }

     if compare4_1 != compare4_2 {
        d =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "d");
        possible_letters_for_number..i.erase(d)
        }

     if compare3_1 != compare3_2 {
        l =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "l");
        possible_letters_for_number..i.erase(l)
        }

     if compare2_1 != compare2_2 {
        c =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "c");
        possible_letters_for_number..i.erase(c)

        f =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "f");
        possible_letters_for_number..i.erase(f)

        g =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "g");
        possible_letters_for_number..i.erase(g)

        m =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "m");
        possible_letters_for_number..i.erase(m)

        p =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "p");
        possible_letters_for_number..i.erase(p)

        u =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "u");
        possible_letters_for_number..i.erase(u)

        w =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "w");
        possible_letters_for_number..i.erase(w)

        y =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "y");
        possible_letters_for_number..i.erase(y)
        }

     if compare1_1 != compare1_2 {
        b =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "b");
        possible_letters_for_number..i.erase(b)

        j =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "j");
        possible_letters_for_number..i.erase(j)

        k =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "k");
        possible_letters_for_number..i.erase(k)

        q =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "q");
        possible_letters_for_number..i.erase(q)

        v =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "v");
        possible_letters_for_number..i.erase(v)

        x =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "x");
        possible_letters_for_number..i.erase(x)

        z =  find(possible_letters_for_number..i.begin(), possible_letters_for_number..i.end(), "z");
        possible_letters_for_number..i.erase(z)
        }

  }
     }
 */

    /* Because The First Word Can't Start With A Space, Remove Space From The First Number's "possible_letters_for_number" vector
    pos1isnotaspace =  find(possible_letters_for_number[cipher[0]].begin(), possible_letters_for_number[cipher[0]].end(), " ");
    possible_letters_for_number[cipher[0]].erase(pos1isnotaspace)

     Where cipher[0] = the first number that was entered...this is not a <space> for sure.
     */

    // Now That We Have All Of That, We Need To Start Brute Forcing!


    ciphe


}