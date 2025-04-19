@class NSObject, NSMutableDictionary, FPDServer, NSMutableArray, FPDVersionsFileCoordinationProviderDelegate;
@protocol OS_dispatch_queue, OS_os_log;

@interface FPDVolumeManager : NSObject {
    NSMutableArray *_volumes;
    NSMutableDictionary *_versionsProvidersByVolumeID;
    FPDVersionsFileCoordinationProviderDelegate *_delegate;
    struct __DASession { } *_daSession;
    NSObject<OS_dispatch_queue> *_daQueue;
    NSObject<OS_dispatch_queue> *_eligibilityCheckQueue;
    id /* block */ _notificationObserverBlock;
    NSMutableArray *_disksPendingUnmountConfirmation;
    NSObject<OS_os_log> *_log;
}

@property (weak, nonatomic) FPDServer *server;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithServer:(id)a0;
- (void)checkLocationEligibilityForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)_didMoveOffConsole:(id)a0;
- (void)_didMoveOnConsole:(id)a0;
- (void)_t_addNotificationObserver:(id /* block */)a0;
- (void)_willLogOut:(id)a0;
- (id)createVolumeWithStatFS:(const struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0 role:(unsigned int)a1;
- (id)defaultVolumeForCurrentPersona;
- (void)enumerateLibrariesForPersona:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateLibrariesWithBlock:(id /* block */)a0;
- (void)flushDisksPendingUnmountConfirmation;
- (struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)getAllEligibleVolumesWithError:(id *)a0 count:(int *)a1;
- (id)getGenstoreVersionsRootURL:(id)a0 volumeIgnoringOwnership:(BOOL)a1;
- (void)invalidateDevice:(int)a0 reason:(id)a1;
- (void)invalidateExternalVolumesAndStopMonitoring;
- (void)invalidateVolume:(id)a0 reason:(id)a1;
- (id)libraryForVolume:(id)a0 createIfNeeded:(BOOL)a1 error:(id *)a2;
- (void)loadAdditionalVolumesWithCompletion:(id /* block */)a0;
- (BOOL)loadEnterpriseVolumeWithError:(id *)a0;
- (BOOL)loadHomeVolume;
- (id)loadSingleVolume:(const struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0 role:(unsigned int)a1;
- (BOOL)loadVolumeWithURL:(id)a0 role:(unsigned int)a1 error:(id *)a2;
- (void)registerDiskPendingUnmountConfirmationAtURL:(id)a0;
- (void)registerVersionsFileCoordinatorForVolume:(id)a0 volumeIgnoringOwnership:(BOOL)a1;
- (BOOL)shouldMountAdditionalVolume;
- (void)startMonitoringVolumeChanges;
- (void)stopMonitoringVolumeChanges;
- (void)unregisterVersionsFileCoordinatorForVolume:(id)a0;

@end
