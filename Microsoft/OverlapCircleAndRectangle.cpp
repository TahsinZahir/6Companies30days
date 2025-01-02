class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int x=xCenter-max(x1,min(x2,xCenter));
        int y=yCenter-max(y1,min(y2,yCenter));
        x=abs(x);y=abs(y);
        return x*x+y*y<=radius*radius;
    }
};