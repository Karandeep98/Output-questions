#include <bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{

 vector<int> nums{7,3,2};
 int index=-1;
        int size=nums.size();
        for(int i=size-1;i>0;i--){
            if(nums[i]>nums[i-1]){
               swap(nums[i],nums[i-1]);
                index=i;
                break;
            }
        }
        /*int minindex=index+1;
        for(int i=index+2;i<size;i++){
            if(nums[i]<nums[minindex] && nums[i]>nums[index]){
                minindex=i;
            }
        }
        swap(nums[index],nums[minindex]);*/
        if(index==-1)
            sort(nums.begin(),nums.end());
        else sort(nums.begin()+index,nums.end());
       for(int a:nums)cout<<a<<" ";
    return 0;
}
