@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMDUIDialogPresenter : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) struct __CFUserNotification { } *currentNotification;
@property (retain, nonatomic) id currentContext;
@property (retain, nonatomic) NSMutableArray *pendingContexts;
@property (nonatomic) BOOL selectedByPeerDevice;
@property (nonatomic) BOOL peerDeviceAcceptedSelection;
@property (readonly, nonatomic) BOOL shouldSkipAuthPromptDialog;

+ (id)sharedUIDialogPresenter;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)displayKeychainSyncForHome:(id)a0 withContext:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)_addCurrentNotification:(struct __CFUserNotification { } *)a0 withContext:(id)a1;
- (BOOL)_addToPendingContext:(id)a0;
- (void)_displayKeychainSyncForHome:(id)a0 withContext:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)_displayUpgradeNeededWithContext:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)_displayiCloudSwitchWithContext:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_isPendingContext:(id)a0;
- (BOOL)_presentDialogWithInfo:(id)a0 options:(unsigned long long)a1 targetResponse:(unsigned long long)a2 textField:(id *)a3 withContext:(id)a4;
- (BOOL)_presentDialogWithInfo:(id)a0 options:(unsigned long long)a1 targetResponse:(unsigned long long)a2 textField:(id *)a3 withContext:(id)a4 selectedByPeerDevice:(BOOL *)a5 timeout:(double)a6;
- (BOOL)_presentDialogWithInfo:(id)a0 options:(unsigned long long)a1 textField:(id *)a2 withContext:(id)a3;
- (BOOL)_removeCurrentNotification:(struct __CFUserNotification { } *)a0 currentSelection:(BOOL)a1 selectedByPeerDevice:(BOOL *)a2 andContext:(id)a3;
- (void)_requestUserPermissionForBridgeAccessory:(id)a0 withContext:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)_requestUserPermissionForDeletionOfHomeWithName:(id)a0 withContext:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)_requestUserPermissionForLegacyWACAccessory:(id)a0 withContext:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)_requestUserPermissionForRemovalOfRouter:(id)a0 accessoriesRequiringManualReconfiguration:(id)a1 withContext:(id)a2 queue:(id)a3 completionHandler:(id /* block */)a4;
- (void)_requestUserPermissionForRemovalOfSpecificWiFiCredentialedAccessory:(id)a0 withContext:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)_requestUserPermissionForUnauthenticatedAccessory:(id)a0 withContext:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)_requestUserPermissionForUnauthenticatedAliroLockWithContext:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)_requestUserPermissionWithAccessoryPPIDInfo:(id)a0 name:(id)a1 category:(id)a2 withContext:(id)a3 queue:(id)a4 completionHandler:(id /* block */)a5;
- (void)_showUserDialogForIncompatibleAccessory:(id)a0 name:(id)a1 category:(id)a2 withContext:(id)a3 queue:(id)a4 completionHandler:(id /* block */)a5;
- (void)confirmReportAccessory:(id)a0 context:(id)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)dismissPendingDialogDueToPeerDeviceSelection:(BOOL)a0 context:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)dismissPendingDialogWithContext:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)displayExecutionErrorOfTrigger:(id)a0 partialSuccess:(BOOL)a1 context:(id)a2 completionQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)displayRestrictedBluetoothCharacteristicsWarningWithDeviceName:(id)a0 completionHandler:(id /* block */)a1;
- (void)displayUpgradeNeededWithContext:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)displayiCloudSwitchWithContext:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestUserPermissionForBridgeAccessory:(id)a0 withContext:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestUserPermissionForDeletionOfHomeWithName:(id)a0 withContext:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestUserPermissionForLegacyWACAccessory:(id)a0 withContext:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestUserPermissionForRemovalOfRouter:(id)a0 accessoriesRequiringManualReconfiguration:(id)a1 withContext:(id)a2 queue:(id)a3 completionHandler:(id /* block */)a4;
- (void)requestUserPermissionForRemovalOfSpecificWiFiCredentialedAccessory:(id)a0 withContext:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)a0 withContext:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestUserPermissionForUnauthenticatedAliroLockWithContext:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestUserPermissionWithAccessoryPPIDInfo:(id)a0 name:(id)a1 category:(id)a2 withContext:(id)a3 queue:(id)a4 completionHandler:(id /* block */)a5;
- (void)showUserDialogForIncompatibleAccessory:(id)a0 name:(id)a1 category:(id)a2 withContext:(id)a3 queue:(id)a4 completionHandler:(id /* block */)a5;

@end
