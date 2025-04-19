@class NSArray;

@interface VNDetectHorizonRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;

- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;

@end
