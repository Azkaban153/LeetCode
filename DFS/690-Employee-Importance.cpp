/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
	int total_importance = 0;
	unordered_map<int,Employee*> mapp;
    int getImportance(vector<Employee*> employees, int id) {

        for(auto employee : employees){
        	mapp[employee->id] = employee;
        }

        _getImportance(id);

        return total_importance;
    }

private:
	void _getImportance(int id){

		if(mapp[id]){
			total_importance += mapp[id]->importance;

			for(auto subordinate : mapp[id]->subordinates){
				_getImportance(subordinate);
			}
		}
	}
};