@class HKAnalyticsEnvironmentDataSource;
@protocol HKAnalyticsHealthDataSource;

@interface HKAnalyticsDataSource : NSObject

@property (readonly, weak, nonatomic) id<HKAnalyticsHealthDataSource> weakHealthDataSource;
@property (readonly, nonatomic) id<HKAnalyticsHealthDataSource> strongHealthDataSource;
@property (readonly, nonatomic) HKAnalyticsEnvironmentDataSource *environmentDataSource;
@property (readonly, nonatomic) id<HKAnalyticsHealthDataSource> healthDataSource;

- (void).cxx_destruct;
- (id)initWithHealthDataSource:(id)a0;

@end
