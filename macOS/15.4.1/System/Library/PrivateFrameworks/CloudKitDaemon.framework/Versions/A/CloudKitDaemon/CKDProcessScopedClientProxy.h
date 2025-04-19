@class NSString, NSDictionary, CKEntitlements, CKDXPCConnection;
@protocol CKXPCProcessScopedClient;

@interface CKDProcessScopedClientProxy : NSObject

@property (retain) id<CKXPCProcessScopedClient> processScopedClientProxyCreator;
@property (weak, nonatomic) CKDXPCConnection *clientConnection;
@property (retain, nonatomic) NSDictionary *connectionEntitlements;
@property (nonatomic) long long hasValidatedEntitlementsTernary;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *processBinaryName;
@property (readonly, nonatomic) NSString *procName;
@property (readonly, getter=isSandboxed) BOOL sandboxed;
@property (nonatomic) unsigned int clientSDKVersion;
@property (readonly, nonatomic) CKEntitlements *clientEntitlements;
@property (nonatomic) BOOL isClientMainBundleAppleExecutable;

- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (id)CKPropertiesDescription;
- (id)getFileMetadataWithFileHandle:(id)a0 openInfo:(id)a1 error:(id *)a2;
- (void)handleSignificantIssueBehavior:(unsigned long long)a0 reason:(id)a1;
- (void)noteSystemIsAvailable;
- (void)_getProcessScopedClientProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)canOpenFileAtURL:(id)a0;
- (void)getProcessScopedClientProxySynchronous:(BOOL)a0 errorHandler:(id /* block */)a1 clientProxyHandler:(id /* block */)a2;
- (BOOL)hasValidatedEntitlements;
- (id)initWithClientConnection:(id)a0;
- (id)issueSandboxExtensionForItem:(id)a0 error:(id *)a1;
- (BOOL)processIsAttached;

@end
