class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {        
        if(image[sr][sc] == color) {
            return image;
        }
        else{
            floodFillDFS(image,sr,sc,color,image[sr][sc]);
        }
        return image;
    }
    void floodFillDFS(vector<vector<int>>&image,int sr,int sc, int color,int temp){
        if(sr< 0 || sc < 0 || sr>=image.size() || sc>=image[0].size()) {
            return;
        }
        if(image[sr][sc] == color || image[sr][sc]!=temp) {
            return;
        }
        
        image[sr][sc] = color;
        floodFillDFS(image,sr+1,sc,color,temp);
        floodFillDFS(image,sr-1,sc,color,temp);
        floodFillDFS(image,sr,sc+1,color,temp);
        floodFillDFS(image,sr,sc-1,color,temp);
        
        
        
    }
};