#ifndef METEORITE_BLOCKCHAIN_H
#define METEORITE_BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "block.h"

class Blockchain {
public:
    Blockchain();

    void add_block(Block _new);

private:
    uint32_t _n_difficulty;
    std::vector<Block> _chain;

    Block get_last() const;
};

#endif