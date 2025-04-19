@class NSString, NSNumber, NSDictionary;

@interface IDSRegistrationDailyPNRStatusMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) BOOL pnrCurrentlyRegistered;
@property (readonly, nonatomic) BOOL pnrRegisteredToday;
@property (readonly, nonatomic) NSString *pnrMechanism;
@property (readonly, nonatomic) NSNumber *errorCode;
@property (readonly, nonatomic) BOOL hasMultipleSIMs;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPNRCurrentlyRegistered:(BOOL)a0 pnrRegisteredToday:(BOOL)a1 pnrMechanism:(id)a2 errorCode:(id)a3 hasMultipleSIMs:(BOOL)a4;

@end
