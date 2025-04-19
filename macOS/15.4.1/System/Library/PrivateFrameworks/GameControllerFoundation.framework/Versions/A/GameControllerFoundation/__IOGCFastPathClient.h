@interface __IOGCFastPathClient : NSObject {
    struct __CFAllocator { } *allocator;
    unsigned int service;
    struct IOCFPlugInInterfaceStruct **pluginInterface;
    struct IOGCFastPathClientInterface **clientInterface;
    unsigned long long providerID;
}

- (void)dealloc;
- (id)description;

@end
