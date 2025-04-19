@interface __NSMallocBlock__ : NSBlock

- (BOOL)_isDeallocating;
- (oneway void)release;
- (BOOL)_tryRetain;
- (id)retain;
- (unsigned long long)retainCount;

@end
