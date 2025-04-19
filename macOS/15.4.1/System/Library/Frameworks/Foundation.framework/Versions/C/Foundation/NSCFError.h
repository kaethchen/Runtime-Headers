@interface NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (oneway void)release;
- (BOOL)allowsWeakReference;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (Class)classForCoder;
- (long long)code;
- (id)domain;
- (id)initWithCoder:(id)a0;
- (id)userInfo;
- (id)_callStackReturnAddresses;

@end
