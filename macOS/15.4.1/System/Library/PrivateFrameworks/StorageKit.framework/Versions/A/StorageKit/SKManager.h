@class NSXPCConnection, NSString, NSHashTable, NSArray, NSSet, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SKManager : SKBaseManager <SKManagerListener> {
    BOOL diskQueueStuck;
    BOOL _shouldBeBindingsSafe;
    NSMutableSet *allDisks;
    NSXPCConnection *_connection;
    NSHashTable *_listeners;
    NSMutableDictionary *_listenersAppearedDisks;
    NSObject<OS_dispatch_queue> *_waitingForDiskQueue;
    NSMutableSet *_waitingForDiskSet;
    NSArray *_filesystems;
    NSArray *imageSrcArray;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *frameworkAsyncOperationsQueue;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) NSSet *visibleRoles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)BSDNameFromString:(id)a0;
+ (id)defaultVisibleRoles;
+ (BOOL)isMountPointWithPath:(id)a0;
+ (id)sharedManagerWithBindingsSafety:(BOOL)a0;
+ (id)syncSharedManager;

- (void).cxx_destruct;
- (BOOL)isBusy;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (id)filesystems;
- (id)diskForPath:(id)a0;
- (id)diskForBSDname:(id)a0;
- (id)_diskForString:(id)a0;
- (id)_diskForPath:(id)a0;
- (void)_disksAppeared:(id)a0 toListener:(id)a1;
- (void)_initialPopulateCompleteForListener:(id)a0;
- (id)allDisks;
- (id)allDisksSet;
- (id)childDisksForWholeDisk:(id)a0;
- (BOOL)compositeDisks:(id)a0 volumeName:(id)a1 progressBlock:(id /* block */)a2 callbackBlock:(id /* block */)a3;
- (id)contentDiskWithDisk:(id)a0;
- (void)createAPFSContainerWithDisks:(id)a0 progressBlock:(id /* block */)a1 callbackBlock:(id /* block */)a2;
- (void)createRAIDSetType:(id)a0 name:(id)a1 disks:(id)a2 format:(id)a3 options:(id)a4 progressBlock:(id /* block */)a5 completionBlock:(id /* block */)a6;
- (id)diskForString:(id)a0;
- (id)diskForUUID:(id)a0;
- (id)diskForVolumeName:(id)a0;
- (void)disksAppeared:(id)a0;
- (void)disksChanged:(id)a0;
- (void)disksDisappeared:(id)a0;
- (id)enclosingDiskAtLevel:(unsigned long long)a0;
- (unsigned long long)enclosingVolumeCount;
- (id)filesystemWithSKType:(id)a0 isCaseSensitive:(BOOL)a1 isEncrypted:(BOOL)a2;
- (id)formatableFileSystems;
- (id)initWithBindingSafety:(BOOL)a0;
- (void)initialPopulateComplete;
- (id)knownDiskForDictionary:(id)a0;
- (void)knownDiskForDictionary:(id)a0 notify:(id /* block */)a1 onQueue:(id)a2;
- (id)knownDiskForDictionary:(id)a0 waitingForDaemon:(BOOL)a1;
- (id)knownDiskForDictionary:(id)a0 waitingForDaemon:(BOOL)a1 fromSet:(id)a2;
- (id)knownDisksForDictionaries:(id)a0;
- (id)knownDisksForDictionaries:(id)a0 waitingForDaemon:(BOOL)a1;
- (id)knownDisksForDictionaries:(id)a0 waitingForDaemon:(BOOL)a1 fromSet:(id)a2;
- (id)logicalVoumeGroupForCSLV:(id)a0;
- (id)logicalVoumeGroupForCSPV:(id)a0;
- (void)managerResumed;
- (void)managerStalled;
- (id)membersForRAIDSet:(id)a0;
- (id)newDiskWithDictionary:(id)a0;
- (id)physicalStoresForAPFSVolume:(id)a0;
- (id)physicalVolumesForCSLVG:(id)a0;
- (id)raidForContentDisk:(id)a0;
- (void)resizeLimitsForDisk:(id)a0 completionBlock:(id /* block */)a1;
- (id)setForRAIDMember:(id)a0;
- (void)syncAllDisks;
- (id)visibleDisks;
- (id)volumesForAPFSPS:(id)a0;
- (void)volumesForDiskImageFileURL:(id)a0 progressBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (id)wholeDiskForDisk:(id)a0;

@end
