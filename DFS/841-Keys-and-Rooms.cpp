class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        vector<bool> vis(rooms.size(),false);
        vis[0] = true;
        _canVisitAllRooms(rooms,vis,rooms[0]);

        for(auto x : vis){
        	if(!x){
        		return false;
        	}
        }

        return true;
    }

private:
	void _canVisitAllRooms(vector<vector<int>> &rooms, vector<bool> &vis, vector<int> indices){

		for(auto index : indices){
			if(!vis[index]){
				vis[index] = true;
				_canVisitAllRooms(rooms,vis,rooms[index]);
			}
		}

	}
};