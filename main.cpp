#include "./meteorite/blockchain.h"

int main() {
    Blockchain chain = Blockchain();

    std::cout << "Block 1" << std::endl;
    chain.add_block(Block(1, "Some block data 1"));

    std::cout << "Block 2" << std::endl;
    chain.add_block(Block(2, "Some block data 1"));
        

    std::cout << "Block 3" << std::endl;
    chain.add_block(Block(3, "Some block data 1"));
    

}