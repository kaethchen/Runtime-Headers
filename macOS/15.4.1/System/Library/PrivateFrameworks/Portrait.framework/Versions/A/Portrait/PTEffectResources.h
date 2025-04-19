@class NSString, PTHandGestureDetector, PTVFXRenderEffect, PTEffectPersonSegmentationViSegHQVisionCore, PTEspressoGenericExecutor;

@interface PTEffectResources : NSObject

@property (retain, nonatomic) NSString *effectNetworkPath;
@property (retain, nonatomic) NSString *effectNetworkConfig;
@property (retain, nonatomic) PTEspressoGenericExecutor *effectNetwork;
@property (retain, nonatomic) PTEspressoGenericExecutor *segmentationNetwork;
@property (retain, nonatomic) PTHandGestureDetector *handGestureDetector;
@property (retain, nonatomic) PTEffectPersonSegmentationViSegHQVisionCore *personSegmentationProvider;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } segmentationSize;
@property (retain, nonatomic) PTVFXRenderEffect *renderEffect;

- (void).cxx_destruct;

@end
