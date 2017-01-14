#include <iostream>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

#define ENGLISH_LETTERS 26

int main()
{
    char letters[ENGLISH_LETTERS] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
                                      'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    map<char, int> heights;
    int height = 0;
    int maxHeight = 0;
    string word = "";

    for(int i = 0; i < ENGLISH_LETTERS; i++){
        cin >> height;
        heights.insert(pair<char, int>(letters[i], height));
    }

    for(auto set: heights){
        cout << "Set: " << set.first << " " << set.second << endl;
    }
    return 0;
}
