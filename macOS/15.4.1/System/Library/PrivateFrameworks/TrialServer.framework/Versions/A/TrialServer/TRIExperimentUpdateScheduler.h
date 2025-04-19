@class NSString, TRIExperimentDatabase;
@protocol TRITaskQueuing;

@interface TRIExperimentUpdateScheduler : NSObject <TRIExperimentUpdateSchedulerProtocol>

@property (readonly, nonatomic) id<TRITaskQueuing> queue;
@property (readonly, nonatomic) TRIExperimentDatabase *experimentDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithExperimentDatabase:(id)a0 taskQueue:(id)a1;
- (void)scheduleExperimentUpdateOperationsForExperimentWithNewEndDate:(id)a0 withDeployment:(id)a1;

@end
