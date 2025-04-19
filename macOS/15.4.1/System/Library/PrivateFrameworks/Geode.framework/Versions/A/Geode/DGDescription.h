@interface DGDescription : IPAEditDescription {
    long long _orientation;
    long long _renderPipelineVersion;
}

@property (readonly) struct PFIntSize_st { unsigned long long width; unsigned long long height; } inputSize;
@property (readonly) long long orientation;
@property (readonly) long long renderPipelineVersion;

+ (id)presetifyAdjustmentStack:(id)a0;
+ (void)_validateParameters:(id)a0 orientation:(long long)a1 inputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a2 pipelineVersion:(long long)a3;
+ (id)descriptionWithOperations:(id)a0 orientation:(long long)a1 inputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a2 pipelineVersion:(long long)a3;
+ (id)operationOrderingForPipelineVersion:(long long)a0;

- (id)init;
- (BOOL)isEqualToDescription:(id)a0;
- (id)archivalRepresentation;
- (id)renderPipeline;
- (id)initWithOperations:(id)a0;
- (id)_debugDescriptionSuffix;
- (id)descriptionWithOperations:(id)a0;
- (unsigned long long)sortOrderForOperationWithIdentifier:(id)a0;
- (id)descriptionWithPipelineVersion:(long long)a0;
- (id)descriptionWithInputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a0;
- (id)descriptionWithOrientation:(long long)a0;
- (BOOL)hasEnabledOperations;
- (BOOL)hasOnlyMigratableAdjustments;
- (id)initWithOperations:(id)a0 orientation:(long long)a1 inputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a2 pipelineVersion:(long long)a3;
- (BOOL)isForRawImage;
- (struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })legacyProcessedSizeFromInputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a0 renderType:(int)a1;
- (BOOL)needsAutoCalculation;
- (id)pa_descriptionByRemovingAutoEnhance;
- (BOOL)pa_isAutoEnhanceDescription;
- (id)rawMethodVersion;

@end
