@interface QCThreadPatch : QCPatch {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _parameterMutex;
    id _result;
    id _argument;
    SEL _threadSelector;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _threadMutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _threadCondition;
    BOOL _threadRunning;
    void *_unused4[4];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (void)finalize;
- (id)initWithIdentifier:(id)a0;
- (id)getThreadResult;
- (BOOL)isThreadRunning;
- (BOOL)runThreadWithSelector:(SEL)a0 argument:(id)a1;
- (void)_finalize_QCThreadPatch;
- (void)_thread:(id)a0;
- (id)getThreadArgument;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setThreadArgument:(id)a0;
- (void)setThreadResult:(id)a0;
- (void)waitUntilThreadDone;

@end
