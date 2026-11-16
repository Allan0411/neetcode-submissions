class Solution {
public:
    bool isAnagram(string s, string t) {
       int m=s.length(),n=t.length();

       if (m!=n)
        return false;

        int i=0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        while(i<n){

            if(s[i]==t[i])
                i++;
            else
                return false;
        } 

        return true;
    }
};
