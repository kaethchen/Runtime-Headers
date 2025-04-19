@class ATXHeuristicDevice;

@interface ATXSetAlarmTimeOfDayDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

+ (id)medianFrom:(id)a0;
+ (id)timeOfDayFromDonations:(id)a0;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)alarmTimeOfDay:(id /* block */)a0;
- (id)_recentIntentDonationsForBundleId:(id)a0 limit:(unsigned long long)a1;

@end
