@class DMManager, DMCoreStorage, NSMutableArray;

@interface IFDMManager : NSObject {
    struct __DASession { } *_daSession;
    struct __DASession { } *_daApprovalSession;
    DMManager *_dmManager;
    DMCoreStorage *_dmCoreStorage;
    NSMutableArray *_blockedDisks;
}

+ (void)initialize;
+ (void)setDelegate:(id)a0;
+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)setupDM;
- (id)blockedDisks;
- (void)coreStorageLVGAppeared:(id)a0;
- (void)coreStorageLVGChanged:(id)a0;
- (void)coreStorageLVGChangedNotificationHandler:(id)a0;
- (void)coreStorageLVGDiscoveredNotificationHandler:(id)a0;
- (void)coreStorageLVGTerminated:(id)a0;
- (void)coreStorageLVGTerminatedNotificationHandler:(id)a0;
- (void)coreStorageVolumeChangedNotificationHandler:(id)a0;
- (void)coreStorageVolumeDiscoveredNotificationHandler:(id)a0;
- (void)coreStorageVolumeTerminatedNotificationHandler:(id)a0;
- (struct __DADisk { } *)diskForDiskIdentifier:(id)a0;
- (struct __DASession { } *)getDASession;
- (id)getDMCoreStorage;
- (id)getDMManager;
- (id)logicalVolumesForLVG:(id)a0;
- (void)releaseDisk:(id)a0;
- (BOOL)reserveDisk:(id)a0;
- (void)startCSNotifications:(id)a0;

@end
