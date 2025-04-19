@class NSArray, DEDConfiguration, NSOperationQueue, DEDDiagnosticCollector, DEDController, NSString;

@interface DEDDaemon : NSObject <DEDWorkerProtocol>

@property (retain) DEDConfiguration *config;
@property (retain) NSOperationQueue *backgroundOpQueue;
@property (retain) NSOperationQueue *userInitiatedOpQueue;
@property BOOL embeddedInApp;
@property (retain) NSArray *cachedExtensionsForThisDevice;
@property (retain) DEDDiagnosticCollector *_diagnosticCollector;
@property (retain) DEDController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (long long)transportType;
- (void)cancelSession:(id)a0;
- (id)_controller;
- (void)scheduleNotificationForSession:(id)a0;
- (void)startDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 deferRunUntil:(id)a2 session:(id)a3;
- (id)_extensionsForSession:(id)a0;
- (void)_logOperations;
- (void)_startDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2 runSetup:(BOOL)a3;
- (void)_streamOperationStatus;
- (void)_syncSessionStatusWithSession:(id)a0 withIdentifiers:(BOOL)a1;
- (void)_syncSessionStatusWithSessionID:(id)a0 withIdentifiers:(BOOL)a1;
- (void)addSessionData:(id)a0 withFilename:(id)a1 forSession:(id)a2;
- (void)adoptFiles:(id)a0 forSession:(id)a1;
- (id)attachmentHandler;
- (void)commitSession:(id)a0;
- (void)configureForEmbedded:(BOOL)a0;
- (id)diagnosticCollector;
- (void)finallyStartDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (void)getSessionStateWithSession:(id)a0;
- (void)getSessionStatusWithSession:(id)a0;
- (void)listAvailableExtensionsForSession:(id)a0;
- (void)loadTextDataForExtensions:(id)a0 localization:(id)a1 sessionID:(id)a2;
- (BOOL)observesOperations;
- (void)pingSession:(id)a0;
- (void)setupDeferredDiagnosticsWithExtensionInfo:(id)a0;
- (void)startDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (void)syncSessionStatusWithSession:(id)a0;
- (void)teardownDeferredDiagnosticsWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (void)terminateExtension:(id)a0 info:(id)a1 session:(id)a2;
- (void)unscheduleNotificationForSession:(id)a0;
- (void)warmUpCaches;

@end
