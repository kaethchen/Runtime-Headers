@class NSArray, NSXPCConnection, NSURL, NSXPCInterface;

@interface SPKernelExtensionPolicy : NSObject {
    NSArray *_currentPolicy;
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

@property (readonly, copy, nonatomic) NSArray *currentPolicy;
@property (readonly, copy, nonatomic) NSArray *pendingApprovals;
@property (readonly, nonatomic) BOOL requiresSecurityDowngrade;
@property (readonly, nonatomic) BOOL requiresRebootForInstallation;
@property (readonly, nonatomic) BOOL requiresAuthenticationOnUpdates;
@property (readonly, nonatomic) BOOL requiresAdministratorToApproveUpdates;
@property (readonly, nonatomic) NSURL *currentUAKL;

+ (id)findBundledKernelExtensions:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (void)clearConnection;
- (id)areKernelExtensionsApproved:(id)a0 withError:(id *)a1;
- (BOOL)canLoadKernelExtension:(id)a0 error:(id *)a1;
- (BOOL)canLoadKernelExtensionInCache:(id)a0 error:(id *)a1;
- (BOOL)enableKernelExtensionManagementForMDM:(id)a0 error:(id *)a1;
- (BOOL)getCurrentUAKLHash:(id /* block */)a0 withError:(id *)a1;
- (BOOL)installMDMPayload:(id)a0 withTeams:(id)a1 withExtensions:(id)a2 withContext:(id)a3 error:(id *)a4;
- (BOOL)isKernelExtensionApprovedByUser:(id)a0 withBundleID:(id)a1 error:(id *)a2;
- (void)notifyLoadedKernelExtension:(id)a0 withPath:(id)a1;
- (BOOL)notifyUnsupportedKernelExtension:(id)a0 error:(id *)a1;
- (BOOL)removeMDMPayload:(id)a0 withContext:(id)a1 error:(id *)a2;
- (BOOL)requestKernelExtensionApprovals:(id)a0 withError:(id *)a1;
- (BOOL)setApprovalRequiresAdministrator:(BOOL)a0 error:(id *)a1;
- (BOOL)setUserApprovalAllowed:(BOOL)a0 error:(id *)a1;
- (BOOL)teamIdentifierIsAllowed:(id)a0 error:(id *)a1;
- (BOOL)triggerKernelCollectionRebuildFlow:(unsigned long long)a0 withKernelExtensions:(id)a1 withError:(id *)a2;
- (BOOL)triggerKernelCollectionRebuildForMDM:(id)a0 withContext:(id)a1 error:(id *)a2;
- (BOOL)triggerPanicMedicWithError:(id *)a0;
- (BOOL)triggerRecoveryJumpToSecurityStartupUtilityWithError:(id *)a0;
- (BOOL)updateLastUsedTimes:(id)a0 withError:(id *)a1;
- (BOOL)updatePolicyItems:(id)a0 error:(id *)a1;
- (BOOL)updatePolicyItems:(id)a0 withExternalContext:(id)a1 error:(id *)a2;

@end
