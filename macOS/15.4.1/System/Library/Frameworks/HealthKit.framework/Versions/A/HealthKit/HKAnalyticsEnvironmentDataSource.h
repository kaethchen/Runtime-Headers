@class NSString, HKCalendarCache, NSDate;

@interface HKAnalyticsEnvironmentDataSource : NSObject

@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKCalendarCache *calendarCache;
@property (readonly, nonatomic) BOOL isImproveHealthAndActivityEnabled;
@property (readonly, copy, nonatomic) NSString *activePairedDeviceModelNumber;
@property (readonly, nonatomic) NSString *activePairedDeviceOSBuildNumber;
@property (readonly, nonatomic) NSString *activePairedDeviceProductType;
@property (readonly, copy, nonatomic) NSString *activePairedDeviceRegionInfo;
@property (readonly, copy, nonatomic) NSString *activePairedDeviceHousingColor;

- (id)init;
- (void).cxx_destruct;
- (id)bucketedNumberOfWeeksSinceDate:(id)a0;
- (id)bucketedNumberOfDaysSinceDate:(id)a0;
- (id)bucketedNumberOfWeeksSinceDate:(id)a0 minimumBinningValue:(long long)a1;

@end
