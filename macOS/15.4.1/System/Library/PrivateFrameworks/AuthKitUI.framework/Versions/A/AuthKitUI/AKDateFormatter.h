@interface AKDateFormatter : NSObject

+ (id)localizedDateTimeFromEpoch:(double)a0;
+ (id)localizedDateTimeFromEpoch:(double)a0 locale:(id)a1;
+ (id)localizedDayHourDate:(double)a0 includeTimeRemainingPhrase:(BOOL)a1;

@end
