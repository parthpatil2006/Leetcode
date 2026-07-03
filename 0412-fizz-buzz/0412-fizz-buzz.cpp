class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        bool i3,i5;
        for(int i = 1; i<=n;i++){
            bool i3 = ( i % 3 == 0);
            bool i5 = ( i % 5 == 0);
            if(i3&&i5)
            result.push_back("FizzBuzz");
            else if(i3)
            result.push_back("Fizz");
            else if(i5)
            result.push_back("Buzz");
            else
            result.push_back(to_string(i));
        }
        return result;
    }
};