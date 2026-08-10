class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n= arr.size();
        int chunks=0;
        int maxelement=0;

        for(int i=0;i<n;i++){
            maxelement=max(maxelement,arr[i]);

            if(maxelement==i){
                chunks++;
            }
        }
        return chunks;

        
    }
};