class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, lh = 0, rh = 0;
        int r = height.size()-1;
        int water = 0;

        while(l<r){
            if(height[l]<height[r]){
                if(lh<height[l]){
                    lh = height[l];
                }
                else{
                    water += lh - height[l];
                }
                l++;
            }
            else{
                if(rh<height[r]){
                    rh = height[r];
                }
                else{
                    water += rh - height[r];
                }
                r--;
            }
        }
        return water;
    }
};
