@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface CFPrefsDaemon : NSObject {
    NSObject<OS_xpc_object> *_listener;
    const char *_name;
    int _role;
    struct __CFSet { } *_sourceCache;
    struct __CFBag { } *_sourceCacheUsageCounts;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sourceCacheLock;
    struct { unsigned long long buckets[64]; } _deadManagedSourceBitSet;
    NSObject<OS_xpc_object> *_agentConnections;
    NSObject<OS_dispatch_queue> *_agentQueue;
    BOOL _inSandbox;
    BOOL _testMode;
    _Atomic unsigned int *_shmem;
}

- (BOOL)enterSandbox;

@end
