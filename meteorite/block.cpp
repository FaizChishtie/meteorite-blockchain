#include "block.h"
#include "sha256.h"
#include <sstream>

Block::Block(uint32_t n_index_in, const std::string &s_data_in) : _n_index(n_index_in), _s_data(s_data_in) {
    _n_nonce = -1;
    _t_time = time(nullptr);

}

std::string Block::get_hash() {
    return _s_hash;
}

void Block::mine_block(uint32_t difficulty) {
    char str[difficulty + 1];

    for(uint32_t i = 0; i < difficulty; ++i) {
        str[i] = '0';
    }

    str[difficulty] = '\0';

    do {
        _n_nonce++;
        _s_hash = _calculate_hash();
    } while (_s_hash.substr(0, difficulty) != str);

    std::cout << "Block mined: " << _s_hash << std::endl;
}

inline std::string Block::_calculate_hash() const {
    std::stringstream ss;
    ss << _n_index << _t_time << _s_data << _n_nonce << s_prev_hash;
    return sha256(ss.str());
}