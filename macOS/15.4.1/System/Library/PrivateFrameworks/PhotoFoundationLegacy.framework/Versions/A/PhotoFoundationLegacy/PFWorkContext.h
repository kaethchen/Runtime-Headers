@class NSDate, NSString, PFJob, NSArray, NSMutableDictionary, PFDispatchQueue, PFWorkBatch, NSMutableArray, PFID, PFBackgroundServiceManagerCategory;
@protocol PFBackgroundServiceManagerControlDelegate, PFBackgroundServiceManagerProgressDelegate, PFBackgroundServiceManagerDelegate;

@interface PFWorkContext : NSObject {
    NSDate *_lastDisplayUpdate;
    NSMutableArray *_children;
    NSMutableArray *_suspenders;
}

@property (retain) PFDispatchQueue *queue;
@property (retain) id delegate;
@property unsigned long long jobsInFlight;
@property BOOL didShutdown;
@property (retain) NSMutableDictionary *waitingStages;
@property (weak) id<PFBackgroundServiceManagerDelegate> beginWorkDelegate;
@property (weak) id<PFBackgroundServiceManagerDelegate> createBatchDelegate;
@property (weak) id<PFBackgroundServiceManagerDelegate> beginBatchDelegate;
@property (weak) id<PFBackgroundServiceManagerDelegate> performJobDelegate;
@property (weak) id<PFBackgroundServiceManagerDelegate> endBatchDelegate;
@property (weak) id<PFBackgroundServiceManagerDelegate> endWorkDelegate;
@property (weak) id<PFBackgroundServiceManagerControlDelegate> shouldCancelDelegate;
@property (weak) id<PFBackgroundServiceManagerControlDelegate> cancelWorkDelegate;
@property (weak) id<PFBackgroundServiceManagerControlDelegate> suspendWorkDelegate;
@property (weak) id<PFBackgroundServiceManagerControlDelegate> resumeWorkDelegate;
@property (weak) id<PFBackgroundServiceManagerProgressDelegate> progressDelegate;
@property (weak) id<PFBackgroundServiceManagerProgressDelegate> progressDescriptionDelegate;
@property (weak) id<PFBackgroundServiceManagerDelegate> handleErrorDelegate;
@property (retain) PFWorkBatch *batch;
@property long long pausedCounter;
@property (retain) NSDate *startTime;
@property (retain) NSDate *endTime;
@property BOOL continueOnErrorOrCancel;
@property (retain) PFDispatchQueue *bsmContextPropertyQueue;
@property BOOL delayUpdate;
@property (copy) id /* block */ performJobBlock;
@property (readonly) NSString *_name;
@property id<PFBackgroundServiceManagerDelegate> nextItemProvider;
@property int state;
@property int stage;
@property int controlState;
@property (retain) id parentId;
@property (copy) id /* block */ completionBlock;
@property (nonatomic) long long lastAddRemoveTask;
@property (retain) NSMutableArray *jobsCompletedSinceLastStall;
@property (retain) PFWorkContext *nextWorkContext;
@property (readonly) PFID *sequenceIdGenerator;
@property BOOL isConfirmingCancel;
@property (readonly) id uuid;
@property (retain) NSString *name;
@property (retain) NSString *workDescription;
@property BOOL isVisible;
@property BOOL alwaysVisible;
@property BOOL resetProgressOnStall;
@property double displayProgressDelay;
@property (retain) NSString *groupDisplayName;
@property (retain) NSString *groupDisplayDescription;
@property (retain) NSMutableArray *items;
@property unsigned long long batchSize;
@property BOOL canCancel;
@property (readonly) BOOL shouldConfirmCancel;
@property BOOL parentCancelsChildren;
@property BOOL controlEnabled;
@property BOOL canPause;
@property BOOL isOpenEnded;
@property (readonly) PFJob *nextJob;
@property (readonly) BOOL isPaused;
@property (retain) Class batchClass;
@property (readonly) unsigned long long concurrency;
@property (copy) id /* block */ jobCompletedBlock;
@property (copy) id /* block */ workContextStalledBlock;
@property (copy) id /* block */ workContextResumedFromStallBlock;
@property (readonly) unsigned long long processingItems;
@property (readonly) unsigned long long remainingItems;
@property unsigned long long completedItems;
@property (readonly) unsigned long long totalItems;
@property (readonly) NSArray *remainingJobs;
@property (readonly) BOOL isQueued;
@property (readonly) double progressPercentage;
@property (readonly) NSString *progressDescription;
@property (weak) PFBackgroundServiceManagerCategory *category;
@property (weak) PFWorkContext *parent;
@property (readonly) NSArray *children;
@property (readonly) double runTime;
@property int result;
@property unsigned long long errorNotificationFrequency;
@property (copy) id /* block */ errorhandler;
@property (readonly) id qosServiceType;
@property BOOL debug;

