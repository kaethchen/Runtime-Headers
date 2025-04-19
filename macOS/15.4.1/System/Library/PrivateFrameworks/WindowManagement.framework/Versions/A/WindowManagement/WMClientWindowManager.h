@class NSString, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol WMClientWindowManagerDelegate, OS_dispatch_queue;

@interface WMClientWindowManager : NSObject <WMXPCClientInterface> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_activeWindows;
    NSMutableDictionary *_cachedWindowIdentifierToWindowSnapshot;
    NSXPCConnection *_xpcConnection;
    int _serverLaunchNotificationToken;
    BOOL _waitingForReconnect;
}

@property (weak, nonatomic) id<WMClientWindowManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertStagesToStageFrames:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_xpcConnection;
- (void)notifyClickDidEndOnDesktopBackgroundWindow:(id)a0;
- (void)performAsynchronousBridgedWindowManagementOperation:(id)a0;
- (id)performSynchronousBridgedWindowManagementOperation:(id)a0;
- (void)performWindowTransaction:(id)a0;
- (id)prepareWindowTransaction:(id)a0;
- (id)proposeKeyWindowWithInfo:(id)a0;
- (id)proposeMainWindowWithInfo:(id)a0;
- (void)sendWindowTransaction:(id)a0;
- (id)stages;
- (void)_reconnect;
- (id)_createXPCConnection;
- (void)updateStages:(id)a0 displayChangeSeed:(unsigned long long)a1;
- (void)_handleInterruptionFromConnection:(id)a0;
- (void)_handleInvalidationFromConnection:(id)a0;
- (void)_performXPCTransaction:(id)a0;
- (void)_registerForLaunchNotification;
- (void)applyAgentPropertySnapshots:(id)a0;
- (void)handleRestoreTilingStateActionResponse:(id)a0;
- (void)hideApplicationResponse:(id)a0;
- (void)makeKeyWindowWithWindowIdentifier:(id)a0;
- (void)performResizeWindowRequest:(id)a0;
- (void)proposeKeyAndMainApplicationResponse:(id)a0 mainWindow:(id)a1;
- (void)resignKeyWindowWithWindowIdentifier:(id)a0;
- (id)stageFrames;
- (void)unhideApplicationResponse:(id)a0;
- (void)windowDeminiaturizationResponse:(id)a0;
- (void)windowMiniaturizationResponse:(id)a0;

@end
