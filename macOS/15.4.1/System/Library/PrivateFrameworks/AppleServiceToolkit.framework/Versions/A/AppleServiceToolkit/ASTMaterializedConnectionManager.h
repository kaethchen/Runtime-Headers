@class NSString, ASTNetworking, ASTIdentity;
@protocol ASTConnectionManagerDelegate;

@interface ASTMaterializedConnectionManager : NSObject <ASTConnectionStatusDelegate, ASTConnectionManager>

@property (retain, nonatomic) ASTNetworking *networking;
@property (retain, nonatomic) NSString *sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ASTConnectionManagerDelegate> delegate;
@property (retain, nonatomic) ASTIdentity *identity;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancelAllTestResults;
- (void)connection:(id)a0 connectionStateChanged:(long long)a1;
- (void)connection:(id)a0 didSendBodyData:(long long)a1 totalBytesSent:(long long)a2 totalBytesExpected:(long long)a3;
- (void)downloadAsset:(id)a0 serverURL:(id)a1 endpoint:(id)a2 destinationFileHandle:(id)a3 allowsCellularAccess:(BOOL)a4 completion:(id /* block */)a5;
- (id)initWithSOCKSProxyServer:(id)a0 port:(id)a1;
- (BOOL)isValidUUID:(id)a0;
- (BOOL)postAuthInfo:(id)a0 allowsCellularAccess:(BOOL)a1;
- (id)postEnrollAllowingCellularAccess:(BOOL)a0;
- (BOOL)postProfile:(id)a0 allowsCellularAccess:(BOOL)a1;
- (id)postRequest:(id)a0 allowsCellularAccess:(BOOL)a1;
- (void)postSealableFile:(id)a0 fileSequence:(id)a1 totalFiles:(id)a2 testId:(id)a3 dataId:(id)a4 allowsCellularAccess:(BOOL)a5 completion:(id /* block */)a6;
- (void)postSelectSelfServiceSuite:(id)a0 withPayloadSigner:(id /* block */)a1 allowsCellularAccess:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)postSessionStatusForIdentities:(id)a0 ticket:(id)a1 timeout:(double)a2 allowsCellularAccess:(BOOL)a3 requestQueuedSuiteInfo:(BOOL)a4 completion:(id /* block */)a5;
- (void)postTestResult:(id)a0 allowsCellularAccess:(BOOL)a1 completion:(id /* block */)a2;
- (void)requestInstructionalPromptDetailsWithInstructionID:(id)a0 type:(id)a1 withPayloadSigner:(id /* block */)a2 language:(id)a3 locale:(id)a4 allowsCellularAccess:(BOOL)a5 completionHandler:(id /* block */)a6;
- (void)requestSelfServiceSuiteResultsWithDiagnosticEventID:(id)a0 withPayloadSigner:(id /* block */)a1 allowsCellularAccess:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)requestSelfServiceSuitesAvailableWithConfigCode:(id)a0 withPayloadSigner:(id /* block */)a1 allowsCellularAccess:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)requestSessionArchiveWithSessionID:(id)a0 withPayloadSigner:(id /* block */)a1 allowsCellularAccess:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
