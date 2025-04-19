@class IASPPhase, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface IASPPhaseManager : NSObject {
    IASPPhase *_currentPhase;
}

@property (retain) NSObject<OS_dispatch_semaphore> *phasesSemaphore;
@property (retain) NSMutableArray *phases;
@property float prevPhaseProgress;
@property float totalCompletedProgress;

+ (id)sharedPhaseManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (float)currentProgress;
- (void)addPhase:(id)a0;
- (id)currentPhase;
- (id)_registryPhases;
- (void)_advanceToNextPhase;
- (void)_advanceToPhaseNamed:(id)a0;
- (void)_clearPhases;
- (id)_exportablePhases;
- (unsigned long long)_indexOfPhaseWithName:(id)a0;
- (id)_registryCurrentPhaseName;
- (BOOL)_setDoneForPhaseWithName:(id)a0;
- (float)_setProgress:(float)a0 forPhaseWithName:(id)a1;
- (void)_signalPhasesSemaphore;
- (float)_totalPercentage;
- (float)_totalPercentageThroughPhaseNamed:(id)a0;
- (void)_waitForPhasesSemaphore;
- (void)advanceToNextPhase;
- (void)advanceToPhaseNamed:(id)a0;
- (void)clearPhases;
- (BOOL)hasPhases;
- (void)loadPhases;
- (void)logPhases;
- (BOOL)setDoneForPhaseWithName:(id)a0;
- (float)setProgress:(float)a0 forPhaseWithName:(id)a1;

@end
