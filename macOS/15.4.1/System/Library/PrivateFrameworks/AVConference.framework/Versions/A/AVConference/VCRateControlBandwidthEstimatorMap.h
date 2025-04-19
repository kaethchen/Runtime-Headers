@class VCRateControlServerBag, NSMutableDictionary, VCRateControlBandwidthEstimator;

@interface VCRateControlBandwidthEstimatorMap : NSObject {
    int _state;
    double _estimatedBandwidth;
    double _estimatedBandwidthUncapped;
    NSMutableDictionary *_estimatorMap;
    unsigned int _currentActiveEstimatorID;
    VCRateControlBandwidthEstimator *_defaultEstimator;
    int _bandwidthEstimationState;
    BOOL _fastSuddenBandwidthDetectionEnabled;
    void *_logBWEDump;
}

@property (nonatomic) double estimatedBandwidth;
@property (nonatomic) double estimatedBandwidthUncapped;
@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic) unsigned int mode;
@property (readonly, nonatomic) int bandwidthEstimationState;
@property (retain, nonatomic) VCRateControlServerBag *serverBag;

- (void)dealloc;
- (id)init;

@end
