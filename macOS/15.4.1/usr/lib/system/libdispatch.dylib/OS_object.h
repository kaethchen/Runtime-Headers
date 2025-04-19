@interface OS_object : NSObject

- (oneway void)release;
- (BOOL)allowsWeakReference;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (void)_xref_dispose;

@end
