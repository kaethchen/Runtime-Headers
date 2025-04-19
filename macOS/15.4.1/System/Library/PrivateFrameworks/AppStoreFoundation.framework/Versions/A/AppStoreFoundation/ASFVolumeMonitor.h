@class NSArray, NSString, NSMutableArray, NSObject;
@protocol ASFVolumeMonitorDelegate, OS_dispatch_semaphore;

@interface ASFVolumeMonitor : NSObject <SKManagerListener> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_installable;
    NSMutableArray *_available;
    BOOL _initialLoadComplete;
    NSObject<OS_dispatch_semaphore> *_initialLoadSemaphore;
}

@property (weak) id<ASFVolumeMonitorDelegate> delegate;
@property (readonly, copy) NSArray *installableVolumes;
@property (readonly, copy) NSArray *removableVolumes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bootVolume;
+ (void)clearPreferredVolume;
+ (id)preferredVolumeInfo;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)disksAppeared:(id)a0;
- (void)disksChanged:(id)a0;
- (void)disksDisappeared:(id)a0;
- (id)visibleDiskRoles;
- (id)_filterDisks:(id)a0;
- (void)_insertVolumeAlphabetically:(id)a0 collection:(id)a1;
- (void)waitUntilPopulated;

@end
