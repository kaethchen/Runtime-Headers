@class NSString, TRIExperimentDatabase;
@protocol TRITaskQueuing;

@interface TRIUrgentRollbackScheduler : NSObject <TRIUrgentRollbackSchedulerProtocol>

@property (readonly, nonatomic) id<TRITaskQueuing> queue;
@property (readonly, nonatomic) TRIExperimentDatabase *experimentDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
