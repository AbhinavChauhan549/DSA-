// // Find the duplicate in an array of N+1 integers
// // Brute force approach
//         // TC : O(N log N)
//         // SC : O(1)

//         // int result;
//         // sort(nums.begin(),nums.end());
//         // for(int i =0 ; i<nums.size()-1;i++){
//         //     if(nums[i]==nums[i+1]){
//         //         result=nums[i+1];
//         //     }
//         // }

//         // return result;

//         // better approach by using hash map
//         // TC : O(N)
//         // SC : O(N)
//         // unordered_map<int,int> mp ;
//         // int duplicate;
//         // for(int i=0 ;i<nums.size(); i++){
//         //     mp[nums[i]]++;
//         // }

//         // for(auto it : mp){
//         //     if(it.second >1){
//         //         duplicate= it.first;
//         //     }
//         // }
//         // return duplicate;

//         // Optimal approach : using the slow and fast pointers (tortoise method)
//         // TC : O(N)
//         // SC : O(2)

//         // start a slow and fast pointer
//         // untill they meet
//         int slow = 0 ;
//         int fast =0 ;

//         do{
//             slow = nums[slow];
//             fast = nums[nums[fast]];

//         }while(slow != fast);
//         // As soon as they meet
//         // start both of them with same speed
//         // untill they meet again
//         slow =0 ;
//         while(slow != fast ){
//             slow = nums[slow];
//             fast = nums[fast];
//         }

//         return slow;
//     }