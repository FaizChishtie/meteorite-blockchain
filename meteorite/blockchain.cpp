#include "blockchain.h"

Blockchain::Blockchain() {
    _chain.emplace_back(Block(0, "Genesis Block"));
    _n_difficulty = 6;
}

void Blockchain::add_block(Block _new) {
    _new.s_prev_hash = get_last().get_hash();
    _new.mine_block(_n_difficulty);
    _chain.push_back(_new);
}

Block Blockchain::get_last() const {
    return _chain.back();
}
