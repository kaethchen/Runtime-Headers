@class NSNumber;

@interface HMMTRYearDaySchedule : NSObject <HMMTRSchedule, NSCopying>

@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSNumber *status;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartTime:(id)a0 endTime:(id)a1;
- (id)convertToMTRScheduleAtScheduleIndex:(long long)a0 forUserAtUserIndex:(long long)a1;
- (id)initWithMTRSchedule:(id)a0;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 status:(id)a2;

@end
