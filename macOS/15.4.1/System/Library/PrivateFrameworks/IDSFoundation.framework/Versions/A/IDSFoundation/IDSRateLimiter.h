@class NSMutableDictionary;

@interface IDSRateLimiter : NSObject

@property (nonatomic) long long limit;
@property (nonatomic) double timeLimit;
@property (retain, nonatomic) NSMutableDictionary *cacheMap;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLimit:(long long)a0 timeLimit:(double)a1;
- (void)noteItem:(id)a0;
- (double)timeToUnderLimit:(id)a0;
- (BOOL)underLimitForItem:(id)a0;
- (id)_unlockedDescription;
- (void)cleanupExpiredItems;
- (void)clearAllItems;
- (void)clearItem:(id)a0;

@end
