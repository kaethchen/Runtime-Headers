@class NSString, NSXPCConnection;
@protocol SFShareSheetServiceDelegate;

@interface SFShareSheetService : NSObject <SFShareSheetClientProtocol, NSXPCConnectionDelegate, SFShareSheetServerProtocol> {
    BOOL _invalidateCalled;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<SFShareSheetServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (void)performAction:(id)a0;
- (void)_connectionInvalidated;
- (void)_ensureXPCStarted;
- (void)_connectionInterrupted;
- (void)_ensureConnectionEstablished;
- (id)_remoteObjectProxy;
- (id)_synchronousRemoteObjectProxy;
- (void)canShareFileURL:(id)a0 completion:(id /* block */)a1;
- (void)createSharingURLForCollaborationRequest:(id)a0 completion:(id /* block */)a1;
- (void)deleteSharingURL:(id)a0 containerSetupInfo:(id)a1 completion:(id /* block */)a2;
- (void)establishConnectionWithCompletionHandler:(id /* block */)a0;
- (void)performActivity:(id)a0;
- (void)performRTSRequestForFileURL:(id)a0 completion:(id /* block */)a1;
- (void)requestAddParticipantsAllowedForRequest:(id)a0 completion:(id /* block */)a1;
- (void)requestCollaborativeModeForContentIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)requestDefaultShareModeCollaborationForURL:(id)a0 completion:(id /* block */)a1;
- (void)requestIsShareOwnerOrAdminForFileURL:(id)a0 completion:(id /* block */)a1;
- (void)requestRestrictedSharingServicesWithCompletion:(id /* block */)a0;
- (void)requestSessionForConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)requestShareStatusForURL:(id)a0 completion:(id /* block */)a1;
- (void)requestSharedURLForFileOrFolderURL:(id)a0 completion:(id /* block */)a1;
- (void)saveCollaborativeMode:(id)a0 forContentIdentifier:(id)a1;
- (void)sessionDidUpdate:(id)a0 withChangeDetails:(id)a1;
- (void)shareSheetSessionEndedWithTestingSnapshot:(id)a0;
- (void)startSessionWithContext:(id)a0 completion:(id /* block */)a1;
- (void)stopSessionWithResult:(id)a0;

@end
