@interface HDDataAggregatorConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) double collectionLatency;
@property (readonly, nonatomic) double aggregationInterval;
@property (readonly, nonatomic) double maximumSeriesDuration;
@property (readonly, nonatomic) BOOL hasActiveWorkout;
@property (nonatomic) BOOL hasForegroundObserver;
@property (nonatomic) BOOL hasBackgroundObserver;

+ (id)configurationWithLatency:(double)a0 interval:(double)a1 seriesDuration:(double)a2 activeWorkout:(BOOL)a3 foregroundObserver:(BOOL)a4 backgroundObserver:(BOOL)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
