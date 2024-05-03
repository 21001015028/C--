class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        
        sort(intervals.begin(),intervals.end(),[](const vector<int>&a,const vector<int>&b )
                {return a[0]<b[0];
                });
        vector<vector<int>>ans;
        vector<int>temp=intervals[0];
         int i=1;
         if(intervals.size()==1){
             ans.push_back(temp);
         }

        while(i<intervals.size()){
            
            if(temp[1]>=intervals[i][0]){
                //conflict
                temp[1]=max(temp[1],intervals[i][1]);
                ans.push_back(temp);
            }
            else{
                //non conflict
                
                temp=intervals[i];
                ans.push_back(temp);
            }
         }
         ans.push_back(temp);
    return ans;
    }
};