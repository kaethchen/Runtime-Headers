@class VCPCNNPersonKeypointsDetector, VCPCNNHandKeypointsDetector, VCPANSTHandsBodyDetector, NSMutableArray;

@interface VCPImageHumanPoseAnalyzerHolistic : VCPImageAnalyzer {
    int _maxNumRegionsHands;
    int _maxNumRegionsPerson;
    int _inputWidth;
    int _inputHeight;
    VCPANSTHandsBodyDetector *_ANSTPersonDetector;
    VCPCNNPersonKeypointsDetector *_personKeypointsDetector;
    VCPCNNHandKeypointsDetector *_handsKeypointsDetector;
    NSMutableArray *_results;
}

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (int)convertSingleResultToDict:(struct CGPoint { double x0; double x1; }[21])a0 keypointConfidence:(float *)a1 box:(id)a2 leftHandsResults:(id)a3 RightHandsResults:(id)a4;
- (id)initWithMaxNumRegionsPersons:(int)a0 forceCPU:(BOOL)a1 sharedModel:(BOOL)a2 inputConfig:(id)a3;
- (int)preferredInputFormat:(int *)a0 height:(int *)a1 format:(unsigned int *)a2;
- (int)updateInputWidth:(int)a0 Height:(int)a1;
- (int)updateMaxNumPersons:(id)a0;

@end
