@interface NSCachedColorSpaceColor : NSColorSpaceColor

- (oneway void)release;
- (BOOL)allowsWeakReference;
- (id)autorelease;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (void)_release;

@end
