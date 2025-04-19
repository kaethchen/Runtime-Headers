@class NSString, NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface EFFileProtectionHandler : NSObject <EFLoggable> {
    NSMutableArray *_moveFileQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_moveQueuedFiles;
- (void)enqueueMovingFile:(id)a0 toProtectionClass:(id)a1;
- (void)enqueueMovingFileProtections:(id)a0;
- (void)enqueueMovingFiles:(id)a0 toProtectionClass:(id)a1;
- (BOOL)moveFile:(id)a0 toProtectionClass:(id)a1;
- (void)registerMoveFileBackgroundTask;
- (void)unregisterMoveFileBackgroundTask;

@end
