// // Merge sorted array without extra space

// TC : O(min(m,n))+O(n log n)+O(m log m)
// SC : O(1)

//  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int left = m-1 , right =0 ;

//         while(left >=0 && right < n ){
//             if(nums1[left] > nums2[right]){
//                 swap(nums1[left] , nums2[right]);
//                 left--,right++;
//             }
//             else{
//                 break;
//             }
//         }
//         sort(nums1.begin(),nums1.end());
//         sort(nums2.begin(),nums2.end());
//     }
//  // Optimal approach (based on shell sort)
// TC : O(log(m+n) )x O(n+m)
// SC: O(1)

//    void swapGreater (vector<int>& nums1, int index1, vector<int>& nums2, int index2){
//         if(nums1[index1]>nums2[index2]){
//             swap(nums1[index1],nums2[index2]);
//         }
//     }

//         int len = (n+m);
//         int gap = len/2 + (len%2);

//         while(gap>0){
//             int left = 0;
//             int right = left + gap;

//             while(right < len){
//                 // left is in arr 1 and right is in arr2
//                 if(left <n && right>=n){
//                     swapGreater(nums1,left,nums2,right-n);
//                 }
//                 // both are in arr2
//                 else if(left>=n){
//                     swapGreater(nums2,left-n,nums2,right-n);
//                 }
//                 // both are in arr1
//                 else{
//                     swapGreater(nums1,left,nums1,right);
//                 }

//                 left++,right++;
//             }
//             if(gap==1) break;
//             gap =(gap/2)+(gap%2);
//         }
//     }

// =============== Leetcode Question ======================================

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         for(int i=0; i<n; i++){
//             nums1[m+i] = nums2[i];
//         }
//         sort(nums1.begin(), nums1.end());
//     }
// };
