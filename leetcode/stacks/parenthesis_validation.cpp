class Solution {
public:
    bool ismatching (char arr, char b)
    {
        return ((arr == '{' && b =='}')|| (arr == '[' && b == ']' ) || (arr == '(' && b == ')'));
    }

    bool isValid(string s) {
        stack <char> st;

        for (int i=0;i<s.length();i++)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            {
                st.push(s[i]);
            }
            else 
            {
                if(st.empty())
                {
                    return false;
                }
                if (ismatching (st.top(),s[i]))
                {
                    st.pop ();   
                } 
                else 
                {
                    return false;
                }
            }
        }
        if(st.empty ())
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};

