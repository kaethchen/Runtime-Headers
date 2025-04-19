@class NSString;

@interface SMDSystemScanner_XPCClientConnection : SMDXPCClientConnection <SMDPScannerProtocol, SMSystemScannerChangesProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)daemonProtocolInterface;
+ (id)daemonProtocolInterfaceInstance;

- (id)init;
- (void)invalidate;
- (void)start;
- (void)actualScannerState:(id /* block */)a0;
- (void)addNonBonjourRemoteShare:(id)a0;
- (void)mount:(id)a0;
- (void)mount:(id)a0 withPassword:(id)a1;
- (void)primaryIDForNewSystemCreatedWithMountPoint:(id)a0 daDiskID:(id)a1 remoteDiskID:(id)a2 volumeURL:(id)a3 andReply:(id /* block */)a4;
- (void)setFinalSelectionForSystemWithPrimaryIdentifier:(id)a0;
- (void)systemScannerAddedSystem:(id)a0;
- (void)systemScannerRemovedSystem:(id)a0;
- (void)systemScannerRequestsHighlightOfSystem:(id)a0;
- (void)systemScannerSystemChanged:(id)a0 onSystem:(id)a1;
- (void)unmount:(id)a0;
- (id)xpcDictFromSystem:(id)a0 includeOneTimeData:(BOOL)a1;

@end
