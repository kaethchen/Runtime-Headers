@class NSString, RTMotionActivityManager, RTVisitPipelineMotionAccumulatorParams;

@interface RTVisitPipelineModuleMotionStateTrimmer : NSObject <RTVisitPipelineModule>

@property (readonly, nonatomic) RTVisitPipelineMotionAccumulatorParams *motionAccumulatorParams;
@property (readonly, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)process:(id)a0;
- (id)_fetchActivitiesWithinDateInterval:(id)a0 error:(id *)a1;
- (id)_trimVisitClusterForMotionActivity:(id)a0;
- (id)initWithMotionActivityManager:(id)a0 defaultsManager:(id)a1;

@end
