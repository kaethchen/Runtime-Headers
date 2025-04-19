@interface TMLocalSnapshotMessenger : NSObject

+ (BOOL)snapshot;
+ (BOOL)unmountLocalSnapshotsForDisk:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_copyReplyToXPCMessage:(id)a0 connectionName:(const char *)a1 timeOut:(double)a2;
+ (id)_copyReplyToXPCMessageWithId:(unsigned long long)a0 connectionName:(const char *)a1 timeOut:(double)a2;
+ (BOOL)_sendMessageWithId:(unsigned long long)a0 disk:(id)a1 date:(id)a2 completionHandler:(id /* block */)a3;
+ (id)createLocalSnapshots;
+ (id)deleteLocalSnapshotsForDates:(id)a0;
+ (id)deleteLocalSnapshotsForDisk:(id)a0;
+ (id)localSnapshotDates;
+ (id)localSnapshotDatesForDisk:(id)a0;
+ (BOOL)mountLocalSnapshotForDate:(id)a0 forDisk:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)mountLocalSnapshotsForDate:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)mountLocalSnapshotsForDisk:(id)a0 completionHandler:(id /* block */)a1;
+ (id)mountedLocalSnapshotsForDisk:(id)a0;
+ (id)purgeLocalSnapshotsForVolumeGroupContaining:(id)a0 purgeAmount:(unsigned long long)a1 urgency:(int)a2;
+ (BOOL)unmountLocalSnapshotForDate:(id)a0 forDisk:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)unmountLocalSnapshotsForDate:(id)a0 completionHandler:(id /* block */)a1;

@end
