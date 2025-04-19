@class NSArray;

@interface ATXOneHotCategoricalFeatureCross : ATXCandidateRelevanceModelOneHotCategoricalFeaturizer {
    NSArray *_features;
}

- (void).cxx_destruct;
- (id)initWithFeatures:(id)a0;
- (id)categoricalFeatureValueForContext:(id)a0 candidate:(id)a1;

@end
