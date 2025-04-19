@interface VCRateControlAlgorithmLayeredContinuousTier : VCRateControlAlgorithmStabilizedNOWRD {
    double _previousRateControlTime;
    double _bandwidthWall;
    int _bandwidthWallConfidence;
    double _speedFactor;
    double _congestionSeverity;
}

- (void)dealloc;
- (id)init;
- (BOOL)setUpVTable;

@end
