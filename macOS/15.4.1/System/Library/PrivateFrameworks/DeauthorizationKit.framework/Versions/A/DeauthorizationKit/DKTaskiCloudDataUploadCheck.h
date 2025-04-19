@class BRUploadAllFilesOperation, DKSignOutDataSyncWindowController, ACAccountStore, ACAccount, NSWindow;

@interface DKTaskiCloudDataUploadCheck : DKTask

@property (retain) DKSignOutDataSyncWindowController *signOutSyncingWindowController;
@property (retain) NSWindow *hostWindow;
@property (retain) ACAccountStore *store;
@property (retain) ACAccount *primaryAccount;
@property (retain) BRUploadAllFilesOperation *uploadOperation;

- (void).cxx_destruct;
- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)initWithHostWindow:(id)a0;
- (id)taskDescription;
- (BOOL)needsToRun;
- (id)currentAccountPendingChangesContainers;
- (BOOL)iCloudAccountPendingChanges;
- (BOOL)iCloudDesktopEnabled;
- (BOOL)photosPendingUpload;
- (BOOL)photosiCloudLibraryEnabled;
- (id)syncingAppsThatNeedDataUpload;
- (void)uploadiCloudDocumentsWithCompletion:(id /* block */)a0;

@end
