@interface _GCFLocalizedPlaceholderString : GCFLocalizedString

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_isDeallocating;
- (oneway void)release;
- (BOOL)_tryRetain;
- (id)autorelease;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (id)key;
- (id)_realizedString;

@end
