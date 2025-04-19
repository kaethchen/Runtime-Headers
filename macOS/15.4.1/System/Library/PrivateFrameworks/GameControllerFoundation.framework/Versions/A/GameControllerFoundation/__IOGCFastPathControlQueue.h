@class __IOGCFastPathClient;

@interface __IOGCFastPathControlQueue : NSObject {
    struct __CFAllocator { } *allocator;
    __IOGCFastPathClient *client;
    struct IOGCFastPathControlQueueInterface **queueInterface;
    unsigned long long queueID;
}

- (void)dealloc;
- (id)description;

@end
