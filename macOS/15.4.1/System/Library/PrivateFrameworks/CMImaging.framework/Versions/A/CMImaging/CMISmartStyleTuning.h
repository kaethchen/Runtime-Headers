@class NSDictionary;

@interface CMISmartStyleTuning : NSObject <NSCopying> {
    struct { float coefficients[5]; } _coefficientsFilteringIIR3;
}

@property (nonatomic) unsigned long long applyMaxTemporalFilterOrder;
@property (nonatomic) unsigned long long learningRate;
@property (nonatomic) float statsUpdateDeltaTimeThreshold;
@property (nonatomic) float anstMasksMatchingTimeInSecondsThreshold;
@property (nonatomic) float coefficientsFilteringHalfWindowTime;
@property (nonatomic) float coefficientsFilteringGaussianScale;
@property (nonatomic) float coefficientsFilteringIIR1InitialHistoryFactor;
@property (nonatomic) float coefficientsFilteringIIR1MaxHistoryFactor;
@property (nonatomic) float coefficientsFilteringIIR1HistoryFactorRampUpStep;
@property (readonly, nonatomic) struct { float x0[5]; } *coefficientsFilteringIIR3;
@property (nonatomic) float srlCurrentValueWeight;
@property (retain, nonatomic) NSDictionary *srlParameters;
@property (nonatomic) int srlSkinToneLevelFilterMaxAgeFrames;
@property (nonatomic) int srlSkinToneLevelFilterMaxFaceHistory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
