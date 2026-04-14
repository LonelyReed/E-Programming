#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    bool judge = 1;
    int char_arr[26] = { 0 };  
    int number_arr[100] = { 0 }; 

    for (char word : str)
    {
        char_arr[word - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (char_arr[i] > 0) {
            number_arr[char_arr[i]]++;
        }
    }

    for (int i = 1; i <= str.length(); i++) 
    {
        if (number_arr[i] != 0 && number_arr[i] != 2) 
        {
            judge = 0;
            break;  
    }

    if (judge)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}


