class Solution {
    public List<List<Integer>> findMissingRanges(int[] nums, int lower, int upper) {
        List<List<Integer>> result = new ArrayList<>();
        int prev = lower - 1;

        for (int i = 0; i <= nums.length; i++) {
            int curr = (i < nums.length) ? nums[i] : upper + 1;
            if (curr - prev > 1) {
                result.add(Arrays.asList(prev + 1, curr - 1));
            }
            prev = curr;
        }

        return result;
    }
}