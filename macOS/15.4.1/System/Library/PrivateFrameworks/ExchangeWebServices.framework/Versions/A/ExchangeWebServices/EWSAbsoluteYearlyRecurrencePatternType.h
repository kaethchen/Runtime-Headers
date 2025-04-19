@class NSString;

@interface EWSAbsoluteYearlyRecurrencePatternType : EWSRecurrencePatternBaseType <XSDefinitionProvider>

@property (nonatomic) long long DayOfMonth;
@property (nonatomic) long long Month;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;


@end
