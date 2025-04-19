@class NSURL, NSString;

@interface TMAPFSBackupListener : NSObject <TMBackupListener>

@property (readonly) NSURL *machineStoreURL;
@property (readonly, copy) NSString *liveVolumeUUID;
@property (readonly) NSString *listenerID;

+ (id)_extractDateFromBackupMountPoint:(id)a0;
+ (id)_extractLiveVolumeUUIDFromBackupMountPoint:(id)a0;

- (void).cxx_destruct;
- (id)changesForDiskDisappear:(id)a0 invalidator:(id)a1;
- (id)changesForDiskMount:(id)a0 invalidator:(id)a1;
- (id)changesForNotification:(id)a0 invalidator:(id)a1;
- (id)initWithMachineStoreURL:(id)a0;
- (id)initialBackupsByStateWithInvalidator:(id)a0 error:(id *)a1;

@end
