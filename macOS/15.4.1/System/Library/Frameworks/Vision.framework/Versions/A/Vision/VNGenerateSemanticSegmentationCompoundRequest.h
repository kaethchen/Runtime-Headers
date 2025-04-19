@class NSArray;

@interface VNGenerateSemanticSegmentationCompoundRequest : VNCompoundRequest

@property (readonly, copy) NSArray *results;

+ (long long)compoundRequestRevisionForRequest:(id)a0;
+ (id)compoundRequestsForOriginalRequests:(id)a0 withPerformingContext:(id)a1 error:(id *)a2;
+ (Class)detectorForPersonInstanceRequestAndReturnError:(id *)a0;
+ (Class)detectorForSemanticSegmentationRequestAndReturnError:(id *)a0;
+ (id)detectorTypeForPersonInstanceRequest;
+ (id)detectorTypeForSemanticSegmentationRequest;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (BOOL)warmUpSession:(id)a0 error:(id *)a1;

- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)initWithOriginalRequests:(id)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;

@end
