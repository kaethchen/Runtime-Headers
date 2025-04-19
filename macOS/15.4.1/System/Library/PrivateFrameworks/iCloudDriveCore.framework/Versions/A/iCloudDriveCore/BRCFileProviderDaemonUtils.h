@class NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BRCFileProviderDaemonUtils : NSObject {
    BOOL _inSyncBubble;
    BOOL _isFPFS;
    BOOL _interrupted;
    BOOL _fpReady;
    NSError *_fpReadyError;
    BOOL _startedWaitingForFP;
    BOOL _shouldBoostFileProvider;
    NSObject<OS_dispatch_semaphore> *_waitForFPSemaphore;
    NSObject<OS_dispatch_queue> *_fileProviderReadyQueue;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (void)interrupt;
- (id)_initWithSyncBubble:(BOOL)a0 isFPFS:(BOOL)a1;
- (void)_signalFPReady;
- (void)_waitIsOver;
- (BOOL)boostFileProvider;
- (void)enableFileProviderBoosting;
- (BOOL)waitForFPToBeReadyToAcceptXPCWithError:(id *)a0;

@end
