@interface NSCTFont : UIFont

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)fontWithDescriptor:(id)a0 size:(double)a1;

- (oneway void)release;
- (BOOL)allowsWeakReference;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (unsigned long long)_cfTypeID;

@end
