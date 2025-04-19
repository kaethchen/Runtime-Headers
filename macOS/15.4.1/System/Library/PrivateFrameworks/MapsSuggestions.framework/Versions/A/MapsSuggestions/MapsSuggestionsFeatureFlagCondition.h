@class NSString;

@interface MapsSuggestionsFeatureFlagCondition : MapsSuggestionsBaseCondition {
    NSString *_featureFlag;
}

- (void).cxx_destruct;
- (BOOL)isTrue;
- (id)initWithFeatureFlag:(id)a0;

@end
