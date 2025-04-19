@interface VNShotflowDetectorANODv5 : VNShotflowDetectorANODBase

@property (nonatomic) float petFaceThreshold;
@property (nonatomic) float faceBodyDistanceThreshold;

+ (Class)VNShotflowNetworkClass;
+ (id)defaultFilterThresholds;
+ (id)filterThresholdsArrayForFilterThresholds:(id)a0 error:(id *)a1;
+ (id)supportedLabelKeys;

- (id)initWithNetwork:(id)a0;
- (id)analyzePetFaces:(id)a0;
- (id)getIndexBoxes:(id)a0 filterThresholdIndex:(unsigned long long)a1;
- (id)groupFaceBody:(id)a0;
- (id)nmsBoxes:(id)a0 usingThresholds:(id)a1;
- (id)processBoxes:(id)a0 withHeight:(float)a1 andWidth:(float)a2 filterThresholds:(id)a3;

@end
