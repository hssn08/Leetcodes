class Solution {
public:
void flood(vector<vector<int>>& image, int sr, int sc, int color, int og){
    if(sr<0||sr>=image.size()||sc<0||sc>=image[0].size()||image[sr][sc]==color||image[sr][sc]!=og){
        return;
    }
 
        image[sr][sc]=color;
    
    flood(image, sr, sc-1, color, og);
    flood(image, sr, sc+1, color, og);
    flood(image, sr-1, sc, color, og);
    flood(image, sr+1, sc, color, og);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
             if(image[sr][sc]==color){
            return image;
        }
        int og=image[sr][sc];
        flood(image, sr, sc, color, og);
        return image;
    }
};