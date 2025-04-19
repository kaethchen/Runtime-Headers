@interface NSLazyBrowserCell : NSBrowserCell

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)lazyBrowserCell;

- (oneway void)release;
- (void)dealloc;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)isLoaded;
- (void)setControlView:(id)a0;
- (void)_clearMouseTracking;
- (BOOL)_isLoaded;
- (void)setLoaded:(BOOL)a0;

@end
