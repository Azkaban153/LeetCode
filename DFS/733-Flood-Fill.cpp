class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]!=newColor){
			int floodFillColor = image[sr][sc];
			_floodFill(image,sr,sc,floodFillColor,newColor);
        }
        return image;
    }

private:
	void _floodFill(vector<vector<int>> &image, int sr, int sc, int floodFillColor, int newColor){

		cout << "Index being accessed : Row " << sr << " Column " << sc << endl;

		if(sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != floodFillColor ){
			return;
		}

		image[sr][sc] = newColor;

		_floodFill(image,sr+1,sc,floodFillColor,newColor);
		_floodFill(image,sr-1,sc,floodFillColor,newColor);
		_floodFill(image,sr,sc+1,floodFillColor,newColor);
		_floodFill(image,sr,sc-1,floodFillColor,newColor);

	}
};