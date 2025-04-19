@class NSXPCConnection, NSString, NSArray, IMKInputSession, NSConnection, NSXPCListenerEndpoint, NSDictionary, NSRecursiveLock, NSBundle;

@interface IMKClient : NSObject <IMKClientProtocol> {
    IMKInputSession *_currentSession;
    NSString *_bundleIdentifier;
    NSBundle *_bundle;
    NSDictionary *_modes;
    NSDictionary *_inputMethodInfoDictionary;
    NSArray *localizedStrings;
    NSDictionary *_selectorDictionary;
    NSDictionary *_modeMenuKeys;
    BOOL _lookedForMenuKeys;
    struct OpaqueEventHandlerRef { } *_eventHandlerRef;
    struct __CFMessagePort { } *_launchPort;
    BOOL _isServerStarted;
    BOOL _clientHasDied;
    BOOL _getServerRetryPending;
    SEL _getServerRetryNotificationSel;
    id _getServerRetryNotificationTarget;
    long long _getServerRetryCount;
    BOOL _getServerGetMenuWasCalledDuringRetry;
    id /* block */ _tisSelectInputSourceCompletionBlock;
    id _serverDOProxy;
    NSString *_connection;
    NSString *_serverName;
    NSConnection *_serverConnection;
    NSXPCConnection *_launcherXPCConnection;
    NSXPCListenerEndpoint *_inputMethodXPCEndpoint;
    long long _exceptionTimeoutBumpCount;
    double _timeout;
    BOOL _waitingForMenu;
    id /* block */ completionBlock;
    NSRecursiveLock *_remoteProxyLock;
}

@property BOOL cleanTermination;
@property BOOL serverDiedBadly;
@property BOOL _waitingForMenu;
@property (readonly, nonatomic, getter=isIMKExtension) BOOL isIMKExtension;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (struct __CFString { } *)privateRunLoopMode;
+ (struct __CFRunLoop { } *)IMKRunLoopGetMain;
+ (BOOL)isDataTracingOn;
+ (void)IMKRunLoopUpdateMain;
+ (void)IMK_Catch_Log_Stalled_PerformBlocks_DispatchTime:(double)a0 withSelector:(SEL)a1;
+ (BOOL)clientServerXPCBlockStallLogging;
+ (id)imExtensionBundlePaths;
+ (BOOL)isClientServerTracing;
+ (BOOL)isClientServerXPCTracing;
+ (BOOL)isConnectionTracing;
+ (BOOL)isGeneralDebuggingOn;
+ (void)replyWaitCount_decrementWithLocking;
+ (void)replyWaitCount_incrementWithLocking;
+ (void)replyWaitCount_lockDecrement;
+ (void)replyWaitCount_lockIncrement;
+ (int)replyWaitCount_testWithLocking;
+ (void)replyWaitCount_unlock;
+ (void)setTemporaryClientServerXPCTracing:(BOOL)a0;
+ (Class)subclass;

- (id)_serverConnection;
- (id)_getServerDOProxy;
- (id)_safeServerDOProxy;
- (id)serverDOProxy;

@end
