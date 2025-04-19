@class NSString, NSDateComponents;

@interface EWSSerializableTimeZoneTime : NSObject <XSDefinitionProvider>

@property (nonatomic) long long Bias;
@property (retain, nonatomic) NSDateComponents *Time;
@property (nonatomic) long long DayOrder;
@property (nonatomic) long long Month;
@property (nonatomic) long long DayOfWeek;
@property (copy, nonatomic) NSString *Year;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;
- (BOOL)isEqualToSerializableTimeZoneTime:(id)a0;
- (BOOL)matchesPatternForDate:(id)a0 withBias:(long long)a1 inCalendar:(id)a2;

@end
