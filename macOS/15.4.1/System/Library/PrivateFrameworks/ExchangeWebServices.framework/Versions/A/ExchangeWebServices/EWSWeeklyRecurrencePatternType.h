@class NSIndexSet;

@interface EWSWeeklyRecurrencePatternType : EWSIntervalRecurrencePatternBaseType

@property (copy, nonatomic) NSIndexSet *DaysOfWeek;
@property (nonatomic) long long FirstDayOfWeek;

+ (id)definition;

- (void).cxx_destruct;

@end
