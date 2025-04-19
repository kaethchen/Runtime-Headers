@interface NSCFTimer : NSTimer

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (oneway void)release;
- (BOOL)allowsWeakReference;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (BOOL)isValid;
- (unsigned long long)_cfTypeID;
- (void)fire;
- (id)fireDate;
- (id)initWithFireDate:(id)a0 interval:(double)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 repeats:(BOOL)a5;
- (void)invalidate;
- (void)setFireDate:(id)a0;
- (void)setTolerance:(double)a0;
- (double)timeInterval;
- (double)tolerance;
- (id)userInfo;

@end
