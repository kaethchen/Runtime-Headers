@class NSString, NSMutableDictionary, NSDate, NSMutableArray;

@interface MPClusterSlide : NSObject <NSCopying>

@property (copy) NSDate *captureDate;
@property (copy) NSString *path;
@property long long referenceCounter;
@property long long index;
@property (retain) NSMutableDictionary *usageCounterPerLayer;
@property (retain) NSMutableArray *usableSlideClusters;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)increaseUsageCounterForLayer:(id)a0;
- (long long)overallUsageCounter;
- (void)resetAllUsageCounters;
- (void)setUsageCounterForLayer:(id)a0 to:(long long)a1;
- (id)usageCountDescription;
- (long long)usageCounterForLayer:(id)a0;

@end
