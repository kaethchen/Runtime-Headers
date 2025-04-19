@interface MUPoolObject : NSObject {
    MUPoolObject *mPoolPrev;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (long long)clearPool;
+ (void)clearAllPools;
+ (BOOL)clearVars;
+ (struct { Class x0; id x1; id x2; BOOL x3; BOOL x4; } *)poolInfo;
+ (id)pooledClasses;

- (oneway void)release;
- (void)purge;

@end
