@class AVContinuityCaptureOnBoardingManager, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureUserOnboarding : NSObject {
    long long _state;
    BOOL _enforceOnboarding;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_pairedActiveProcessPIDsByBundleID;
    NSMutableDictionary *_clientProcessPIDByBundleIDWithStreamIntent;
    AVContinuityCaptureOnBoardingManager *_continuityCaptureOnBoardingUIManager;
    BOOL _invalidated;
    BOOL _logTryItNowAnalytics;
}

@property (readonly, nonatomic) BOOL invalidated;
@property (readonly) long long state;
@property (nonatomic) BOOL logTryItNowAnalytics;

+ (void)invalidate;
+ (id)sharedInstance;
+ (id)bundleIDForClient:(id)a0;
+ (BOOL)clientHasCameraUseIntent:(int)a0;
+ (BOOL)hasBuiltInCamera;
+ (id)stateToString:(long long)a0;
+ (BOOL)validContinuityCameraDeviceToOnboard:(BOOL *)a0;

- (id)description;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_invalidate;
- (id)initWithQueue:(id)a0;
- (void)updateState;
- (void)_registerStreamingClient:(int)a0 clientBundleID:(id)a1;
- (void)_reportClientState:(long long)a0 forClient:(id)a1;
- (void)_unRegisterStreamingClient:(int)a0 clientBundleID:(id)a1;
- (void)displayOnBoardingUI:(BOOL)a0 allVideoEffectsSupported:(BOOL)a1;
- (BOOL)hasValidClientForTryItNow;
- (BOOL)remindLaterActiveForClientsWithStreamIntent;
- (BOOL)remindLaterActiveForPairedClients;
- (void)reportClientState:(long long)a0 forClient:(id)a1;
- (void)setupDeviceStatusNotification;
- (void)setupSystemStatusNotification;
- (BOOL)streamIntentForPairedClients;

@end
