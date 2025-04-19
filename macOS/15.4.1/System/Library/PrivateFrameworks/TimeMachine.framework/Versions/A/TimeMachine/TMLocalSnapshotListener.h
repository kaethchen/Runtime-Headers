@class NSURL, NSString;

@interface TMLocalSnapshotListener : NSObject <TMBackupListener>

@property (readonly) NSURL *liveVolumeMountPoint;
@property (readonly) NSString *listenerID;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSourceVolumeMountPoint:(id)a0;
- (id)changesForDiskDisappear:(id)a0 invalidator:(id)a1;
- (id)changesForDiskMount:(id)a0 invalidator:(id)a1;
- (id)changesForNotification:(id)a0 invalidator:(id)a1;
- (id)initialBackupsByStateWithInvalidator:(id)a0 error:(id *)a1;

@end
