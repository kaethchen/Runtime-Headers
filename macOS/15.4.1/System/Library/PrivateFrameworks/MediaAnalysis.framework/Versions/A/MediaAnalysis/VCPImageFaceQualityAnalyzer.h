@class NSMutableArray;

@interface VCPImageFaceQualityAnalyzer : VCPImageAnalyzer

@property (retain) NSMutableArray *faceQualityScores;

- (void).cxx_destruct;
- (int)analyzeDetectedFaces:(struct __CVBuffer { } *)a0 faceResults:(id)a1 cancel:(id /* block */)a2;

@end
