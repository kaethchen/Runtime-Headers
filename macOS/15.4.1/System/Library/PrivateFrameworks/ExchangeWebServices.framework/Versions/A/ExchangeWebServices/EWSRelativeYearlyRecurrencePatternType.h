@class NSString;

@interface EWSRelativeYearlyRecurrencePatternType : EWSRecurrencePatternBaseType <XSDefinitionProvider>

@property (nonatomic) long long DaysOfWeek;
@property (nonatomic) long long DayOfWeekIndex;
@property (nonatomic) long long Month;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;


@end
