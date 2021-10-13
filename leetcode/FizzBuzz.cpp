//
// Created by will on 2021/10/13.
//
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> list;
        for (int i = 0;i < n;i++){
            string temp = "";
            if(i % 3 ==0){
                temp+="Fizz";
            }
            if(i % 5 ==0){
                temp+="Buzz";
            }
            if(temp.size() == 0){
                temp += i
            }
            list.emplace_back(temp);
        }
        return list;
    }
};
