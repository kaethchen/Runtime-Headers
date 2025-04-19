@interface _NSMainThread : NSThread

- (BOOL)_isDeallocating;
- (oneway void)release;
- (BOOL)_tryRetain;
- (id)retain;
- (unsigned long long)retainCount;

@end
