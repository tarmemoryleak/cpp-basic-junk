#include <iostream>
#include <string>

struct SystemNode{
    int node_id;
    int latency;

   
};
void node_optimized(SystemNode* ptr){
    ptr->latency = 0;
}

int main(){
    SystemNode inference;
    inference.node_id = 7;
    inference.latency = 999;
    node_optimized(&inference);
    

    //ไม่มีไรทำ :)

    std::cout << "Node :" << inference.node_id << std::endl;
    std::cout << "Latency: " << inference.latency << std::endl;
    
    return 0;
}
