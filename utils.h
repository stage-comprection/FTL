#ifndef UT
#define UT
#include <string>
#include <iostream>
#include <fstream>
#include <cstdint>
#include <cctype>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>


using namespace std;


typedef uint64_t minimizer;
typedef uint32_t readNumber;
typedef uint32_t position;
typedef uint64_t kmer;


vector<string> getReads(ifstream& ReadFile,uint64_t n);
uint64_t nuc2int(char c);
string reversecomplement (const string& s);
void int2seq(minimizer min, uint64_t n);
minimizer cat(minimizer seed, minimizer body, uint64_t n);
minimizer getRepresent(minimizer min, uint64_t n);
minimizer rc(minimizer min, uint64_t n);
minimizer getEnd(minimizer kmer, uint64_t n);
minimizer getBegin(minimizer kmer, uint64_t n);
double jaccardSet(unordered_set<minimizer>& set1,unordered_set<minimizer>& set2);
uint64_t inANotInB(unordered_set<minimizer>& set1,unordered_set<minimizer>& set2);
uint64_t interSet(unordered_set<minimizer>& set1,unordered_set<minimizer>& set2);
string getRead(ifstream& readFile);
unordered_map<minimizer,uint64_t > kmerCounting(const string& readFile, const uint64_t k);
void fillIndex(const string& readFile, const uint64_t k, unordered_map<kmer,vector<position>>& kmer2pos);
void mapReadFile(const string& readFile,const uint64_t k, unordered_map<kmer,vector<position>>& kmer2pos, const string& ref);
void readCounting(const string& readFile);


#endif
