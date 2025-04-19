@class NSThread, NSObject;
@protocol OS_dispatch_semaphore;

@interface OSPUpdatePrebootOperation : OSPOperation <DMAsyncDelegate>

@property (retain) NSThread *diskManagementThread;
@property (retain) NSObject<OS_dispatch_semaphore> *ensureRecoveryBooterFinished;
@property (retain) NSObject<OS_dispatch_semaphore> *stopDiskManagementThread;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (void)dmAsyncFinishedForDisk:(struct __DADisk { } *)a0 mainError:(int)a1 detailError:(int)a2 dictionary:(id)a3;
- (void)dmAsyncMessageForDisk:(struct __DADisk { } *)a0 string:(id)a1 dictionary:(id)a2;
- (void)dmAsyncProgressForDisk:(struct __DADisk { } *)a0 barberPole:(BOOL)a1 percent:(float)a2;
- (void)dmAsyncStartedForDisk:(struct __DADisk { } *)a0;
- (BOOL)_ensureRecoveryBooter;
- (void)_ensureRecoveryBooterAndSignalWhenFinished;
- (BOOL)_shouldUpdatePreboot;

@end
