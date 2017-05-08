// CHALLENGE:
//  How many integers are required to make an unsorted integer array consecutive?
// EXAMPLE:
//  For `statues = [6, 2, 3, 8]` the output should be `makeArrayConsecutive2(statues) = 3`
// NOTES:
//  Recreated functionality from the lead solutions, but explicitly so I can follow the operation
//  Lead solution utilized: http://www.cplusplus.com/reference/algorithm/minmax_element/
int makeArrayConsecutive2(std::vector<int> statues) {
    int len = statues.size();
    int min = statues[0];
    int max = statues[0];
    for(std::vector<int>::iterator it = statues.begin(); it < statues.end(); it++) {
        min = (*it < min) ? *it : min;
        max = (*it > max) ? *it : max;
        cout << min << " : " << max << endl;
    }
    cout << max << "-" << min << "-" << len << "+" << 1 << endl;
    return (max - min - len + 1);
}
