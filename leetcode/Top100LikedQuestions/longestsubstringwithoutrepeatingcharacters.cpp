// this solution further optimised by using O(2n) to O(n) as end pointer is incremneting one by one it can directly be jumped 
//  https://www.youtube.com/watch?v=qtVh-XEpsJo&t=876s


class Solution {
public:

// brut force tecbique to solve 
//  to create all the possible subsets for the given string and then return the max length 
// complexity O(n^2)
// better way for solving 
// using two pointers along with a set and max variable :) 
    
    
    int lengthOfLongestSubstring(string s) {
        set<char> Set;
        int max=0;
        int start=0;
        int end=0;
        while (start<s.size())
        {
            // iterator to check for the elements in the set or not 
            // this line find the current element 
            auto it= Set.find (s[start]); 

            // if the current element found is a unique element to the set then---
            if (it==Set.end())
            {
                // max checker updating with current length 
                if ((start-end+1)>max)
                {
                    max= start-end+1;
                }
                Set.insert(s[start]);
                start++;
                
            }
            else 
            {
                // when the character is not similar is not unique then it has to be removed and the end pointer shall work for it 
                Set.erase(s[end]);
                end++;
            }
        }
        return max;
    }
};

// DATA SET REPRESENTATION 
// step=3
//  abcabcbb 
// max=3 
// start=2
// end=0
// step=4
// string is abca  "a" will be poped from the set ---- a new set (bca) formed
//  this shall cotinue 


//  each time a repetion is found it shall enter else part and start to pop elements from the front of the set untill it becomes a unique one. 