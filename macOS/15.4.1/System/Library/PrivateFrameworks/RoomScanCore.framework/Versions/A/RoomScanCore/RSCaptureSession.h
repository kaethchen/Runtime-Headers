@class NSMutableDictionary, RSOnlineFloorPlanGenerator, NSDate, NSObject, RSFloorPlan, NSMutableArray, RSFloorPlanBoundaryRefinement, RSDriftDetection, RSInternalInfoDumper, NSArray, RSScanCoaching, OS_os_workgroup, RSCaptureConfiguration;
@protocol OS_dispatch_semaphore, RSCaptureSessionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface RSCaptureSession : NSObject {
    RSCaptureConfiguration *_configuration;
    RSOnlineFloorPlanGenerator *_fpGenerator;
    NSObject<OS_dispatch_queue> *_fpQueue;
    NSMutableDictionary *_allKeyframes;
    NSArray *_updateKeyframes;
    NSDate *_fpStartDate;
    NSObject<OS_dispatch_queue> *_coachingQueue;
    RSScanCoaching *_textCoaching;
    NSDate *_coachingStartDate;
    RSDriftDetection *_driftDetection;
    NSObject<OS_dispatch_queue> *_mirrorPointQueue;
    RSFloorPlan *_floorPlan;
    NSArray *_detectedObjects;
    NSObject<OS_dispatch_source> *_memoryMonitorSource;
    BOOL _memoryMonitorSuspended;
    NSObject<OS_dispatch_semaphore> *_fpSemaphore;
    NSObject<OS_dispatch_semaphore> *_coachingSemaphore;
    NSObject<OS_dispatch_semaphore> *_mirrorPointSemaphore;
    RSInternalInfoDumper *_debugDumper;
    OS_os_workgroup *_workgroupFloorPlan;
    OS_os_workgroup *_workgroupCoaching;
    OS_os_workgroup *_workgroupMirror;
    RSFloorPlanBoundaryRefinement *_boundaryRefinement;
    NSMutableArray *_updateFrames;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _frameLock;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    OS_os_workgroup *_workgroupReadWrite;
}

@property (weak, nonatomic) id<RSCaptureSessionDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stop;
- (void)runWithConfiguration:(id)a0;
- (void)updateWithFrame:(id)a0;
- (void)_processInfoThermalStateDidChangeNotification:(id)a0;
- (id)exportAsset;
- (id)generateFloorPlanWithKeyframes:(id)a0 objects:(id)a1;
- (void)generateMirrorPointWithFrame:(id)a0;
- (id)getDebugInfo;
- (void)setUpInternalDumpWithLogDir:(id)a0 enable:(BOOL)a1;
- (id)standardizeFloorPlan:(id)a0;
- (void)updateWithKeyframes:(id)a0;
- (void)updateWithObjects:(id)a0;

@end
