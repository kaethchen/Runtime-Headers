@class NSURL, NSString;

@interface TMHFSBackupListener : NSObject <TMBackupListener>

@property (readonly) NSURL *machineStoreURL;
@property (readonly) NSString *listenerID;

- (void).cxx_destruct;
- (id)changesForDiskDisappear:(id)a0 invalidator:(id)a1;
- (id)changesForDiskMount:(id)a0 invalidator:(id)a1;
- (id)changesForNotification:(id)a0 invalidator:(id)a1;
- (id)initWithMachineStoreURL:(id)a0;
- (id)initialBackupsByStateWithInvalidator:(id)a0 error:(id *)a1;

@end
