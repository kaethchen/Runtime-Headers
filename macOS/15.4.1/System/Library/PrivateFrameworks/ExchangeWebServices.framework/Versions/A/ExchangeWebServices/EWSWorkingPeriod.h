@class NSIndexSet, NSString;

@interface EWSWorkingPeriod : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSIndexSet *DayOfWeek;
@property (nonatomic) long long StartTimeInMinutes;
@property (nonatomic) long long EndTimeInMinutes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
