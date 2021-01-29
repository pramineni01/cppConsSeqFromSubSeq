#include <iostream>
#include <vector>

bool isConstructable(std::vector<int> seq, std::vector<std::vector<int>> subSeqs) {
    bool keepRolling = true;

    int seqIdx = seq.size()-1;
    while (keepRolling) {
        keepRolling = false;

        for (const auto& ss : subSeqs) {
            int ssIdx = ss.size() - 1;
            for (;(ssIdx >=0) && (seqIdx >= 0) && (ss[ssIdx] == seq[seqIdx]); ssIdx--, seqIdx--){
                keepRolling = true;
            }
        }
        if (seqIdx <= 0) return true;
    }

    return false;
}

int main() {
    std::vector<int> seq = {1,2,3,4,5};
    std::vector< std::vector<int> > subSeqs {{1, 2}, {3, 4}, {5}};

    std::cout << "Is constructible: " << std::boolalpha << isConstructable(seq, subSeqs) << std::endl;
    return 0;
}
