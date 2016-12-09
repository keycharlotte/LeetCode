public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        var d = new Dictionary<int, int>();
        for (int i = 0; i < nums.Count(); i++)
        {
            d[nums[i]] = i;
        }
        var c = new int[2];
        for (int i = 0; i < nums.Count(); i++)
        {
            if (d.ContainsKey(target - nums[i]) && d[target-nums[i]]!=i)
            {
                c[0] = i;
                c[1] = d[target-nums[i]];
                return c;
            }
        }

        return c;
    }
}
