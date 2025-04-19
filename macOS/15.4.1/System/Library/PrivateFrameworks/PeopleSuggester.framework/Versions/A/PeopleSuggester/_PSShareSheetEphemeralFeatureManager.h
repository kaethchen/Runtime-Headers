@class _PSPredictionContext, NSSet, NSArray, _CDInteractionStore, NSNumber;

@interface _PSShareSheetEphemeralFeatureManager : NSObject {
    _PSPredictionContext *_context;
    NSSet *_candidates;
    NSArray *_caches;
    _CDInteractionStore *_store;
    NSSet *_features;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSNumber *histogramSmoothingParameterK;
@property (retain, nonatomic) NSNumber *histogramSmoothingParameterV;

- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)setCandidates:(id)a0;
- (id)callFeatureFunctionWithFeature:(int)a0 histogramFeatureData:(id)a1;
- (id)computeFeaturesWithHistogramFeatures:(id)a0;
- (id)initWithContext:(id)a0 candidates:(id)a1 caches:(id)a2 store:(id)a3;
- (id)loadPSConfig;
- (void)setFeatureManagerProperties;

@end
