@interface NSODSession : ODSession

- (BOOL)_isDeallocating;
- (oneway void)release;
- (BOOL)_tryRetain;
- (BOOL)allowsWeakReference;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;

@end
