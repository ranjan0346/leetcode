class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int overlap=0;
        int left= max(bx1, ax1);
        int right= min(bx2, ax2);
        int top= min(ay2, by2);
        int bottom=max(by1, ay1);
        int height=top-bottom;
        int length= right-left;
        
        if(height>0 && length>0){
            overlap=height*length;
        }
        // if(bx1<ax2 && bx1>ax1 && by1>ay1 && by1<by2){
        //      vector<int> x={ax1, ax2, bx1, bx2};
        //     vector<int> y={ay1, ay2, by1, by2};
        //     sort(x.begin(), x.end());
        //     sort(y.begin(), y.end());
        //     overlap= (abs(x[1]-x[2])) * (abs(y[1]-y[2]));
        //     overlap= 
        // }
        return (abs(ax2-ax1))*(abs(ay2-ay1)) + (abs(bx2-bx1))*(abs(by2-by1))- overlap;
         
    }
};