@class NSNumber;

@interface APAdBatchAccumulatorConfig : APConfiguration

@property (readonly, nonatomic) NSNumber *accumulationTime;
@property (readonly, nonatomic) NSNumber *enableBatchAccumulation;
@property (readonly, nonatomic) NSNumber *inactivityTime;
@property (readonly, nonatomic) NSNumber *itemLimit;

+ (id)path;

@end
