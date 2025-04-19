@class VCPCoreMLFeatureProviderGestureVideo, MLPredictionOptions, VCPCoreMLRequest, VCPHandGestureMitigator;

@interface VCPHandGestureClassifier : NSObject {
    VCPCoreMLFeatureProviderGestureVideo *_featureProvider;
    VCPCoreMLRequest *_gestureCoreMLRequest;
    VCPHandGestureMitigator *_mitigator;
    float _minHandSize;
    MLPredictionOptions *_MLOptions;
}

+ (float)enableFlip;
+ (id)twoHandGestureTypes;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (int)rotationInDegrees;
- (void)setRotationInDegrees:(int)a0;
- (id)existingGroupIDs;
- (id)initWithMinHandSize:(float)a0 options:(id)a1;
- (int)processLeftHand:(id)a0 rightHand:(id)a1 results:(id)a2 resultsFlip:(id)a3 faceRects:(id)a4 faceYaws:(id)a5;
- (int)processPerson:(int)a0 withObservations:(id)a1 andFaceRects:(id)a2 faceYaws:(id)a3;
- (void)setHandGestureForHand:(id)a0 withResult:(id)a1 andMapping:(id)a2;

@end
