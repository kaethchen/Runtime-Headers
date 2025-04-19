@interface NSViewHierarchyLock : NSObject {
    void *_priv[0];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (BOOL)_tryRetain;
- (id)description;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (void)lock;
- (void)unlock;
- (void)lockForReading;
- (void)lockForWriting;
- (BOOL)tryLockForWriting;
- (void)_invalidate;
- (BOOL)_isValid;
- (BOOL)_lockForWriting:(BOOL)a0;
- (void)unlockTopMostReader;

@end
