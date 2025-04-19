@class TMDiskImage, NSString, NSDictionary, NSURL, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SMSystem_Daemon_TMSparseBundle : SMSystem_Daemon

@property (retain) TMDiskImage *tmSparseBundle;
@property (retain) NSMutableSet *timeMachineSystems;
@property unsigned long long totalSystems;
@property unsigned long long foundSystems;
@property (retain) NSURL *volume;
@property (retain) NSURL *sparseBundleURL;
@property (retain) NSMutableSet *mountPoints;
@property BOOL encryptedBundle;
@property (retain) NSString *systemName;
@property (retain) NSObject<OS_dispatch_queue> *timeMachineSystemsQueue;
@property (retain) NSObject<OS_dispatch_queue> *mountPointsQueue;
@property (retain) NSDictionary *parentLongTermIdentifier;

+ (BOOL)isPurgeable:(id)a0;
+ (id)keyPathsForValuesAffectingAvailableAction;
+ (id)keyPathsForValuesAffectingModelIcon;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (id)accessibilityDescription;
- (void)unmount;
- (BOOL)isMounted;
- (void)mount;
- (id)volumeName;
- (unsigned long long)systemType;
- (BOOL)availableAction;
- (id)childSystems;
- (id)initWithSparseBundle:(id)a0 onVolume:(id)a1 withParentLongTermIdentifier:(id)a2;
- (id)modelIcon;
- (void)mountSparseBundleBackupsWithPassword:(id)a0;
- (void)mountWithCredentials:(id)a0;
- (void)registerTimeMachineSystem:(id)a0;
- (BOOL)selectableSystem;
- (id)terseDescription;
- (void)unRegisterTimeMachineSystem:(id)a0;
- (void)updateTotalSystems:(unsigned long long)a0;
- (void)volumeMounted:(id)a0;

@end
