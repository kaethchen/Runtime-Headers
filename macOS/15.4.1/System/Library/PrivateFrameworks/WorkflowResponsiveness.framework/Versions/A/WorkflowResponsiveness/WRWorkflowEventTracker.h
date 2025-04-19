@class NSError, NSString, NSArray, NSMutableDictionary, WRTimestampAndThread, NSMutableArray, NSObject, WRSignpost, WRWorkflow;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WRWorkflowEventTracker : NSObject {
    NSString *_eventIdentifier;
    WRTimestampAndThread *_eventStart;
    WRSignpost *_startSignpost;
    WRTimestampAndThread *_eventEnd;
    WRSignpost *_endSignpost;
    NSError *_error;
    NSMutableArray *_allSignpostTrackersMutable;
    NSMutableArray *_concurrentEvents;
    NSObject<OS_dispatch_queue> *_timeoutQueue;
    NSObject<OS_dispatch_source> *_timeoutSource;
    NSMutableArray *_openIndividuatedIntervalsWithFieldNameMatchingAnEndSignpostFromBeforeEventStart;
    id /* block */ _eventCompletionCallback;
    NSMutableArray *_candidateEndSignpostTrackers;
}

@property (readonly) unsigned long long numHandledSignposts;
@property (readonly) unsigned long long numOutsideSignposts;
@property (readonly) unsigned long long numUnhandledSignposts;
@property BOOL ignoreEventTimeouts;
@property (retain) NSMutableDictionary *nonPublicFields;
@property (readonly) WRWorkflow *workflow;
@property (readonly) NSArray *allSignpostTrackers;
@property (readonly) NSString *eventIdentifier;
@property (readonly) WRTimestampAndThread *eventStart;
@property (readonly) WRSignpost *startSignpost;
@property (readonly) WRTimestampAndThread *eventEnd;
@property (readonly) WRSignpost *endSignpost;
@property (readonly) NSError *error;
@property (readonly) NSMutableDictionary *environment;

+ (void)cleanupWorkflowResponsivenessDiagnosticsDirectory;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)reset;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })stats;
- (id)initWithEncodedString:(id)a0 error:(id *)a1;
- (BOOL)handleSignpost:(id)a0;
- (BOOL)gatherDiagnosticsIfNeeded;
- (id)initForLiveStreamingWithWorkflow:(id)a0 timeoutQueue:(id)a1 eventCompletionCallback:(id /* block */)a2;
- (BOOL)inMiddleOfEvent;
- (void)doneHandlingSignpostsWithEndTimeMachContNs:(unsigned long long)a0;
- (id)encodedDict;
- (id)encodedStringWithError:(id *)a0;
- (void)generateTelemetry;
- (id)initForReadbackWithWorkflow:(id)a0 eventCompletionCallback:(id /* block */)a1;
- (id)initWithEncodedDict:(id)a0 error:(id *)a1;
- (id)initWithSpindump:(id)a0 error:(id *)a1;
- (id)initWithTailspin:(id)a0 error:(id *)a1;
- (id)initWithWorkflow:(id)a0 eventCompletionCallback:(id /* block */)a1;

@end
