// CHALLENGE:
//  How many integers are required to make an unsorted integer array consecutive?
// EXAMPLE:
//  For `statues = [6, 2, 3, 8]` the output should be `makeArrayConsecutive2(statues) = 3`
// NOTES:
//  Went for verbosity & used a sorted array
int makeArrayConsecutive2(std::vector<int> statues) {
    bool v = false;
    int ret = 0;
    std::vector<int>::iterator begin = statues.begin();
    std::vector<int>::iterator end = begin + statues.size();
    if(v) {
        cout << "statues: [ ";
        for(int i = 0; i < statues.size(); i++) {
            cout << statues[i] << " ";
        }
        cout << "]\n";
    }
    std::sort(statues.begin(), statues.end());
    if(v) {
        cout << "statues: [ ";
        for(int i = 0; i < statues.size(); i++) {
            cout << statues[i] << " ";
        }
        cout << "]\n";
    }
    if(v) { cout << "FOR-\n"; }
    for(std::vector<int>::iterator it = begin; it < (end-1); it++) {
        std::vector<int>::iterator next = it + 1;
        int diff = *next - *it;
        ret += (diff > 1) ? (diff - 1) : 0;
        if(v) { cout << *next << "-" << *it << "-1=" << (diff-1) << "; R: " << ret << endl; }
    }
    return ret;
}
