class Solution {
public:
    int maxArea(vector<int>& heights) {
        int lt=0;
        int rt=heights.size()-1;
        int h=0;
        int w=0;
        int area=0;
        while(lt<rt){
            h=min(heights[lt],heights[rt]);
            w=rt-lt;
            area=max(area,h*w);
            heights[lt]<heights[rt]?lt++:rt--;
        }
        return area;
    }
};
