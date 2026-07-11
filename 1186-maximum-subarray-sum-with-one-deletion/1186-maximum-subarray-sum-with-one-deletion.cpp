class Solution {
public:
    int maximumSum(vector<int>& a) {
    int n = a.size();
    int nodelete = a[0];
    int onedelete = a[0];
    int res = a[0];

    for(int i = 1; i < n; i++){
        int prevnodelete = nodelete;
        int prevonedelete = onedelete;

        nodelete = max(nodelete + a[i], a[i]);

        onedelete = max(prevonedelete + a[i], prevnodelete);
        
        res = max(res, max(nodelete, onedelete));
    }
    return res;

    }
};