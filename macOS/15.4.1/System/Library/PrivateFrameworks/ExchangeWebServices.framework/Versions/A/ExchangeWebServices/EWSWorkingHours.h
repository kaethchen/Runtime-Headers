@class NSArray, NSString, EWSSerializableTimeZone;

@interface EWSWorkingHours : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSSerializableTimeZone *TimeZone;
@property (copy, nonatomic) NSArray *WorkingPeriodArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
