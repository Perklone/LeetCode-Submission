class Solution {
    func containsDuplicate(_ nums: [Int]) -> Bool {
        var ans = Set<Int>()
        for i in nums {
            if ans.contains(i) {
                return true
            }
            ans.insert(i)
        }
        return false
    }
}