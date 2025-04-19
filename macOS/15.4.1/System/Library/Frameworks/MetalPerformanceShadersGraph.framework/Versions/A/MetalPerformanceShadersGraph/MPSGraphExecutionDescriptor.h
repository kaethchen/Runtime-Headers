@class MPSGraphCompilationDescriptor, NSMutableArray;

@interface MPSGraphExecutionDescriptor : MPSGraphObject {
    NSMutableArray *_waitEvents;
    NSMutableArray *_signalEvents;
    NSMutableArray *_anePowerWaitEvents;
}

@property BOOL enableCommitAndContinue;
@property BOOL simulateANECompileFailure;
@property BOOL simulateANELoadModelFailure;
@property BOOL disableSynchronizeResults;
@property BOOL disableANECaching;
@property BOOL disableANEFallback;
@property BOOL enableProfilingOpNames;
@property BOOL briefProfilingOpNames;
@property BOOL breakUpMetalEncoders;
@property BOOL generateRuntimeExecutionReport;
@property unsigned long long maximumNumberOfEncodingThreads;
@property (copy) id /* block */ scheduledHandler;
@property (copy) id /* block */ completionHandler;
@property BOOL waitUntilCompleted;
@property (copy) MPSGraphCompilationDescriptor *compilationDescriptor;

- (id)init;
- (void).cxx_destruct;
- (void)waitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)signalEvent:(id)a0 atExecutionEvent:(unsigned long long)a1 value:(unsigned long long)a2;
- (void)waitForANEPrePowerUpEvent:(id)a0 value:(unsigned long long)a1;

@end
