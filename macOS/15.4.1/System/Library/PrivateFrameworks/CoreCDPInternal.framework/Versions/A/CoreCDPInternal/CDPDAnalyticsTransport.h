@class NSString, CDPDTTRController, NSNumber, AAFAnalyticsTransportInProcessRTC;

@interface CDPDAnalyticsTransport : NSObject <AAFAnalyticsTransport>

@property (copy, nonatomic) NSNumber *clientType;
@property (copy, nonatomic) NSString *clientBundleId;
@property (copy, nonatomic) NSString *clientName;
@property (retain, nonatomic) CDPDTTRController *ttrController;
@property (retain, nonatomic) AAFAnalyticsTransportInProcessRTC *transport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)flushCaches;
+ (id)approvedRecoveryContactEventsForADPAndDNU;
+ (id)defaultTransport;
+ (void)flushTransportCache;
+ (id)getAllowedADPEvents;
+ (id)getAllowedCfuType;
+ (id)getAllowedDNUEvents;
+ (id)getAllowedErrorDomain;
+ (id)getAllowedEscapeOffer;
+ (id)getAllowedLocalSecretType;
+ (id)getAllowedSecurityEvents;
+ (id)getAllowedStringsForTelemetry;
+ (id)getApprovedEvents:(id)a0;
+ (id)getApprovedEventsForADPAndDNU;
+ (BOOL)isEventPrivacyApproved:(id)a0;
+ (id)transportForClientType:(id)a0 clientBundleId:(id)a1 clientName:(id)a2;
+ (id)transportForEvent:(id)a0;

- (void).cxx_destruct;
- (oneway void)sendEvent:(id)a0;
- (id)_sendEvent:(id)a0;
- (void)_appendCountryFieldToEvent:(id)a0 withCurrentEstimates:(id)a1;
- (void)_updateEventWithDefaultMetadata:(id)a0;
- (void)configureSessionForEvent:(id)a0 sendEventBlock:(id /* block */)a1 telemetryQueue:(id)a2;
- (void)enforcePrivacyComplianceOnEvent:(id)a0 key:(id)a1 value:(id)a2;
- (id)initWithClientType:(id)a0 clientBundleId:(id)a1 clientName:(id)a2;
- (BOOL)shouldEnforcePrivacyComplianceForEvent:(id)a0;

@end
