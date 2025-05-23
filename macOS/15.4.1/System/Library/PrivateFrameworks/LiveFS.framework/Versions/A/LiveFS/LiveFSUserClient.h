@interface LiveFSUserClient : NSObject {
    unsigned int ourPort;
}

+ (id)defaultClient;

- (void)dealloc;
- (id)init;
- (int)callStructMethod:(unsigned int)a0 inStruct:(const void *)a1 inSize:(unsigned long long)a2 outStruct:(void *)a3 outStructSize:(unsigned long long *)a4;
- (int)checkUserClientPort;
- (int)configureUserClient:(unsigned int)a0 pid:(int)a1 pidversion:(int)a2 supportKOIO:(int)a3;
- (unsigned int)getConnPort;
- (int)getUserClientPort;
- (int)getUserClientPortForService:(const char *)a0;
- (int)setMainMachPort:(unsigned int)a0 forDomain:(id)a1;

@end
