#include <iostream>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

#define ENGLISH_LETTERS 26
#define LETTER_WIDTH 1 //Width of a word is 1mm

int main()
{
    char letters[ENGLISH_LETTERS] = {'a', 'b', 'c', 'd', 'e', 'f',
                                     'g', 'h', 'i', 'j', 'k', 'l',
                                     'm', 'n', 'o', 'p', 'q', 'r',
                                     's', 't', 'u', 'v', 'w', 'x',
                                     'y', 'z'};
    map<char, int> heights;
    int height = 0;
    int maxHeight = 0;
    string word = "";
    int wordCount = 0;
    int result = 0;

    for(int i = 0; i < ENGLISH_LETTERS; i++){
        cin >> height;
        heights.insert(pair<char, int>(letters[i], height));
    }

    cin >> word;

    for(auto c: word){
        char ch = c;
        int h = heights.find(ch)->second;

        if(h > maxHeight)
            maxHeight = h;

        wordCount++;
    }

    result = wordCount * LETTER_WIDTH * maxHeight;

    cout << result;

    return 0;
}
