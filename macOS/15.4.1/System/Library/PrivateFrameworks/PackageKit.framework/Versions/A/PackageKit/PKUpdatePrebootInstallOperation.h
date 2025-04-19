@class NSObject;
@protocol OS_dispatch_semaphore;

@interface PKUpdatePrebootInstallOperation : PKInstallOperation <DMAsyncDelegate>

@property (retain) NSObject<OS_dispatch_semaphore> *waitingSemaphore;

- (void)dealloc;
- (int)installState;
- (double)estimatedTimeRemaining;
- (void)main;
- (void)dmAsyncFinishedForDisk:(struct __DADisk { } *)a0 mainError:(int)a1 detailError:(int)a2 dictionary:(id)a3;
- (void)dmAsyncMessageForDisk:(struct __DADisk { } *)a0 string:(id)a1 dictionary:(id)a2;
- (void)dmAsyncProgressForDisk:(struct __DADisk { } *)a0 barberPole:(BOOL)a1 percent:(float)a2;
- (void)dmAsyncStartedForDisk:(struct __DADisk { } *)a0;
- (id)messageTracerComment;
- (id)messageTracerDomain;

@end
