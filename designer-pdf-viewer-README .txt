<From HackerRank>

When you select a contiguous block of text in a PDF viewer, the
selection is highlighted with a blue rectangle. In a new kind of PDF
viewer, the selection of each word is independent of the other words;
this means that each rectangular selection area forms independently
around each highlighted word. For example:

PDF-highighting.png

In this type of PDF viewer, the /width/ of the rectangular selection
area is equal to the number of letters in the word times the width of a
letter, and the /height/ is the maximum height of any letter in the word.

Consider a word consisting of lowercase English alphabetic letters,
where each letter is wide. Given the height of each letter in
millimeters (), find the total area that will be highlighted by blue
rectangle in when the given word is selected in our new PDF viewer.

In this type of PDF viewer, the width of the rectangular selection area is equal to the number of letters in the word times the width of a letter, and the height is the maximum height of any letter in the word.

Consider a word consisting of lowercase English alphabetic letters, where each letter is 1mm wide. Given the height of each letter in millimeters (mm), find the total area that will be highlighted by blue rectangle in mm^2 when the given word is selected in our new PDF viewer.

*Input Format*

The first line contains space-separated integers describing the
respective heights of each consecutive lowercase English letter (i.e., ha, hb, hc, ..., hy, hz).
The second line contains a single word, consisting of lowercase English
alphabetic letters.

*Constraints*

  * 1 <= h? <= 7, where ? is an English lowercase letter.
  * Word contains no more than 10 letters.

*Output Format*

Print a single integer denoting the area of highlighted rectangle when
the given word is selected. The unit of measurement for this is square
millimeters (mm^2), but you must only print the integer.

*Sample Input*

|1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
abc|

*Sample Output*

|9|

*Explanation*

We are highlighting the word |abc|:

 1. The tallest letter in |abc| is |b|, and hb = 3. The selection area for
    this word is 3 * 1mm * 3mm = 9mm^2.

*Note:* Recall that the width of each character is 1mm.

//

//

//

Submissions: 13378
<https://www.hackerrank.com/challenges/designer-pdf-viewer/leaderboard>

Max Score:

20

Difficulty:

Easy

Rate This Challenge:

// // // // // Thanks!

How can we improve?

Let us know
//Download problem statement
<https://www.hackerrank.com/rest/contests/master/challenges/designer-pdf-viewer/download_pdf?language=English>

// Download sample test cases
<https://www.hackerrank.com/rest/contests/master/challenges/designer-pdf-viewer/download_testcases>

//Suggest Edits <#>
Suggestion Sent!

Thanks for helping us refine this problem statement. Please address your
suggestions below.

Submit Suggestion

Cancel

Set as default <#>

You can always change back later.

More

//
Fork
/

/

past buffers are marked read only, you wont be able to edit your current
buffer without forking it

Fork    Create New Buffer
Fork Limit Reached

You can’t create more than 20 buffers, please delete one of your old
bufferes to create a new buffer.

OK  
Delete

Are you sure you want to delete **? This action can’t be undone.

Yes  

*Current Buffer* (saved locally, editable)    // // //

// // //
Editor Mode

Emacs

Normal

Vim

Editor Theme

Light

Dark

Tab Spaces

2 spaces

4 spaces

8 spaces

Intellisense

Enable

Disable

C++14
**

<javascript:void(0)>

Loading Editor...
char

x

 
1

#include <cmath>

2

#include <cstdio>

3

#include <vector>

4

#include <iostream>

5

#include <algorithm>

6

#include <map>

7

using namespace std;

8

​

9

#define ENGLISH_LETTERS 26

10

#define LETTER_WIDTH 1 //Width of a word is 1mm

11

​

12

int main() {

13

    char letters[ENGLISH_LETTERS] = {'a', 'b', 'c', 'd', 'e', 'f', 

14

                                     'g', 'h', 'i', 'j', 'k', 'l',

15

                                     'm', 'n', 'o', 'p', 'q', 'r', 

16

                                     's', 't', 'u', 'v', 'w', 'x', 

17

                                     'y', 'z'};

18

    map<char, int> heights;

19

    int height = 0;

20

    int maxHeight = 0;

21

    string word = "";

22

    int charCount = 0;

23

    int result = 0;

24

    

25

    for(int i = 0; i < ENGLISH_LETTERS; i++){

26

        cin >> height;

27

        heights.insert(pair<char, int>(letters[i], height));

28

    }

29

    

30

    cin >> word;

31

    

32

    for(auto c: word){

33

        char ch = c;

34

        int h = heights.find(ch)->second;

35

        

36

        if(h > maxHeight)

37

            maxHeight = h;

38

        

39

        charCount++;

40

    }

41

    

42

    result = charCount * LETTER_WIDTH * maxHeight;

43

    

44

    cout << result;

45

    

46

    return 0;

47

}

48

​

Line: 42 Col: 18
Run Code Submit Code
//Upload Code as File
Test against custom input


Congrats, you solved this challenge!
//
Test Case #0
Sample
Success
Download//
//
Test Case #1
Success
Download//
//
Test Case #2
Success
Download//
//
Test Case #3
Success
Download//
//
Test Case #4
Success
Download//
//
Test Case #5
Success
Download//
Next Challenge

<https://www.hackerrank.com/challenges/apple-and-orange?h_r=next-challenge&h_v=zen>
You've earned 20.00 points!

Copyright © 2017 HackerRank. All Rights Reserved

Join us on IRC at #hackerrank
<http://webchat.freenode.net/?channels=hackerrank> on freenode for hugs
or bugs.

Contest Calendar
<https://www.hackerrank.com/calendar?utm_source=website&utm_medium=footer&utm_campaign=website>
| Interview Prep
<https://www.hackerrank.com/domains/tutorials/cracking-the-coding-interview?utm_source=website&utm_medium=footer&utm_campaign=website>
| Blog <https://blog.hackerrank.com/> | Scoring
<https://www.hackerrank.com/scoring> | Environment
<https://www.hackerrank.com/environment> | FAQ
<https://www.hackerrank.com/faq> | About Us
<https://www.hackerrank.com/aboutus> | Support
<https://www.hackerrank.com/support> | Careers
<https://www.hackerrank.com/careers> | Terms Of Service
<https://www.hackerrank.com/terms-of-service> | Privacy Policy
<https://www.hackerrank.com/privacy> | Request a Feature
<https://www.hackerrank.com/support/feature>

 1.


              Challenge Walkthrough

    Let's walk through this sample challenge and explore the features of
    the code editor.1 of 6
 2.


              Review the problem statement

    Each challenge has a problem statement that includes sample inputs
    and outputs. Some challenges include additional information to help
    you out.2 of 6
 3.


              Choose a language

    Select the language you wish to use to solve this challenge.3 of 6
 4.


              Enter your code

    Code your solution in our custom editor or code in your own
    environment and upload your solution as a file.4 of 6
 5.


              Test your code

    You can compile your code and test it for errors and accuracy before
    submitting.5 of 6
 6.


              Submit to see results

    When you're ready, submit your solution! Remember, you can go back
    and refine your code anytime.6 of 6

 1. Check your score

