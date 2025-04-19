@interface NSCTFontCollection : NSMutableFontCollection

+ (Class)classForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;

- (oneway void)release;
- (BOOL)allowsWeakReference;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (unsigned long long)_cfTypeID;

@end
