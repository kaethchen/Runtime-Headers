@interface EWSRelativeMonthlyRecurrencePatternType : EWSIntervalRecurrencePatternBaseType

@property (nonatomic) long long DaysOfWeek;
@property (nonatomic) long long DayOfWeekIndex;

+ (id)definition;

@end
