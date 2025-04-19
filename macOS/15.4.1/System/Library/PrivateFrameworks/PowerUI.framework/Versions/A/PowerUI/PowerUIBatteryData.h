@class NSMutableDictionary;

@interface PowerUIBatteryData : NSObject

@property (retain, nonatomic) NSMutableDictionary *dateToWeekdayMedian;
@property (retain, nonatomic) NSMutableDictionary *dateToWeekendMedian;
@property (retain, nonatomic) NSMutableDictionary *yesterdayReference;

+ (id)sharedInstance;
+ (id)log;
+ (id)batteryLevelByTimeSlot:(unsigned long long)a0 dayType:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)medianBatteryLevelByTimeSlot:(unsigned long long)a0 dayType:(unsigned long long)a1;
- (id)midnightDateFrom:(id)a0;

@end
