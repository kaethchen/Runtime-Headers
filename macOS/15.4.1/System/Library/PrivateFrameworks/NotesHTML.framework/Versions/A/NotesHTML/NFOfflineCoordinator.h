@class NSManagedObjectContext, NSMutableSet;
@protocol ICNFMCAccountProxyManager;

@interface NFOfflineCoordinator : NSObject

@property (retain, nonatomic) NSManagedObjectContext *context;
@property (retain, nonatomic) NSMutableSet *accountsWithActions;
@property (retain, nonatomic) id<ICNFMCAccountProxyManager> accountProxyManager;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_contextDidSave:(id)a0;
- (id)initWithContext:(id)a0 accountProxyManager:(id)a1;
- (void)_addInsertedNoteToOfflineQueue:(id)a0;
- (void)_addInsertedFolderToOfflineQueue:(id)a0;
- (void)_addMovedFolderToOfflineQueue:(id)a0 originalParent:(id)a1;
- (void)_addMovedNoteToOfflineQueue:(id)a0 originalFolder:(id)a1;
- (void)_addUpdatedFolderToOfflineQueue:(id)a0;
- (void)_addUpdatedNoteToOfflineQueue:(id)a0;
- (void)_contextWillSave:(id)a0;
- (void)_executeOfflineActions;

@end
