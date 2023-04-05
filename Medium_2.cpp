//Iterate thorough array. Count number of times element appears in array
//Iterate hashmap and note keys(elements) whose value>size/3
//Complexity
//Time: O(n)
//Space: O(n)
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<int> FindInteger(vector<int>&nums)
    {
        int n=nums.size();    //size
        int a=n/3;
        unordered_map<int,int>frq;  // for storing frequencies
        vector<int>ans;  //for storing numbers whcih having count more than n/3 times
        for(auto i:nums) //traverse in nums and count every element freq. and store it in frq
        {
            frq[i]++;
        }
        for(auto x:frq)  // traverse in frq and check if element have frq more than n/3 or not
        {
            if(x.second>a)    //when frq>n/3 then push in into ans
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int>nums;  //given number array
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            nums.push_back(a);
        }
        Solution ob;
        vector<int>res;
        res=ob.FindInteger(nums);
        for(auto i:res)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
