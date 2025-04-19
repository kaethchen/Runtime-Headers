@class NSArray;

@interface VNGenerateImageSegmentationRequest : VNImageBasedRequest {
    NSArray *_targetPoints;
}

@property (readonly, copy) NSArray *results;
@property (nonatomic) BOOL disableConnectedComponentRefinement;
@property (nonatomic) BOOL fillGapsInMask;
@property (readonly, nonatomic) long long maximumTargetPoints;
@property (retain, nonatomic) NSArray *targetPoints;
@property (nonatomic) unsigned long long minimumMaskPixelCount;

+ (Class)configurationClass;
+ (void)downloadModelForTests:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id)supportedFeaturesAndReturnError:(id *)a0;

@end
