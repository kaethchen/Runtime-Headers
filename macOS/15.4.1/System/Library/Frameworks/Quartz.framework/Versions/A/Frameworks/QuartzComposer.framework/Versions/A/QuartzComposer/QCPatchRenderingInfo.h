@class QCContext;

@interface QCPatchRenderingInfo : NSObject {
    QCContext *_context;
    double _profilingStats[9];
    int flags;
    unsigned long long pausedRendering;
    unsigned long long frameID;
    unsigned long long lastRenderedFrameID;
    double frameTime;
    double executionDuration;
    double nextExecutionTime;
    unsigned long long patchTotalCount;
    unsigned long long patchActiveCount;
    unsigned long long patchTraversedCount;
    unsigned long long patchExecutedCount;
    BOOL abortExecution;
    BOOL suspendExecution;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } suspendMutex;
}

- (void)dealloc;
- (void)finalize;
- (id)context;
- (id)initWithContext:(id)a0;

@end
