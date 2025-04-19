@class NSArray, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface BRCPipeline : NSObject {
    NSArray *_stageHandlers;
    NSMutableSet *_cancelledJobs;
    NSObject<OS_dispatch_source> *_pipelineAutoResumeTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    id /* block */ _stageStringifier;
}

- (id)description;
- (void).cxx_destruct;
- (void)_armResumeTimer;
- (BOOL)_buildJobPlanForJob:(id)a0 error:(id *)a1;
- (void)_completedJob:(id)a0 forStage:(unsigned long long)a1 recoveryStage:(unsigned long long)a2 error:(id)a3;
- (void)_computeStageStringifier;
- (id)_generateProgressForJob:(id)a0;
- (void)_pauseStageHandlerScheduling;
- (void)_resumeStageHandlerScheduling;
- (void)_sendJob:(id)a0 toStageHandlerWithStageID:(unsigned long long)a1;
- (void)_setStageJobCompletionHandlers;
- (void)_validateStageHandlers;
- (id)addJob:(id)a0 moreComing:(BOOL)a1;
- (void)dumpToContext:(id)a0;
- (id)initWithName:(id)a0 stageHandlers:(id)a1;

@end
