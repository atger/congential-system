#include <initializer_list>
#include <vector>
#include <string>
#include "seq.hpp"

Fastq::Fastq(std::string head, std::string opt, std::string seq, std::string qual) {
    header = head;
    optional = opt;
    sequence = seq;
    quality = qual;
}

FastqRecord::FastqRecord(std::initializer_list<Fastq> list) {
    records = {};
    for (Fastq record : list) {
        records.push_back(record);
    }
}

Fasta::Fasta(std::string head, std::string seq) {
    header = head;
    sequence = seq;
}

std::string Fasta::getHead() {
    return header;
}

std::string Fasta::getSeq() {
    return sequence;
}

FastaRecord::FastaRecord(std::initializer_list<Fasta> list) {
    for (Fasta record: list) {
        records.push_back(record);
    }
}

std::vector<Fasta> FastaRecord::getRecords() {
    return records;
}