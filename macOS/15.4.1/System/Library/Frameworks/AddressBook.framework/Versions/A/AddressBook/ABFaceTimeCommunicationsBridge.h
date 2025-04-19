@protocol ABFaceTimeCommunicationsBridgeDelegate, CNCancelable;

@interface ABFaceTimeCommunicationsBridge : NSObject

@property (retain, nonatomic) id<CNCancelable> messagingAvailabilityChangedToken;
@property (retain, nonatomic) id<CNCancelable> faceTimeAvailabilityChangedToken;
@property (retain, nonatomic) id<CNCancelable> telephonyAvailaibilityChangedToken;
@property (readonly, nonatomic, getter=isTelephonySupported) BOOL telephonySupported;
@property (weak, nonatomic) id<ABFaceTimeCommunicationsBridgeDelegate> delegate;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)supplementalDialTelephonyCallString;
- (void)faceTimeAvailabilityChanged:(BOOL)a0 forContactIdentifier:(id)a1;
- (id)loggingNameForService:(id)a0;
- (void)makeFaceTimeCallWithContactIdentifier:(id)a0 endpoint:(id)a1 isAudio:(BOOL)a2;
- (void)makeFaceTimeCallWithEndpoint:(id)a0 isAudio:(BOOL)a1;
- (void)messagingAvailabilityChanged:(BOOL)a0 forEndpoint:(id)a1;
- (void)notifyClientOfResult:(id)a0 fromEndpoints:(id)a1 service:(id)a2 forIdentifier:(id)a3;
- (id)searchAvailabilityCacheForEndpoints:(id)a0 service:(id)a1;
- (void)startAvailabilityCheckForContactIdentifier:(id)a0 service:(id)a1 endpoints:(id)a2;
- (void)startFaceTimeAvailabilityLookupForIdentifier:(id)a0 endpoints:(id)a1;
- (void)startMessagingAvailabilityLookupForEndpoint:(id)a0;
- (void)startTelephonySupportLookup;
- (void)telephonyAvailaibilityChanged:(BOOL)a0;
- (void)telophonySupportChanged:(id)a0;
- (id)validEndpointFromResults:(id)a0 forService:(id)a1;

@end
