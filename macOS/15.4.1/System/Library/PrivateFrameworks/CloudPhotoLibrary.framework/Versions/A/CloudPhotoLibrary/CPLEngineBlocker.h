@class CPLEngineWriteTransactionBlocker, CPLEngineSchedulerBlocker;

@interface CPLEngineBlocker : NSObject {
    BOOL _blocking;
}

@property (readonly, nonatomic) CPLEngineWriteTransactionBlocker *writeTransactionBlocker;
@property (readonly, nonatomic) CPLEngineSchedulerBlocker *schedulerBlocker;

- (void)dealloc;
- (void).cxx_destruct;
- (void)unblock;
- (id)initWithWriteTransactionBlocker:(id)a0 schedulerBlocker:(id)a1;

@end
