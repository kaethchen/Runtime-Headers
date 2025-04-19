@class NSString;

@interface NoBackhaulHandler : ExpertSystemHandlerCore <ManagedEventInfoProtocol>

@property (nonatomic) BOOL systemForeground;
@property (nonatomic) BOOL callInForeground;
@property (nonatomic) BOOL dndWhileDriving;
@property (nonatomic) unsigned int activationIdentifier;
@property (nonatomic) unsigned long long stepper;
@property (readonly, nonatomic) BOOL verifyDefaultGateway;
@property (readonly, nonatomic) BOOL ignoreBaseband;
@property (readonly, nonatomic) BOOL observeApsdFailure;
@property (readonly, nonatomic) BOOL observeWiFiRxSignalFullBars;
@property (readonly, nonatomic) BOOL observeWiFiRxSignalThresholded;
@property (readonly, nonatomic) BOOL observeForegroundActivity;
@property (readonly, nonatomic) BOOL observeDefaultRouteSignal;
@property (readonly, nonatomic) BOOL noBackhaulActivated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)internalStateDictionary;
+ (id)configureClass:(id)a0;

- (id)internalStateDictionary;
- (int)configureInstance:(id)a0;
- (void)generateInfoForId:(unsigned long long)a0 context:(const char *)a1 uuid:(id)a2 completionBlock:(id /* block */)a3;
- (BOOL)noteSymptom:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;

@end
