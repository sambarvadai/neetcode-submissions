class Solution {
public:
    vector<string> letterCombination;
    vector<string> letterCombinations(string digits) {
        map<char,string> myMap = {{'2',"abc"},{'3',"def"},{'4',"ghi"},
                                 {'5',"jkl"}, {'6',"mno"},{'7',"pqrs"},
                                {'8',"tuv"},{'9',"wxyz"}};
        if(digits.empty()) return {};
        string combination;
        backTracker(digits,myMap,combination,0);
        return letterCombination;        
    }
    void backTracker(string digits,map<char,string>& myMap,string& combination, int idx)
    {
        if(idx == digits.size())
        {
            letterCombination.push_back(combination);
            return;
        }
        string myString = myMap[digits[idx]];
        for(int i=0;i<myString.length();i++)
        {
            combination.push_back(myString[i]);
            backTracker(digits,myMap,combination,idx+1);
            combination.pop_back();
        }

    }
    
};
