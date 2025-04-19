@class NSArray;

@interface VNGeneratePersonInstanceMaskRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;

+ (unsigned long long)applicableRevisionForDependentRequestOfClass:(Class)a0 beingPerformedByRevision:(unsigned long long)a1;
+ (Class)configurationClass;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;

- (struct __CVBuffer { } *)_createInstanceMaskFromMaskArray:(id)a0 error:(id *)a1;
- (id)_newConfiguredDependentRequestForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)supportedComputeStageDevicesAndReturnError:(id *)a0;
- (id)supportedImageSizeSet;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;

@end
