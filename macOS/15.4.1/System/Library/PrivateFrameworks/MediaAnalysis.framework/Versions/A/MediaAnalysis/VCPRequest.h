@interface VCPRequest : NSObject {
    int _width;
    int _height;
    int _maxNumHands;
    int _maxNumPets;
    int _humanActionWindowSize;
    int _maxNumOfPersons;
    int _maxNumOfPersonsForPose;
    unsigned int _motionFlowComputationAccuracy;
    BOOL _enableHandDetection;
    BOOL _enableANSTHandDetection;
    BOOL _enableRejectHandsNearBoundaries;
    BOOL _optimizeForDistance;
    BOOL _enableHandPoseLite;
    BOOL _useAsync;
    float _minHandSize;
}

@property (readonly, nonatomic) BOOL useCPUOnly;
@property (readonly, nonatomic) unsigned int revision;

+ (BOOL)useHandsLitePoseForVision;

- (id)init;
- (id)initWithOptions:(id)a0;
- (struct CGSize { double x0; double x1; })preferredInputSizeWithOptions:(id)a0 error:(id *)a1;
- (unsigned int)preferredPixelFormat;
- (BOOL)updateWithOptions:(id)a0 error:(id *)a1;
- (BOOL)cleanupWithOptions:(id)a0 error:(id *)a1;

@end
