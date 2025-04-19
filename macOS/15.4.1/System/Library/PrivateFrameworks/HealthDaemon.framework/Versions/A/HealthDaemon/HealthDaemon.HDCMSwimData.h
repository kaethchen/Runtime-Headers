@class NSUUID, NSDate;

@interface HealthDaemon.HDCMSwimData : NSObject

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) long long recordId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) long long lapCount;
@property (nonatomic, readonly) long long segment;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) long long strokeCount;
@property (nonatomic, readonly) long long strokeType;

- (id)init;

@end
