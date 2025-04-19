@class NSString;

@interface ATXMacOSBlendingLayerHyperParameters : NSObject <ATXUniversalBlendingLayerHyperParametersProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)abGroup;
- (id)layoutsToConsiderForConsumerSubType:(unsigned char)a0;
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
