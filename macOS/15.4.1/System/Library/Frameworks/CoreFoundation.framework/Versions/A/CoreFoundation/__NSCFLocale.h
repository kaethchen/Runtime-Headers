@interface __NSCFLocale : NSLocale

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)_isDeallocating;
- (oneway void)release;
- (BOOL)_tryRetain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (id)displayNameForKey:(id)a0 value:(id)a1;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)objectForKey:(id)a0;

@end
