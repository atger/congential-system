#include <iostream>
#include <vector>
#include <algorithm>
#include "seq.hpp"

int main(int argc, char** argv) {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    if (auto itr = std::find(vec.begin(), vec.end(), 2); itr != vec.end()) {
        *itr = 4;
    }
    for(auto i : vec)
        std::cout << i << std::endl;

    Fasta record1 = Fasta{">header1", "ATATAGCATA"};
    FastaRecord frecord = {record1};
    for (auto r: frecord.getRecords()) {
        std::cout << r.getHead() << std::endl;
        std::cout << r.getSeq() << std::endl;
    }
}