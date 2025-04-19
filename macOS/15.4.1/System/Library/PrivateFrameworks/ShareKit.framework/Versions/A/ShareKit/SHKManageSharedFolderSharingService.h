@interface SHKManageSharedFolderSharingService : SHKSharingService

- (id)init;
- (BOOL)isEnabled;
- (void)canPerformWithItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)canPerformWithItems:(id)a0;
- (void)performWithItems:(id)a0;
- (void)_launchManageUIForFileURL:(id)a0 completion:(id /* block */)a1;
- (void)_launchManageUIForSharedFolderWithItems:(id)a0 completion:(id /* block */)a1;

@end
