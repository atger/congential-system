#include <initializer_list>
#include <vector>
#include <string>

class Fastq {
    std::string header;
    std::string optional;
    std::string sequence;
    std::string quality;
    public:
    Fastq(std::string, std::string, std::string, std::string);
};

class FastqRecord {
    std::vector<Fastq> records;
    public:
    FastqRecord(std::initializer_list<Fastq>);
};

class Fasta {
    std::string header;
    std::string sequence;
    public:
    Fasta(std::string, std::string);
    std::string getHead();
    std::string getSeq();
};

class FastaRecord {
    std::vector<Fasta> records;
    public:
    FastaRecord(std::initializer_list<Fasta>);
    std::vector<Fasta> getRecords();
};