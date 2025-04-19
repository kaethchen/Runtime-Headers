@class IDSService, NSString;

@interface IMDQuickSwitchController : NSObject <IDSServiceDelegate>

@property (retain, nonatomic) IDSService *quickSwitchIDSService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (id)_defaultPairedDevice;
- (void)_cleanUpTemporaryFiles;
- (void)_compressFileAtPath:(id)a0 toPath:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)_decompressFileAtPath:(id)a0 toPath:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)_deleteFileAtPath:(id)a0;
- (long long)_getCurrentDBVersion;
- (id)_getDowngradedDBPath;
- (unsigned long long)_getFileSizeAtPath:(id)a0;
- (id)_getTempDBPath;
- (id)_getTempRecentsPath;
- (id)_getTruncatedDBPath;
- (id)_getZippedDBPath;
- (id)_getZippedRecentsPath;
- (void)_handleDBVersionResponse:(id)a0;
- (void)_handleIncomingDB:(id)a0;
- (void)_handleIncomingRecents:(id)a0;
- (void)_handleQuickSwitchCompleted:(id)a0;
- (void)_handleQuickSwitchInitiateRequest;
- (void)_handleRecentsRequest;
- (void)_initiateQuickSwitch;
- (BOOL)_isPairedDeviceInProxyMode;
- (void)_notifyPSYDataSent;
- (void)_notifyPSYWithResult:(BOOL)a0;
- (void)_quickSwitchCompleted:(BOOL)a0;
- (void)_sendDBVersionResponse:(long long)a0;
- (BOOL)_sendIDSFile:(id)a0 withCommand:(long long)a1;
- (BOOL)_sendIDSMessage:(id)a0;
- (void)_sendQuickSwitchCompletedWithResult:(BOOL)a0;
- (void)_sendRecentsRequest;
- (BOOL)_sendZippedFileAtPath:(id)a0 withCommand:(long long)a1;
- (BOOL)_truncateDBToPath:(id)a0;
- (void)dummyMethod;

@end
