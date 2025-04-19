@class EWSSerializableTimeZoneTime, NSString;

@interface EWSSerializableTimeZone : NSObject <XSDefinitionProvider>

@property (nonatomic) long long Bias;
@property (retain, nonatomic) EWSSerializableTimeZoneTime *StandardTime;
@property (retain, nonatomic) EWSSerializableTimeZoneTime *DaylightTime;
@property (readonly, copy, nonatomic) NSString *StandardTimeZoneName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;
- (BOOL)isEqualToSerializableTimeZone:(id)a0;

@end
