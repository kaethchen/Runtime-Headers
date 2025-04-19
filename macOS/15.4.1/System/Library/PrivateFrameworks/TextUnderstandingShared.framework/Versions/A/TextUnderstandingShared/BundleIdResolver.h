@class NSString, BundleIdResolverGuardedData;

@interface BundleIdResolver : NSObject {
    NSString *_exePath;
    BundleIdResolverGuardedData *_guardedData;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProcessIdentifier:(int)a0;
- (void)_populateResultWithLockWitness:(id)a0;
- (id)bundleIdentifierOrProcessName:(BOOL *)a0;

@end
