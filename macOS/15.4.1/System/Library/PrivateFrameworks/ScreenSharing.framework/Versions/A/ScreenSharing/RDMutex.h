@class NSString;

@interface RDMutex : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } pthreadLock;
    BOOL trackOwner;
}

@property (retain) NSString *whoHasTheLock;

- (void)dealloc;
- (id)description;
- (id)init;
- (int)lock;
- (int)unlock;
- (int)trylock;
- (id)initWithoutTracking;

@end
