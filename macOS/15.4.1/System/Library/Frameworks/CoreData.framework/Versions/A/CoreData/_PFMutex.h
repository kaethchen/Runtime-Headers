@interface _PFMutex : NSObject <NSLocking> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)lock;
- (void)unlock;
- (BOOL)tryLock;

@end
