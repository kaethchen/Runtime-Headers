@class NSArray, NSTimer, NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface OSIInstallElement : OSIInstallQueueElement {
    NSArray *_packages;
    NSObject<OS_dispatch_semaphore> *_waitUntilDone;
    BOOL _done;
    NSError *_error;
    double _totalEstimatedTime;
    double _totalSUTimeRemaining;
    double _suAmountDeducted;
    NSTimer *_initialSUProgressTimer;
}

@property BOOL isOSInstall;
@property BOOL isSoftwareUpdate;
@property BOOL shouldInstallIAL;

- (void).cxx_destruct;
- (id)operationName;
- (void)installClient:(id)a0 didFailWithError:(id)a1;
- (void)installClient:(id)a0 currentState:(int)a1 package:(id)a2 progress:(double)a3 timeRemaining:(double)a4;
- (void)installClientDidFinish:(id)a0;
- (BOOL)runReturningError:(id *)a0;
- (void)installClientDidBegin:(id)a0;
- (id)localizedStatusString;
- (void)setExternalRootMountPoint:(id)a0;
- (BOOL)_isValidCompatibilityUpdatePackage:(id)a0;
- (double)estimatedTimeToComplete;
- (id)initWithOptions:(id)a0 packageSpecifiers:(id)a1 isOSInstall:(BOOL)a2 isSoftwareUpdate:(BOOL)a3 shouldInstallIAL:(BOOL)a4;
- (void)updateSUProgress;

@end
