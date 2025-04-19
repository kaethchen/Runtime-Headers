@class NSArray, NSString, VNScreenGazeState;

@interface VNDetectScreenGazeRequest : VNStatefulRequest <VNFaceObservationAccepting> {
    VNScreenGazeState *_state;
}

@property (nonatomic) long long temporalSmoothingFrameCount;
@property (nonatomic) unsigned long long screenSize;
@property (readonly, copy) NSArray *results;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)applicableRevisionForDependentRequestOfClass:(Class)a0 beingPerformedByRevision:(unsigned long long)a1;
+ (Class)configurationClass;
+ (id)publicRevisionsSet;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
