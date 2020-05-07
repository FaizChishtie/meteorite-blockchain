#ifndef METEORITE_BLOCK_H
#define METEORITE_BLOCK_H 

#include <cstdint>
#include <iostream>

class Block {
public: 
    std::string s_prev_hash;
    
    Block(uint32_t n_index_in, const std::string &s_data_in);
    
    std::string get_hash();

    void mine_block(uint32_t difficulty);
private:
    uint32_t _n_index;
    int64_t _n_nonce;
    std::string _s_data;
    std::string _s_hash;
    time_t _t_time;

    std::string _calculate_hash() const;

};


#endif