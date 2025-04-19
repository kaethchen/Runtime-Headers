@class SFShareSheetService, NSString, SFShareSheetConnectionContext;
@protocol SFShareSheetSessionManagerDelegate;

@interface SFShareSheetSessionManager : NSObject <SFShareSheetServiceDelegate>

@property (retain, nonatomic) SFShareSheetService *service;
@property (retain, nonatomic) SFShareSheetConnectionContext *connectionContext;
@property (weak, nonatomic) id<SFShareSheetSessionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)_connect;
- (id)requestSessionForConfiguration:(id)a0;
- (void)_handleConnectionCompletion;
- (void)_reconnect;
- (void)canShareFileURL:(id)a0 completion:(id /* block */)a1;
- (void)createSharingURLForCollaborationRequest:(id)a0 completion:(id /* block */)a1;
- (void)deleteSharingURL:(id)a0 containerSetupInfo:(id)a1 completion:(id /* block */)a2;
- (void)performPeopleSuggestion:(id)a0;
- (void)performRTSRequestForFileURL:(id)a0 completion:(id /* block */)a1;
- (void)requestAddParticipantsAllowedForRequest:(id)a0 completion:(id /* block */)a1;
- (id)requestCollaborativeModeForContentIdentifier:(id)a0;
- (id)requestDefaultShareModeCollaborationForURL:(id)a0;
- (void)requestIsShareOwnerForFileURL:(id)a0 share:(id)a1 completion:(id /* block */)a2;
- (void)requestIsShareOwnerOrAdminForFileURL:(id)a0 completion:(id /* block */)a1;
- (id)requestRestrictedSharingServices;
- (void)requestShareStatusForURL:(id)a0 completion:(id /* block */)a1;
- (void)requestSharedURLForFileOrFolderURL:(id)a0 completion:(id /* block */)a1;
- (void)saveCollaborativeMode:(id)a0 forContentIdentifier:(id)a1;
- (void)shareSheetService:(id)a0 didDisconnectWithError:(id)a1;
- (void)shareSheetService:(id)a0 didUpdateSession:(id)a1 withChangeDetails:(id)a2;
- (void)shareSheetService:(id)a0 performActivity:(id)a1;
- (void)shareSheetSessionEndedWithTestingSnapshot:(id)a0;

@end
