@class NSArray;

@interface VNAlignFaceRectangleRequest : VNRequest

@property (readonly, copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;

- (void).cxx_destruct;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (long long)dependencyProcessingOrdinality;
- (id)initWithFaceObservations:(id)a0;
- (id)initWithFaceObservations:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)newDuplicateInstance;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
