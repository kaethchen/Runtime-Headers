@interface __NSCFError : NSError

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)_isDeallocating;
- (oneway void)release;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (Class)classForCoder;
- (long long)code;
- (id)domain;
- (id)initWithCoder:(id)a0;
- (id)userInfo;

@end
