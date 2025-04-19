@class NSProgress, NSMutableSet, BRCPipelineJobQueue, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface BRCPipelineStageHandlerBase : NSObject {
    BRCPipelineJobQueue *_enqueuedJobs;
    NSMutableSet *_activelyExecutingJobs;
    NSMutableSet *_cancelledActivelyExecutingJobs;
    NSProgress *_activelyExecutingProgress;
    NSObject<OS_dispatch_source> *_schedulingSource;
    NSObject<OS_dispatch_queue> *_schedulingQueue;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    BOOL _suspended;
    BOOL _schedulingEnabled;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)schedule;
- (void)cancelJob:(id)a0;
- (void)addJob:(id)a0;
- (id)_asJobCostVendor;
- (void)_cancelActiveBatchIfNecessary;
- (void)_completedJob:(id)a0 withRecoveryStage:(unsigned long long)a1 error:(id)a2;
- (id)_groupIdentifierForJob:(id)a0;
- (void)_initializeSourceAndQueues;
- (void)_pauseScheduling;
- (void)_resumeScheduling;
- (void)disableScheduling;
- (void)dumpToContext:(id)a0;
- (void)enableScheduling;
- (void)setupWithInternalPipelineJobCompletionHandler:(id /* block */)a0;

@end
