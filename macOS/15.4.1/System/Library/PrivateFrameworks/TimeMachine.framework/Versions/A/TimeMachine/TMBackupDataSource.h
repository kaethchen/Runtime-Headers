@class NSObject, NSArray, TMXPCConnectionInvalidator, NSMutableSet, NSMutableArray, TMVFSEventObserver;
@protocol OS_dispatch_queue;

@interface TMBackupDataSource : NSObject

@property (readonly, copy) id /* block */ stateChangeBlock;
@property (readonly) unsigned long long options;
@property (readonly) NSObject<OS_dispatch_queue> *prepareQueue;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) TMVFSEventObserver *observer;
@property (readonly) NSMutableArray *listeners;
@property (readonly) NSMutableSet *installedListenerIDs;
@property (readonly) NSArray *listenersToAdd;
@property (readonly) TMXPCConnectionInvalidator *invalidator;
@property (readonly) NSMutableSet *foundDates;
@property (readonly) NSMutableSet *deletedDates;

+ (id)_allDestinationIDs;
+ (void)checkBrowsingAvailabilityWithMask:(unsigned long long)a0 completion:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)_backup:(id)a0 changedState:(unsigned long long)a1;
- (void)_backups:(id)a0 changedState:(unsigned long long)a1;
- (void)_dispatchStateChanges:(id)a0;
- (void)_handleBackupNotification:(id)a0;
- (void)_handleMountNotificationWithDisk:(id)a0;
- (void)_installListenerForDisk:(id)a0;
- (void)_installNewBackupListener:(id)a0;
- (id)_mountDestinationForDestinationID:(id)a0 error:(id *)a1;
- (BOOL)_shouldNotifyDelegateOfStateChange:(unsigned long long)a0 forDate:(id)a1;
- (void)_startObserversOnQueue:(id)a0;
- (id)initForAllDestinations:(id *)a0 stateChangeBlock:(id /* block */)a1;
- (id)initForLocalSnapshotsOfVolume:(id)a0 error:(id *)a1 stateChangeBlock:(id /* block */)a2;
- (id)initWithBackupVolumeMountPoint:(id)a0 error:(id *)a1 stateChangeBlock:(id /* block */)a2;
- (id)initWithMachineStoreURL:(id)a0 error:(id *)a1 stateChangeBlock:(id /* block */)a2;
- (id)initWithOptions:(unsigned long long)a0 listenersToAdd:(id)a1 stateChangeBlock:(id /* block */)a2;
- (void)mountAllDestinations;

@end
