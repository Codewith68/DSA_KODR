//LEETCODE 56

// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

 

// Example 1:

// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
// Example 2:

// Input: intervals = [[1,4],[4,5]]
// Output: [[1,5]]
// Explanation: Intervals [1,4] and [4,5] are considered overlapping.
// Example 3:
// Input: intervals = [[4,7],[1,4]]
// Output: [[1,7]]
// Explanation: Intervals [1,4] and [4,7] are considered overlapping.

//code 
class Solution {
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            //Step 1 : sort in ascending order
            sort(intervals.begin(), intervals.end()) ;
    
            vector<vector<int>> ans ; //to store all the ans vectors
    
            //iterate on the intervals
            for(int i=0 ; i<intervals.size() ; i++){
    
                //if ans vector is empty push current
                if(ans.empty()){
                    ans.push_back(intervals[i]) ;
                }
                else{
                    vector<int> &v = ans.back() ; //this is prev interval
                    //e.g. v = [1,5] so v[0] = 1, v[1] = ending of prev
                    int y = v[1] ; //stores the ending of prev
                    
                    //check if current interval overlaps with prev
                    if(intervals[i][0] <= v[1]){
                        v[1] = max(intervals[i][1] , y) ;
                        //ending of prev interval will change to max of current, prev
                    }
                    else{ //if no overlap then simply add in ans 
                        ans.push_back(intervals[i]) ; //push current
                    }
                }
            }
    
            return ans ; //very important to return the ans vector
        }
    };
