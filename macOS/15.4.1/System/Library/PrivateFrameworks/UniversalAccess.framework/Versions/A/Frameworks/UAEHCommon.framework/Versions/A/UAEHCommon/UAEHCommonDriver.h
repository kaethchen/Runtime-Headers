@class NSXPCConnection;

@interface UAEHCommonDriver : NSObject {
    void /* function */ *_enableCaptureFunction;
    void /* function */ *_safeToQuitFunction;
    int _settingsBlockGen;
}

@property (retain, nonatomic) NSXPCConnection *_hudXPCConnection;
@property (nonatomic) BOOL _didRegisterForNotifications;
@property (nonatomic) BOOL _notificationsPaused;

- (id)init;
- (void).cxx_destruct;
- (BOOL)handleEvent:(const struct UAEvent { long long x0; unsigned int x1; unsigned int x2; double x3; struct CGPoint { double x0; double x1; } x4; struct CGPoint { double x0; double x1; } x5; unsigned long long x6; unsigned int x7; unsigned int x8; int x9; } *)a0;
- (void)_settingsDidChangeNotification:(id)a0;
- (void)_informDaemonOfSafeToQuit;
- (id)_settingsChangedNotificationsToObserve;
- (void)_showTransientHUDForCurrentStateOfFeature:(id)a0 enabled:(BOOL)a1;
- (void)applySettingsFromPreferences;
- (id)initWithEnableCaptureFunction:(void /* function */ *)a0 safeToQuitFunction:(void /* function */ *)a1;
- (BOOL)isSafeToQuit;
- (void)pauseListeningForSettingsNotifications;
- (void)resumeListeningForSettingsNotifications;
- (void)setupInitialState;
- (void)startDriver;
- (void)startListeningForSettingsNotifications;
- (void)stopListeningForSettingsNotifications;
- (void)userSessionDidChange;

@end
