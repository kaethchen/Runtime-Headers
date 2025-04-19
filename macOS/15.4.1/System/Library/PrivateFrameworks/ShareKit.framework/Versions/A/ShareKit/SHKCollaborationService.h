@class SFShareSheetSessionManager, NSString;

@interface SHKCollaborationService : NSObject <SFCollaborationService>

@property (retain, nonatomic) SFShareSheetSessionManager *sessionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)requestCollaborativeModeForContentIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canShareFileURL:(id)a0;
- (void)deleteSharingURL:(id)a0 containerSetupInfo:(id)a1 completionHandler:(id /* block */)a2;
- (void)isShareOwnerForFileURL:(id)a0 share:(id)a1 completionHandler:(id /* block */)a2;
- (void)isShareOwnerOrAdminForFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestAddParticipantsAllowedForURL:(id)a0 share:(id)a1 completionHandler:(id /* block */)a2;
- (id)requestCollaborativeModeForContentIdentifier:(id)a0;
- (void)requestDefaultShareModeCollaborationForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestSharedURLForFileOrFolderURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveCollaborativeMode:(id)a0 forContentIdentifier:(id)a1;
- (void)shareStatusForURL:(id)a0 completionHandler:(id /* block */)a1;

@end
