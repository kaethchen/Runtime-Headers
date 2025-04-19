@class NSString, AAFXPCSession;

@interface AKSignInWithAppleController : NSObject <AAFXPCSessionDelegate>

@property (retain, nonatomic) AAFXPCSession *remoteService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cancelAppIconRequestForClientID:(id)a0 completion:(id /* block */)a1;
- (void)configureRemoteInterface:(id)a0;
- (void)deleteAllItemsFromDepartedGroupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchAccountsWithContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchAppIconForClientID:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)fetchEULAForClientID:(id)a0 completion:(id /* block */)a1;
- (void)fetchSharedGroupsWithContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchSignInWithApplePrivateEmailCountWithCompletion:(id /* block */)a0;
- (id)initWithXPCSession:(id)a0;
- (void)leaveGroupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)participantRemovedWithContext:(id)a0 participantID:(id)a1 completion:(id /* block */)a2;
- (void)performHealthCheckWithContext:(id)a0 completion:(id /* block */)a1;
- (void)performTokenRotationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)remoteServiceDidInterrupt;
- (void)remoteServiceDidInvalidate;
- (void)revokeAcccountWithContext:(id)a0 completion:(id /* block */)a1;
- (void)shareAccountWithContext:(id)a0 withGroup:(id)a1 completion:(id /* block */)a2;
- (void)unshareAccountWithContext:(id)a0 completion:(id /* block */)a1;

@end
