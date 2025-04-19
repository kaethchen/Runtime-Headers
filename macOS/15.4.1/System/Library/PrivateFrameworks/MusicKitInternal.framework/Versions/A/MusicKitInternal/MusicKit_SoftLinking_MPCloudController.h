@class NSString, MPCloudController;

@interface MusicKit_SoftLinking_MPCloudController : NSObject {
    MPCloudController *_underlyingCloudController;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPCloudController *sharedCloudController;
@property (class, readonly, nonatomic) NSString *canShowCloudDownloadButtonsDidChangeNotificationName;
@property (class, readonly, nonatomic) NSString *isUpdateInProgressDidChangeNotificationName;

@property (readonly, nonatomic) BOOL canShowCloudDownloadButtons;
@property (readonly, nonatomic, getter=isUpdateInProgress) BOOL updateInProgress;
@property (readonly, nonatomic, getter=isCloudLibraryEnabled) BOOL cloudLibraryEnabled;
@property (readonly, nonatomic, getter=isInitialImport) BOOL initialImport;

+ (id)controllerWithUserIdentity:(id)a0;
+ (id)instanceManager;

- (void)dealloc;
- (void).cxx_destruct;
- (void)becomeActive;
- (void)resignActive;
- (long long)cloudAddToPlaylistBehavior;
- (void)disableCloudLibraryWithCompletionHandler:(id /* block */)a0;
- (void)loadCloudMusicLibraryUpdateProgressWithCompletionHandler:(id /* block */)a0;
- (void)resetInvitationURLForCollaborationWithPersistentID:(id)a0 completion:(id /* block */)a1;
- (void)respondToPendingCollaborator:(id)a0 onCollaborationWithPersistentID:(id)a1 withApproval:(BOOL)a2 completion:(id /* block */)a3;
- (void)setCloudAddToPlaylistBehavior:(long long)a0 completionHandler:(id /* block */)a1;
- (void)updateSubscribedPlaylistWithSagaID:(unsigned long long)a0 ignoreMinRefreshInterval:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_handleCanShowCloudDownloadButtonsDidChangeNotification:(id)a0;
- (void)_handleIsUpdateInProgressDidChangeNotificationName:(id)a0;
- (id)_initWithUnderlyingCloudController:(id)a0;
- (void)enableCloudLibraryWithCompletionHandler:(id /* block */)a0;
- (void)updateSharingMode:(long long)a0 onCollaborationWithPersistentID:(id)a1 completion:(id /* block */)a2;

@end
