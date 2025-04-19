@class NSString;

@interface _GCFStaticLocalizedString : GCFLocalizedString {
    NSString *_key;
    NSString *__realizedString;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (BOOL)_tryRetain;
- (id)autorelease;
- (id)retain;
- (unsigned long long)retainCount;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)bundle;
- (id)key;
- (id)table;
- (id)_realizedString;

@end
