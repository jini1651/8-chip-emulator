#ifndef _MEMORY_
#define _MEMORY_

using namespace std;

class Memory
{
private:
    data mem[4096];     //4KB (4,096 bytes)
    
public:
    Memory(void);
    ~Memory();

    bool isValid();
    byte read(addr);        //byte-level read
    void write(addr, byte); //byte-level write
};

#endif