@class NSString;
@protocol MFEWSMailboxReconcileTaskOperationDelegate;

@interface MFEWSMailboxReconcileTaskOperation : MFEWSNetworkTaskOperation

@property (readonly, copy, nonatomic) NSString *folderIDString;
@property (copy, nonatomic) NSString *currentSyncState;
@property (weak, nonatomic) id<MFEWSMailboxReconcileTaskOperationDelegate> delegate;

+ (long long)_maxChangesReturned;
+ (id)_newRequestWithFolderID:(id)a0 syncState:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (Class)_supportedClassForItem:(id)a0;
- (id)initWithFolderIDString:(id)a0 initialSyncState:(id)a1;

@end
