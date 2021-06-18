/* Ques- Finding the duplicate number in an array 
Approach - Here we are using the tortoise and hare algorithm to solve
          this problem with best time and space complexity that is O(N) and 
          O(1) respectively */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums{1,3,4,2,2}; 
    int n=nums.size();
    if(n>1)
    {
        int slow=nums[0];
        int fast=nums[nums[0]];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        fast=0;
        while(fast!=slow)
        {
            fast=nums[fast];
            slow=nums[slow];
        }
        cout<<"Repeating Number is "<<slow;
    }
    else
        cout<<"No repetition possible";
}