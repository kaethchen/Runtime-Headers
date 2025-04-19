@interface NSAutoreleasePool : NSObject {
    void *_token;
    void *_reserved3;
    void *_reserved2;
    void *_reserved;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)addObject:(id)a0;
+ (void)releaseAllPools;
+ (BOOL)autoreleasePoolExists;
+ (unsigned long long)autoreleasedObjectCount;
+ (void)enableFreedObjectCheck:(BOOL)a0;
+ (void)enableRelease:(BOOL)a0;
+ (unsigned long long)poolCountHighWaterMark;
+ (unsigned long long)poolCountHighWaterResolution;
+ (void)resetTotalAutoreleasedObjects;
+ (void)setPoolCountHighWaterMark:(unsigned long long)a0;
+ (void)setPoolCountHighWaterResolution:(unsigned long long)a0;
+ (void)showPools;
+ (unsigned long long)topAutoreleasePoolCount;
+ (unsigned long long)totalAutoreleasedObjects;

- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (void)drain;
- (void)addObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;

@end
