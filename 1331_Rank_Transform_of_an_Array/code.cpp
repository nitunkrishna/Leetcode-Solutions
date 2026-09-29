class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>v=arr;
        vector<int>res;
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        for(int i=0; i<arr.size(); i++)
        {
            int l=0, h=v.size()-1, in=-1;
            while(l<=h)
            {
                int mid=(l+h)/2;
                if(v[mid]==arr[i])
                {
                    in=mid;
                    break;
                }
                else if(v[mid]>arr[i]) h=mid-1;
                else l=mid+1;
            }
            res.push_back(in+1);
        }
        return res;
    }
};
