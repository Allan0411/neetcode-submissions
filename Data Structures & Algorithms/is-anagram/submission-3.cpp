class Solution {
public:
    bool isAnagram(string s, string t) {
     int m=s.length(),n=t.length();
     if(m!=n)
        return false;
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    int i=0;
    while(i<n){
        if(s[i]==t[i])
            i++;
        else
            return false;
    }
     return true;   
    }
};
