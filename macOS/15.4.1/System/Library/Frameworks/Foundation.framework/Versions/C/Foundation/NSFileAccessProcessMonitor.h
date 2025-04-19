@class NSMutableDictionary, RBSProcessMonitor;

@interface NSFileAccessProcessMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    RBSProcessMonitor *_monitor;
    NSMutableDictionary *_pidToProcessManagers;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)_init;
- (void)addProcessManager:(id)a0 forPID:(int)a1;
- (void)process:(id)a0 receivedUpdate:(id)a1;
- (BOOL)processWithPIDIsSuspended:(int)a0;
- (void)removeProcessManager:(id)a0 forPID:(int)a1;
- (void)updateMonitorPredicate;

@end
