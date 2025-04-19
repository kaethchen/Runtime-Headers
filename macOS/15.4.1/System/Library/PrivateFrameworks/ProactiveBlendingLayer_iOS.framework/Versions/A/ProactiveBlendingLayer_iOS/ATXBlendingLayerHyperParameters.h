@class NSString, NSDictionary;

@interface ATXBlendingLayerHyperParameters : NSObject <ATXUniversalBlendingLayerHyperParametersProtocol> {
    NSDictionary *_parameters;
    NSDictionary *_clientModelsToConsiderForConsumerSubType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)abHelperWithMobileAssets;
+ (id)abHelperWithTrialAssets;

- (id)init;
- (void).cxx_destruct;
- (id)abGroup;
- (id)initForTestingWithMobileAssetAssetsOnly;
- (id)initForTestingWithTrialAssetsOnly;
- (BOOL)isSuggestionEligibleForAppPredictionPanel:(id)a0;
- (BOOL)isSuggestionEligibleForSuggestionsWidget:(id)a0;
- (id)layoutsToConsiderForConsumerSubType:(unsigned char)a0;
- (unsigned long long)lohStacksToConsiderAboveAndBelowForDeduplication;
- (double)maxAgeOfStackSuggestionToConsiderStaleInSeconds;
- (double)sessionLogSamplingRate;
- (BOOL)uiSupportsSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (long long)minConfidenceCategoryToConsider;
- (id)clientModelPriorityOrder;
- (id)clientModelsToConsiderForConsumerSubType;
- (id)clientModelsToConsiderForConsumerSubType:(unsigned char)a0;
- (id)consumerSubTypesToConsiderForClientModelIds:(id)a0;
- (id)executableTypesToConsiderForConsumerSubType:(unsigned char)a0;
- (BOOL)uiConfidenceLevelMetBySuggestion:(id)a0;
- (BOOL)uiIsEnabledForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (BOOL)uiSupportsClientModelIdForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (BOOL)uiSupportsExecutableTypeForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (BOOL)uiSupportsLayoutType:(long long)a0 consumerSubType:(unsigned char)a1;

@end
