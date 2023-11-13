class Solution {
public:
    string sortVowels(string s) {
    string vowels = "aeiouAEIOU";
    string vowelMap = "";

    for (char c : s) {
        if (vowels.find(c) != string::npos) {
            vowelMap += c;
        }
    }

    sort(vowelMap.begin(), vowelMap.end());

    int vowelIndex = 0;

    for(auto&c:s){
        if (vowels.find(c) != string::npos) {
            c=vowelMap[vowelIndex];
            vowelIndex++;
        }
    }

    return s;
    }
};
