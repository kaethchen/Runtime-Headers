@class NSString, SFDeviceOperationHandlerWiFiSetup, SFService, SFDeviceOperationHandlerCDPSetup, SFSession, NSObject, AKAccountManager, ACAccountStore;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceRepairService : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned int _invalidateFlags;
    SFService *_sfService;
    SFSession *_sfSession;
    unsigned long long _peerFeatureFlags;
    ACAccountStore *_accountStore;
    BOOL _prefCDPEnabled;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    unsigned long long _startTicks;
    unsigned long long _startProblemFlags;
    NSObject<OS_dispatch_source> *_repairMetricsTimer;
    AKAccountManager *_akAccountManager;
}

@property (copy, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long problemFlags;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_invalidate;
- (void)invalidateWithFlags:(unsigned int)a0;
- (void)_sfServiceStart;
- (void)_handleFinishRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleGetProblemsRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleSessionEnded:(id)a0;
- (void)_handleSessionStarted:(id)a0;
- (unsigned long long)_lastProblemRecorded;
- (BOOL)_localDeviceSupportsAppleIDSetup;
- (void)_recordNewProblem:(unsigned long long)a0;
- (void)_registerAppleIDSetupIfNecessary;
- (void)_registerCDPAndTouchRemoteIfNecessary;
- (void)_repairMetricsDailyPush;
- (void)_repairMetricsNewProblemFlags:(unsigned long long)a0;
- (BOOL)_shouldRunAppleIDSetup;
- (id)_whenLastProblemWasRecorded;

@end
