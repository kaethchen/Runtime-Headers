@class NSString, _PASLock;

@interface _PASBundleIdResolver : NSObject {
    NSString *_exePath;
    _PASLock *_lock;
}

- (void).cxx_destruct;
- (id)initWithProcessIdentifier:(int)a0;
- (void)_populateResultWithLockWitness:(id)a0;
- (id)bundleIdentifierOrProcessName:(BOOL *)a0;

@end
