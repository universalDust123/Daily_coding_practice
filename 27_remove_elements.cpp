class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int counter=0;
       for(int x=0; x<nums.size(); x++)
       {
            if(nums[x] == val)
            {
               nums.erase(nums.begin()+x);
               x--; //reset loc 
            }
               
            else
                counter++;
       }
        
      
    return counter;
    }
};
