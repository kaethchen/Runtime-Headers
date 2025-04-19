@class NSString, PFStateCaptureHandler, NSMutableSet;

@interface PLCameraCaptureTaskConstraints : NSObject <PFStateCaptureProvider> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _taskConstraintCoordinatorLock;
    NSMutableSet *_taskConstraintCoordinators;
    id _mstreamdPauseContext;
    PFStateCaptureHandler *_stateHandler;
}

@property (class, readonly) PLCameraCaptureTaskConstraints *sharedTaskConstraints;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)stateCaptureDictionary;
- (void)startConstrainingTasksWithCoordinator:(id)a0;
- (void)stopConstrainingTasksWithCoordinator:(id)a0;
- (id)taskConstraintStatus;

@end
