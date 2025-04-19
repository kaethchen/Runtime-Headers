@class NSDictionary, NSMutableSet, NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, CPUI_SA_CloudConfigurationManagerDelegate;

@interface CPUI_SA_CloudConfigurationHelper : NSObject

@property (retain) id<CPUI_SA_CloudConfigurationManagerDelegate> delegate;
@property (retain) NSMutableSet *blockNotificationObservers;
@property (retain) NSObject<OS_dispatch_queue> *mcxQueue;
@property int deviceRegisteredWithDEP;
@property BOOL enrolledWithMDM;
@property (retain) NSDictionary *cloudConfiguration;
@property (retain) NSError *cloudConfigurationError;
@property BOOL waitForCloudConfigCompleted;
@property unsigned long long depConfigStatus;
@property (retain) NSObject<OS_dispatch_semaphore> *readySemaphore;
@property BOOL displayManagementPanePending;
@property BOOL depNagMode;

+ (id)helperWithDelegate:(id)a0;
+ (BOOL)shouldShowDEPNagUI;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isManaged;
- (void)_APNSCheckForDEPStatusCompleted:(BOOL)a0;
- (void)_getCachedCloudConfiguration;
- (void)_getCachedSetupInfo;
- (void)_receivedCloudConfiguration:(id)a0 error:(id)a1;
- (void)_startGetActivationRecordIfNeeded;
- (id)cloudConfigurationStatusDesc;
- (void)commonStart;
- (unsigned long long)depNagOptions;
- (void)enrollWithMDMInWindow:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (BOOL)isManagedForMode:(unsigned long long)a0;
- (void)networkBecameAvailable;
- (void)networkBecameUnavailable;
- (void)recordManualAccountCreation:(id)a0;
- (BOOL)shouldShowRemoteManagementPane;
- (BOOL)shouldSkipOptionalSoftwareUpdate;
- (void)startFetchCloudConfigurationInWindow:(id)a0 options:(id)a1;
- (void)startForDEPNagModeWithOptions:(id)a0;
- (void)startForMacBuddyWithOptions:(id)a0;
- (void)startForMiniBuddyWithOptions:(id)a0;
- (void)userSnoozedDEPNag;
- (BOOL)waitForManagementStatusUntilInterval:(double)a0;
- (BOOL)waitForManagementStatusUntilInterval:(double)a0 force:(BOOL)a1;

@end
