@interface ISForegroundSegmentation : NSObject {
    BOOL _strict;
    int _numberOfClusters;
    int _borderSamplingWidth;
    int _maxNumberOfClusteringSamples;
    int _numberOfClusteringSteps;
    float _clusterGroupingDistanceThreshold;
    float _borderNoiseScale;
    int _booleanThreshold;
}

- (id)initWithStrict:(BOOL)a0;
- (BOOL)computeMaskWithWidth:(int)a0 height:(int)a1 ucharSamplesAndMask:(void *)a2;

@end
