@class NSString, NSDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SMSystem_Daemon_RemoteTMDiskShare : SMSystem_Daemon

@property (retain) NSDictionary *parentLongTermIdentifier;
@property (retain) NSString *mountPoint;
@property (retain) NSString *humanName;
@property long long sharedSystems;
@property long long dmgsProcessed;
@property unsigned long long flags;
@property (retain) NSMutableSet *timeMachineSystems;
@property (retain) NSObject<OS_dispatch_queue> *timeMachineSystemsQueue;
@property (retain) NSString *shareName;
@property (readonly) BOOL usesGuestAccess;
@property (readonly) BOOL usesSinglePassword;
@property (readonly) BOOL requiresUsername;
@property (readonly) BOOL mountedFromServer;
@property (readonly) BOOL mountWithSMB;
@property (readonly) BOOL mountWithAFP;

+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)keyPathsForValuesAffectingAvailableAction;
+ (id)keyPathsForValuesAffectingAvailableActionLabel;
+ (id)keyPathsForValuesAffectingDisplayState;
+ (id)keyPathsForValuesAffectingVolumeName;
+ (unsigned long long)requiredScannerState;

- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)invalidate;
- (id)UUID;
- (id)displayName;
- (id)systemVersion;
- (id)accessibilityDescription;
- (id)systemName;
- (BOOL)isInternal;
- (void)unmount;
- (BOOL)isMounted;
- (void)mount;
- (id)volumeName;
- (unsigned long long)systemType;
- (BOOL)availableAction;
- (id)childSystems;
- (void)cleanExSparseBundleMountPaths;
- (id)createUniqueMountPointFolderForSparseBundleMounts;
- (id)initWithURL:(id)a0 humanName:(id)a1 flags:(unsigned long long)a2 withParentTimeCapsuleLongTermIdentifier:(id)a3;
- (BOOL)isMountableByUser;
- (BOOL)isMounting;
- (id)modelIcon;
- (BOOL)mount:(BOOL)a0;
- (BOOL)mountNetAuth:(BOOL)a0;
- (void)registerTimeMachineSystem:(id)a0;
- (void)searchForBackupsAtMountpoint:(id)a0;
- (BOOL)selectableSystem;
- (id)terseDescription;
- (void)unRegisterTimeMachineSystem:(id)a0;
- (id)volumeIcon;

@end
