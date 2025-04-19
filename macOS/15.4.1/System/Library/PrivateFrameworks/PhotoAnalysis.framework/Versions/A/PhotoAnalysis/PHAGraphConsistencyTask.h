@class NSString, MAProgressReporter, PGGraphUpdateManager, NSObject;
@protocol OS_dispatch_semaphore;

@interface PHAGraphConsistencyTask : NSObject <PHATask, PGGraphUpdateListener> {
    PGGraphUpdateManager *_updateManager;
    MAProgressReporter *_progressReporter;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long featureCode;
@property (readonly, nonatomic) BOOL featureAvailable;
@property (readonly, nonatomic) BOOL featureComplete;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)priority;
- (BOOL)currentPlatformIsSupported;
- (void)graphUpdateDidStop;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateMadeProgress:(double)a0;
- (id)incrementalKey;
- (void)markTaskAsCompleted;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (id)taskClassDependencies;
- (void)timeoutFatal:(BOOL)a0;

@end