+ (id)sequentialWorkContextWithWorkContexts:(id)a0 continueOnErrorOrCancel:(BOOL)a1;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (id)initWithDelegate:(id)a0;
- (id)itemAtIndex:(unsigned long long)a0;
- (void)resume;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)addItem:(id)a0;
- (void)pause;
- (id)runWithCompletion:(id /* block */)a0;
- (id)valueForKey:(id)a0;
- (BOOL)suspend;
- (void)addChild:(id)a0;
- (void)cancel;
- (unsigned long long)childCount;
- (void)remove;
- (void)removeAllItems;
- (BOOL)removeItem:(id)a0;
- (void)terminate;
- (BOOL)isStalled;
- (void)addItems:(id)a0;
- (void)removeItems:(id)a0;
- (void)removeChild:(id)a0;
- (void)shutdown;
- (id)stateString;
- (BOOL)isProcessing;
- (BOOL)isCanceled;
- (BOOL)_removeItem:(id)a0;
- (id)add;
- (void)removeChildren;
- (BOOL)isCanceling;
- (id)stateStringForState:(int)a0;
- (void)resetProgress;
- (void)addWorkContext:(id)a0;
- (void)completeEndWork;
- (void)setWaitingStage:(unsigned long long)a0 completedBlock:(id /* block */)a1;
- (unsigned long long)willRemoveItem:(id)a0;
- (void)completeSuspend;
- (void)_updateDisplayForcing:(BOOL)a0;
- (BOOL)_validateChangeToControlState:(int)a0;
- (BOOL)_validateChangeToStage:(int)a0;
- (BOOL)_validateChangeToState:(int)a0;
- (void)addItems:(id)a0 inserting:(BOOL)a1;
- (void)completeBeginBatch;
- (void)completeBeginWork;
- (void)completeCancel;
- (void)completeConfirmCancel;
- (void)completeCreateBatch;
- (void)completeEndBatch;
- (void)completePerformJob:(id)a0;
- (void)completeResume;
- (void)completeWorkContextResumedFromStall;
- (void)completeWorkContextStalled;
- (void)continueForStage:(unsigned long long)a0;
- (id)controlStateString;
- (id)controlStateStringForState:(int)a0;
- (void)createBatch:(id)a0;
- (void)dispatchBeginBatch:(id)a0 withReply:(id /* block */)a1;
- (void)dispatchBeginWorkWithReply:(id /* block */)a0;
- (void)dispatchCancelWorkWithReply:(id /* block */)a0;
- (void)dispatchCreateBatchWithReply:(id /* block */)a0;
- (void)dispatchEndBatch:(id)a0 withReply:(id /* block */)a1;
- (void)dispatchEndWorkWithReply:(id /* block */)a0;
- (void)dispatchHandleErrors:(id)a0;
- (void)dispatchJobCompleted:(id)a0;
- (void)dispatchPerformJob:(id)a0 withReply:(id /* block */)a1;
- (void)dispatchResumeWorkWithReply:(id /* block */)a0;
- (void)dispatchSuspendWorkWithReply:(id /* block */)a0;
- (void)dispatchWorkContextResumedFromStallWithReply:(id /* block */)a0;
- (void)dispatchWorkContextStalled:(id)a0 reply:(id /* block */)a1;
- (id)initWithName:(id)a0 delegate:(id)a1 qosServiceType:(id)a2;
- (id)initWithName:(id)a0 delegate:(id)a1 qosServiceType:(id)a2 concurrency:(unsigned long long)a3;
- (id)initWithName:(id)a0 performJobBlock:(id /* block */)a1;
- (id)initWithName:(id)a0 qosServiceType:(id)a1 concurrency:(unsigned long long)a2 performJobBlock:(id /* block */)a3;
- (void)insertItems:(id)a0;
- (BOOL)isPausing;
- (BOOL)isResuming;
- (void)prepareUpdate;
- (void)recordSuspender:(id)a0;
- (id)stageString;
- (id)stageStringForStage:(int)a0;
- (BOOL)unsuspend;
- (void)updateDisplayForcing:(BOOL)a0;
- (void)willRemoveAllItems;

@end
