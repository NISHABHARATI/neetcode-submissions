class Solution {
public:
bool check(string input){
    int j = input.length()-1;
    int i =0;
    while(i<j){
        char ch1 = tolower(input[i]);
        char ch2 = tolower(input[j]);
        if(ch1 != ch2)return false;
        i++;j--;
    }
    return true;
}
    bool isPalindrome(string s) {
        string input = "";
        for(int i=0;i<s.length();i++){
            if((s[i]>='A'&& s[i]<= 'Z')||(s[i]>='a'&& s[i]<= 'z')||(s[i]>='0'&& s[i]<= '9'))
            input += s[i];
        }
        //  cout<<input<<endl;
        return check(input);
    }
};
