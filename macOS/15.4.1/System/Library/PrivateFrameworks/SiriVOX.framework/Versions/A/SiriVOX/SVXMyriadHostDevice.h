@class NSString, SCDACoordinator, SVXMyriadWiFiAssertion, NSObject;
@protocol SVXMyriadResponseDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface SVXMyriadHostDevice : NSObject <SCDADelegate, SVXMyriadRequestDelegate> {
    SCDACoordinator *_scdaCoordinator;
    id<SVXMyriadResponseDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    struct { id /* block */ completion; NSObject<OS_dispatch_source> *timer; } _emergencyContext;
    SVXMyriadWiFiAssertion *_wifiAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)setupEnabled:(BOOL)a0;
- (void)scdaCoordinatorDidHandleEmergency:(id)a0;
- (void)scdaShouldAbortAnotherDeviceBetter:(id)a0;
- (void)scdaShouldContinue:(id)a0;
- (void)scdaShouldUnduck:(id)a0;
- (void)scdaWillEndSession:(id)a0;
- (void)scdaWillStartWithSession:(id)a0;
- (void)_initializeMyriadEmergencyTimer;
- (void)_acquireWiFiAssertion;
- (void)_armEmergencyDispatchTimerFor:(double)a0 toExecute:(id /* block */)a1;
- (void)_disarmMyriadEmergencyTimer;
- (void)_releaseWiFiAssertion;
- (void)_signalEmergencyCallHandledStatus:(BOOL)a0;
- (void)_startAdvertisingEmergency:(id /* block */)a0;
- (void)preheatMyriad;
- (void)resetMyriad;
- (void)startAdvertising:(unsigned long long)a0 withSCDAGoodnessScoreContext:(id)a1 withSCDAAudioContext:(id)a2 completion:(id /* block */)a3;

@end
