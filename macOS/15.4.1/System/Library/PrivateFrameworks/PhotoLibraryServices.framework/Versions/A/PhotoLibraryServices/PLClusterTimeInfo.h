@class NSCalendar, NSDate;

@interface PLClusterTimeInfo : NSObject

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) double endOfSameDayTimestamp;
@property (readonly, nonatomic) double maximumNextDayTimestamp;
@property (readonly, retain, nonatomic) NSDate *latestUTCDate;

- (void).cxx_destruct;
- (void)reset;
- (id)initWithCalendar:(id)a0;
- (void)_updateTimestampsWithUTCDate:(id)a0 localDate:(id)a1;
- (void)updateWithUTCDate:(id)a0 localDate:(id)a1;
- (BOOL)utcDateBelongsInCluster:(id)a0;

@end
