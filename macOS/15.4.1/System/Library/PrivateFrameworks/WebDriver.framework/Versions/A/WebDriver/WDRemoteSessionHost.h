@class NSTimer, NSString, RWIDrivable, WDProtocolBackendProxy, NSDictionary, RWITarget, NSBundle, SimDevice, RWIApplication;
@protocol WDSessionHostDelegate;

@interface WDRemoteSessionHost : NSObject <RWIDriverSession, WDSessionHost> {
    id<WDSessionHostDelegate> _delegate;
    unsigned long long _notificationHandlerID;
    NSString *_sessionIdentifier;
    long long _hostType;
    long long _sessionState;
    NSBundle *_hostApplicationBundle;
    id /* block */ _bootstrapCompletionHandler;
    NSTimer *_bootstrapTimeout;
    BOOL _ignoreExistingRunningApplications;
    NSDictionary *_environment;
    NSString *_expectedApplicationIdentifier;
    int _processIdentifier;
    RWIApplication *_hostApplication;
    RWIDrivable *_drivable;
    WDProtocolBackendProxy *_backendProxy;
}

@property (readonly, nonatomic) WDProtocolBackendProxy *backendProxy;
@property (readonly, nonatomic) RWITarget *hostTarget;
@property (readonly, nonatomic) SimDevice *hostSimulator;
@property (readonly, nonatomic) BOOL supportsFileUploadForLocalPaths;
@property (readonly, copy, nonatomic) NSString *hostName;
@property (readonly, copy, nonatomic) NSString *hostVersion;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) RWIDrivable *remoteDrivable;
@property (readonly, copy, nonatomic) NSDictionary *forwardedCapabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long hostType;
@property (weak, nonatomic) id<WDSessionHostDelegate> delegate;

+ (id)hostForMachine:(id)a0;
+ (id)hostForDevice:(id)a0;
+ (id)hostForSimulator:(id)a0;

- (void).cxx_destruct;
- (void)sendMessageToBackend:(id)a0;
- (void)sendMessageToFrontend:(id)a0;
- (void)_handleRWINotification:(id)a0;
- (void)_registerForRWINotifications;
- (void)_unregisterForRWINotifications;
- (id)_automationProtocolURL;
- (void)_bootSimulatorAppIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)_bootSimulatorIfNeeded;
- (void)_bootSimulatorInstanceIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)_bootstrapEncounteredTimeout:(id)a0;
- (void)_bootstrapFailedWithError:(id)a0;
- (BOOL)_bootstrapWithApplicationIfMatching:(id)a0;
- (void)_clearBootstrapTimeout;
- (void)_createDrivableForApplicationIfNeeded;
- (void)_handleApplicationAdded:(id)a0;
- (void)_handleApplicationRemoved:(id)a0;
- (void)_handleDrivableAdded:(id)a0;
- (void)_handleDrivableRemoved:(id)a0;
- (void)_handleDrivableStateChanged:(id)a0;
- (void)_matchingDrivableDidBecomePaired;
- (id)_preferredLocalSafariApplications;
- (void)_remoteSessionWasTerminated;
- (void)_startBootstrapTimeoutForAsyncOperation:(id)a0;
- (void)_startPairingWithDrivable:(id)a0;
- (void)_transitionStateTo:(long long)a0;
- (void)_waitForApplicationToBecomeUsable:(id)a0;
- (void)_waitForApplicationWithIdentifier:(id)a0;
- (void)bootstrapSessionIgnoringExistingRunningApplications:(BOOL)a0 environment:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canLaunchBrowserWithName:(id)a0 version:(id)a1;
- (void)disconnectSession;
- (void)findOrLaunchLocalApplication:(id)a0;
- (void)findOrLaunchSuitableLocalApplication;
- (void)findOrLaunchSuitableRemoteApplication;
- (id)initWithType:(long long)a0 target:(id)a1 simulator:(id)a2;

@end
