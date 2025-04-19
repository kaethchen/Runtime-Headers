@class NSNumber;

@interface HMMTRWeekDaySchedule : NSObject <HMMTRSchedule, NSCopying>

@property (copy, nonatomic) NSNumber *daysMask;
@property (copy, nonatomic) NSNumber *startHour;
@property (copy, nonatomic) NSNumber *startMinute;
@property (copy, nonatomic) NSNumber *endHour;
@property (copy, nonatomic) NSNumber *endMinute;
@property (copy, nonatomic) NSNumber *status;

+ (id)HMDaysOfTheWeekToString:(unsigned long long)a0;
+ (void)appendDayToString:(id)a0 daysString:(id)a1;
+ (id)dateWithHour:(unsigned long long)a0 andMinute:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDaysMask:(id)a0 startHour:(id)a1 startMinute:(id)a2 endHour:(id)a3 endMinute:(id)a4;
- (id)convertToMTRScheduleAtScheduleIndex:(long long)a0 forUserAtUserIndex:(long long)a1;
- (id)initWithDaysMask:(id)a0 startHour:(id)a1 startMinute:(id)a2 endHour:(id)a3 endMinute:(id)a4 status:(id)a5;
- (id)initWithMTRSchedule:(id)a0;

@end
