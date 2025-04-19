@class NSString;

@interface PETAggregateStateStorageOnDisk : PETAggregateStateStorage {
    NSString *_path;
    int _fd;
    void *_bytes;
    unsigned long long _mappedLen;
    _Atomic BOOL _dead;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _localLock;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithPath:(id)a0;
- (void)_die;
- (void)_remapWithFlock:(BOOL)a0;
- (unsigned long long)_reserveCapacity:(unsigned int)a0;
- (void)expand:(unsigned long long)a0 andRunWithLock:(id /* block */)a1;
- (BOOL)resetLocked;
- (void)saveCorruptState;

@end
