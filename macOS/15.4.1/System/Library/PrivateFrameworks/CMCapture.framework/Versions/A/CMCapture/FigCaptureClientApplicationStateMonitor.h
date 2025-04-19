@class FigCaptureDisplayLayoutMonitor, NSString, FigCaptureClientApplicationStateMonitorClient, FigCaptureDeviceLockStateMonitor, NSObject, RBSProcessMonitor;
@protocol OS_tcc_identity;

@interface FigCaptureClientApplicationStateMonitor : NSObject <FigCaptureDisplayLayoutObserver, FigCaptureDeviceLockStateObserver> {
    FigCaptureClientApplicationStateMonitorClient *_client;
    struct OpaqueFigSimpleMutex { } *_stateChangeLock;
    RBSProcessMonitor *_mediaEndowmentMonitor;
    BOOL _isVisibilityEndowmentMonitoringRequiredForClient;
    RBSProcessMonitor *_visibilityEndowmentMonitor;
    BOOL _isBKSApplicationStateMonitoringRequiredForClient;
    unsigned int _bksApplicationState;
    BOOL _bksApplicationStateInitialized;
    int _applicationState;
    BOOL _isLayoutMonitoringRequiredForClient;
    int _layoutState;
    BOOL _layoutStateInitialized;
    BOOL _isExternalDisplayLayoutMonitoringRequiredForClient;
    int _externalDisplayLayoutState;
    BOOL _isExternalDisplayLayoutStateInitialized;
    BOOL _isContinuityDisplayLayoutMonitoringRequiredForClient;
    int _continuityDisplayLayoutState;
    BOOL _isContinuityDisplayLayoutStateInitialized;
    int _aggregateLayoutState;
    FigCaptureDisplayLayoutMonitor *_displayLayoutMonitor;
    FigCaptureDisplayLayoutMonitor *_externalDisplayLayoutMonitor;
    FigCaptureDisplayLayoutMonitor *_continuityDisplayLayoutMonitor;
    BOOL _isDeviceLockStateMonitoringRequiredForClient;
    BOOL _deviceIsLocked;
    BOOL _deviceLockStateInitialized;
    FigCaptureDeviceLockStateMonitor *_deviceLockStateMonitor;
    BOOL _invalid;
}

@property (readonly) NSString *applicationID;
@property (readonly) int applicationState;
@property (readonly) int clientType;
@property (readonly, nonatomic) NSString *mediaEnvironment;
@property (readonly, nonatomic) NSObject<OS_tcc_identity> *mediaEnvironmentTCCIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)startContinuityCaptureTerminationMonitorWithHandler:(id /* block */)a0;
+ (void)startPrewarmingMonitorWithHandler:(id /* block */)a0;
+ (void)stopPrewarmingMonitor;

- (void)dealloc;
- (void)invalidate;
- (void)deviceLockStateMonitor:(id)a0 didUpdateDeviceLockState:(BOOL)a1;
- (id)initWithClientAuditToken:(struct { unsigned int x0[8]; })a0 mediaEnvironment:(id)a1 forThirdPartyTorch:(BOOL)a2 applicationAndLayoutStateHandler:(id /* block */)a3;
- (void)layoutMonitor:(id)a0 didUpdateLayout:(id)a1;
- (void)updateApplicationState;

@end
