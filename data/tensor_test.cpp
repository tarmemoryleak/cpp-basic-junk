#include <iostream>
#include <string>
#include <vector>

using Data = std::string; //ตั้งชื่อ string อ่านง่ายๆ

class TARTensor {
private:
    std::vector<Data> memory;
    size_t width; //ความกว้าง
    size_t height; //ความสูงของมิติตาราง

public:
    TARTensor(size_t w, size_t h) {
        width = w;
        height = h;
        memory.resize(width * height); 
    }

    void set_value(size_t row, size_t col, const Data& value) {
        size_t idx = (row * width) + col;
        memory[idx] = value;
    }

    Data get_value(size_t row, size_t col) {
        size_t idx = (row * width) + col;
        return memory[idx];
    }
};

int main() {
    TARTensor tensor(3, 3);
    tensor.set_value(0, 0, "TEST1");
    tensor.set_value(1, 1, "TEST2");
    tensor.set_value(2, 1, "TEST3"); 
    
    std::cout << "(0,0): " << tensor.get_value(0, 0) << std::endl;
    std::cout << "(1,1): " << tensor.get_value(1, 1) << std::endl;
    std::cout << "(2,1): " << tensor.get_value(2, 1) << std::endl;
    return 0;
}
