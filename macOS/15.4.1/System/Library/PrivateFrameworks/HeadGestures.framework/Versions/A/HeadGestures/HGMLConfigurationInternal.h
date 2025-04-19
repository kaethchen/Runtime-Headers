@interface HGMLConfigurationInternal : NSObject {
    void /* unknown type, empty encoding */ windowSize;
    void /* unknown type, empty encoding */ stride;
    void /* unknown type, empty encoding */ modelType;
    void /* unknown type, empty encoding */ minGateOpenConfScoreThresholdNod;
    void /* unknown type, empty encoding */ minGestureConfScoreThresholdNod;
    void /* unknown type, empty encoding */ numWindowsInPoolNod;
    void /* unknown type, empty encoding */ maxNumBackgroundPredictionsNod;
    void /* unknown type, empty encoding */ numConsecutivePredictionsNod;
    void /* unknown type, empty encoding */ minTimeBetweenPoolsNod;
    void /* unknown type, empty encoding */ minGateOpenConfScoreThresholdShake;
    void /* unknown type, empty encoding */ minGestureConfScoreThresholdShake;
    void /* unknown type, empty encoding */ numWindowsInPoolShake;
    void /* unknown type, empty encoding */ maxNumBackgroundPredictionsShake;
    void /* unknown type, empty encoding */ numConsecutivePredictionsShake;
    void /* unknown type, empty encoding */ minTimeBetweenPoolsShake;
    void /* unknown type, empty encoding */ testModelURL;
}

@property (class, nonatomic, readonly) HGMLConfigurationInternal *defaultMLConfiguration;
@property (class, nonatomic, readonly) HGMLConfigurationInternal *defaultEmptyMLConfiguration;
@property (class, nonatomic, readonly) HGMLConfigurationInternal *defaultTestMLConfiguration;

- (id)init;
- (void).cxx_destruct;

@end
