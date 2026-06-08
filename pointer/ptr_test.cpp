#include <iostream>
#include <string>

struct GPU {
    std::string model_name;
    int vram_gb;
};

int main(){
    GPU my_gpu;
    my_gpu.model_name = "";
    my_gpu.vram_gb = 0;

    GPU* ptr = &my_gpu;

    ptr->vram_gb = 0; //test

    std::cout << "Model name: " << my_gpu.model_name << std::endl;
    std::cout << "VRAM : " << my_gpu.vram_gb << std::endl;
    
}
