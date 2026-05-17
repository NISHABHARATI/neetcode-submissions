class Solution {
public:
bool solve(string valid){
    int i=0,j=valid.length()-1;
    while(i<j){
        if(valid[i]!=valid[j])return false;
        i++;j--;
    }
    return true;
}
    bool isPalindrome(string s) {
        string valid = "";
        int n = s.length();
        for(int i=0;i<n;i++){
          if(isalnum(s[i])){
            valid += tolower(s[i]);
        }
        }
        return solve(valid);
    }
};
