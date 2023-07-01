class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0)
            return;
        else if(m==0)
        {
            nums1=nums2;
            return;
        }
        else
        {
            int i=0,j=0,k=m+n;
            vector <int> res;
            while((i<m)&&(j<n))
            {
                if(nums1[i]<nums2[j])
                {
                    res.push_back(nums1[i]);
                    i++;
                }
                else if(nums1[i]==nums2[j])
                {
                    res.push_back(nums1[i]);
                    res.push_back(nums2[j]);
                    i++;
                    j++;
                }
                else
                {
                    res.push_back(nums2[j]);
                    j++;
                }
            }
            while(i<m)
            {
                res.push_back(nums1[i]);
                i++;
            }
            while(j<n)
            {
                res.push_back(nums2[j]);
                j++;
            }
            nums1=res;
        }
    }
};
