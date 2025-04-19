@class NSNumber, NSArray;

@interface MTRDeviceEnergyManagementClusterForecastStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *forecastID;
@property (copy, nonatomic) NSNumber *activeSlotNumber;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSNumber *earliestStartTime;
@property (copy, nonatomic) NSNumber *latestEndTime;
@property (copy, nonatomic) NSNumber *isPausable;
@property (copy, nonatomic) NSArray *slots;
@property (copy, nonatomic) NSNumber *forecastUpdateReason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
