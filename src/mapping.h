#ifndef MAPPING
#define MAPPING
#include <string>
#include <iostream>
#include <fstream>
#include <cstdint>
#include <cctype>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include "utils.h"


using namespace std;


void fillIndex(const string& readFile, const uint64_t k, unordered_map<kmer,vector<position>>& kmer2pos);
uint mapReadFile(const string& readFile,const uint64_t k, unordered_map<kmer,vector<position>>& kmer2pos, const string& ref,uint maxMiss, bool notAlignedSequence);






#endif
