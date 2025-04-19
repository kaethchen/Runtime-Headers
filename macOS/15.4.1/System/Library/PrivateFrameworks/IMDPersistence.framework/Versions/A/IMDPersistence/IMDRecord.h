@interface IMDRecord : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (oneway void)release;
- (BOOL)allowsWeakReference;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;

@end
