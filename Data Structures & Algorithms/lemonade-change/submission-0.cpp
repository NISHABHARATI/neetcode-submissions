class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count5 =0,count10=0;
        for(auto &it : bills){
            int rem = it-5;
            if(rem ==0){
                count5++;
                continue;
            }
            else if(rem == 5){
                count10++;
                if(count5>0)
                count5--;
                else
                return false;
            }
            else if(rem == 15){
                if(count5>=3){
                    count5 = count5-3;
                }
                else if(count10 >=1 && count5 >=1){
                    count10--;count5--;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};