@class NSError, NSString, NSURL, NSHTTPCookieStorage, IKAppContext, VSStateMachine, VSAuditToken, VSAppDeviceConfig;
@protocol VSApplicationDelegate;

@interface VSApplication : NSObject <IKAppContextDelegate, VSStateMachineDelegate, IKApplication>

@property (retain, nonatomic) VSStateMachine *stateMachine;
@property (retain, nonatomic) VSAppDeviceConfig *appDeviceConfig;
@property (retain, nonatomic) IKAppContext *appContext;
@property (retain, nonatomic) NSHTTPCookieStorage *cookieStorage;
@property (retain, nonatomic) NSError *failureToStart;
@property (readonly, copy, nonatomic) NSURL *bootURL;
@property (weak, nonatomic) id<VSApplicationDelegate> delegate;
@property (copy, nonatomic) VSAuditToken *auditToken;
@property (nonatomic) BOOL canRequireSystemTrust;
@property (nonatomic) BOOL shouldAllowRemoteInspection;
@property (copy, nonatomic) NSString *vendorIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)release;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)appIdentifier;
- (id)localStorage;
- (id)appLaunchParams;
- (void)appContext:(id)a0 didStartWithOptions:(id)a1;
- (id)activeDocument;
- (void)appContext:(id)a0 didFailWithError:(id)a1;
- (void)appContext:(id)a0 didStopWithOptions:(id)a1;
- (void)appContext:(id)a0 evaluateAppJavaScriptInContext:(id)a1;
- (BOOL)appContext:(id)a0 validateDOMDocument:(id)a1 inContext:(id)a2 error:(id *)a3;
- (void)appDocumentForDocument:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)appIsTrusted;
- (id)appJSURL;
- (id)deviceConfigForContext:(id)a0;
- (void)evaluate:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)initWithBootURL:(id)a0;
- (id)objectForMediaItem:(id)a0;
- (id)objectForPlayer:(id)a0;
- (id)objectForPlaylist:(id)a0;
- (void)sendErrorWithMessage:(id)a0;
- (BOOL)shouldIgnoreJSValidation;
- (id)sourceApplicationAuditTokenDataForContext:(id)a0;
- (id)sourceApplicationBundleIdentifierForContext:(id)a0;
- (void)transitionToInvalidState;
- (void)transitionToNotifyingOfFailureToStartState;
- (void)transitionToReadyState;
- (void)transitionToStartingState;
- (void)transitionToStoppingState;
- (id)userDefaultsStorage;
- (id)vendorStorage;
- (void)willPerformXhrRequest:(id)a0;
- (id)xhrSessionConfigurationForContext:(id)a0;

@end
