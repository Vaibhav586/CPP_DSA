class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int result = numBottles;
        int emptyWB = numBottles;

        while (emptyWB >= numExchange) {
            emptyWB = emptyWB - numExchange;
            numExchange += 1;
            result += 1;
            emptyWB += 1;
        }
        return result;
    }
};
