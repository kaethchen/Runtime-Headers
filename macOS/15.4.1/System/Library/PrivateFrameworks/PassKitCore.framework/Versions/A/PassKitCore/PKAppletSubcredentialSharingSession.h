@interface PKAppletSubcredentialSharingSession : PKDASession

+ (id)createPendingSessionWithDelegate:(id)a0;
+ (id)createSessionWithDelegate:(id)a0;

- (BOOL)startSession;
- (void)acceptSharingInvitation:(id)a0 encryptedProductPlanIdentifierContainer:(id)a1 completion:(id /* block */)a2;
- (void)accountAttestionRequestForCredential:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)cancelSharingInvitationWithIdentifier:(id)a0;
- (void)getPretrackRequestForKeyWithIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)getProductPlanIdentifierRequestForInvitationWithIdentifier:(id)a0 fromMailboxIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)requestSharingInvitation:(id)a0 from:(id)a1 completion:(id /* block */)a2;
- (void)routingInformationForInvitationWithIdentifier:(id)a0 fromMailboxIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendSharingInvitation:(id)a0 forInvitationRequest:(id)a1 completion:(id /* block */)a2;
- (void)sendSharingInvitationWithRequest:(id)a0 auth:(id)a1 completion:(id /* block */)a2;
- (void)setAccountAttestation:(id)a0 forCredential:(id)a1 withCompletion:(id /* block */)a2;

@end
