class Solution {
   public  int search(int[] nums, int target) {
        int pivot = findPivot(nums);

        if(pivot == -1) {
            return Search(nums, target, 0, nums.length - 1);
        }
        if(target == nums[pivot])
            return pivot;
        if(target >= nums[0])
            return Search(nums, target, 0, pivot - 1);

        return Search(nums, target, pivot + 1, nums.length - 1);



    }



     int Search(int[] arr, int target, int start, int end) {

        while (start <= end) {

            int mid = (start + end) / 2;

            if (arr[mid] > target)
                end = mid - 1;
            else if (arr[mid] < target)
                start = mid + 1;
            else
                return mid;
        }

        return -1;
    }

     int findPivot(int[] arr){
        int start = 0;
        int end = arr.length - 1;

        while (start <= end){

            int mid = (start + end) / 2;

            if (mid < end && arr[mid] > arr[mid + 1])
                return mid;
            if (mid > start && arr[mid] < arr[mid - 1])
                return mid - 1;
            if (arr[start] <= arr[mid])
                start = mid + 1;
            else
                end = mid - 1;

        }
        return -1;
    }
}