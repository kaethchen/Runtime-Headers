@class DEDIDSConnection, NSString, NSObject;
@protocol OS_os_log;

@interface DEDIDSOutbound : NSObject <DEDWorkerProtocol, DEDClientProtocol, DEDSecureArchiving, DEDNotifier>

@property (weak) DEDIDSConnection *connection;
@property (retain) NSString *deviceAddress;
@property (retain) NSString *sessionID;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;
+ (id)outboundWithSessionID:(id)a0 withDeviceAtAddress:(id)a1 connection:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (long long)transportType;
- (id)clientAddress;
- (void)cancelSession:(id)a0;
- (void)scheduleNotificationForSession:(id)a0;
- (void)startDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 deferRunUntil:(id)a2 session:(id)a3;
- (void)uploadProgress:(unsigned long long)a0 total:(unsigned long long)a1 sessionID:(id)a2;
- (void)addSessionData:(id)a0 withFilename:(id)a1 forSession:(id)a2;
- (void)adoptFiles:(id)a0 forSession:(id)a1;
- (void)commitSession:(id)a0;
- (void)compressionProgress:(unsigned long long)a0 total:(unsigned long long)a1 sessionID:(id)a2;
- (void)deviceSupportsDiagnosticExtensions:(id)a0 session:(id)a1;
- (void)didAdoptFilesWithError:(id)a0 forSession:(id)a1;
- (void)didCancelSession:(id)a0;
- (void)didCommitSession:(id)a0;
- (void)didGetState:(long long)a0 info:(id)a1 sessionID:(id)a2;
- (void)didLoadTextDataForExtensions:(id)a0 localization:(id)a1 session:(id)a2;
- (void)finishedDiagnosticWithIdentifier:(id)a0 result:(id)a1 session:(id)a2;
- (void)getSessionStateWithSession:(id)a0;
- (void)getSessionStatusWithSession:(id)a0;
- (void)hasCollected:(id)a0 isCollecting:(id)a1 inSession:(id)a2;
- (void)hasCollected:(id)a0 isCollecting:(id)a1 withIdentifiers:(id)a2 inSession:(id)a3;
- (void)listAvailableExtensionsForSession:(id)a0;
- (void)loadTextDataForExtensions:(id)a0 localization:(id)a1 sessionID:(id)a2;
- (void)pingSession:(id)a0;
- (void)pongSession:(id)a0;
- (void)presentNotificationForSession:(id)a0;
- (void)removeNotificationForSession:(id)a0;
- (void)startDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (void)syncSessionStatusWithSession:(id)a0;
- (void)terminateExtension:(id)a0 info:(id)a1 session:(id)a2;
- (void)unscheduleNotificationForSession:(id)a0;

@end
