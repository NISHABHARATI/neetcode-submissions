class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>cars;
        int cnt = 0;
        double lasttime=0;
        for(int i=0;i<position.size();i++){
            cars.push_back({position[i],speed[i]});
        }
        sort(cars.begin(), cars.end(), greater<>());//desc order
       for(auto &it: cars){
         double compute = (double)(target-it.first)/it.second;
            if(compute > lasttime){
                lasttime = compute;
                cnt++;
            }
        }
        return cnt;
    }
};
