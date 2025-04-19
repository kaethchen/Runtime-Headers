@class NSArray;

@interface VNCalculateImageAestheticsScoresRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (BOOL)revision:(unsigned long long)a0 mayAcceptResultsProducedByRevision:(unsigned long long)a1;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;

- (id)_configureDependentRequestForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)supportedComputeStageDevicesAndReturnError:(id *)a0;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;

@end
