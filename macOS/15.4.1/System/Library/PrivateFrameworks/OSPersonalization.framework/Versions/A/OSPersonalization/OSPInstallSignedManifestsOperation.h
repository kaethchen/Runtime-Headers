@class NSURL;

@interface OSPInstallSignedManifestsOperation : OSPOperation

@property (retain) NSURL *sandboxURL;
@property (retain) NSURL *apTicketURL;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (BOOL)_installSandbox;
- (BOOL)_copyAPTicketToSandbox;
- (BOOL)_copyExtraManifestRootsToSandbox;
- (BOOL)_copySignedManifestsToSandbox;
- (BOOL)_copySplatTicketToSandbox;
- (BOOL)_createSandboxDirectory;
- (BOOL)_findOSTicket;

@end
