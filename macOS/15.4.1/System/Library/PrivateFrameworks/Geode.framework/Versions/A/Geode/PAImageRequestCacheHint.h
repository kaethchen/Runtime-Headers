@interface PAImageRequestCacheHint : NSObject {
    BOOL _shouldCache;
    BOOL _temporary;
    int _purgeLevel;
}

+ (id)cachePurgeFirst;
+ (id)cachePurgeThird;
+ (id)noCache;
+ (id)_newInstanceShouldCache:(BOOL)a0 temporary:(BOOL)a1 purgeLevel:(int)a2;
+ (id)cacheNonPurgeable;
+ (id)cachePurgeLast;
+ (id)cachePurgeSecond;
+ (id)cacheTemporary;
+ (id)sharedInstanceAtIndex:(unsigned long long)a0;

- (id)description;
- (BOOL)shouldCache;
- (BOOL)temporary;
- (int)purgeLevel;

@end
