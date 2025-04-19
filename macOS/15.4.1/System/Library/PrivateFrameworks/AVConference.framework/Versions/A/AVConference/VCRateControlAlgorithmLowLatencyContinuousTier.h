@interface VCRateControlAlgorithmLowLatencyContinuousTier : VCRateControlAlgorithmLowLatencyNOWRD {
    double _previousRateControlTime;
    double _bandwidthWall;
    int _bandwidthWallConfidence;
    double _speedFactor;
}

- (void)dealloc;
- (id)init;
- (BOOL)setUpVTable;

@end
