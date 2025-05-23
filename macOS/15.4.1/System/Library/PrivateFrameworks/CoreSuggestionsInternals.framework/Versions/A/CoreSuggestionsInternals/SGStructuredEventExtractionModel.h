@class NSDictionary, _PASNotificationToken;

@interface SGStructuredEventExtractionModel : SGExtractionModel {
    _PASNotificationToken *_assetUpdateToken;
    NSDictionary *_inputMapping;
    NSDictionary *_outputMapping;
    NSDictionary *_supportedProviders;
    NSDictionary *_engineConfig;
}

+ (id)sharedInstance;
+ (id)inputFromTaggedCharacterRanges:(id)a0 usingInputMapping:(id)a1 forModel:(id)a2 pflTraining:(BOOL)a3 hasEvent:(BOOL)a4;

- (void).cxx_destruct;
- (id)_init;
- (BOOL)isSenderSupportedForExtraction:(id)a0;
- (unsigned long long)addressComponentThreshold;
- (id)engineConfig;
- (id)gazetteer;
- (id)inputMapping;
- (BOOL)isSenderSupportedForMLDefaultExtraction:(id)a0;
- (BOOL)isSenderSupportedForMLHybridExtraction:(id)a0;
- (BOOL)isSenderSupportedForPFLTraining:(id)a0;
- (BOOL)isSenderSupportedForShadowExtraction:(id)a0;
- (id)loadModel;
- (unsigned long long)maxMergeDistanceForSection:(id)a0 label:(id)a1;
- (id)modelInferences:(id)a0;
- (id)modelInferences:(id)a0 pflTraining:(BOOL)a1 hasEvent:(BOOL)a2;
- (id)outputMapping;
- (unsigned long long)stripRepeatedContentForSectionLength:(id)a0 label:(id)a1;
- (id)supportedProviders;
- (void)updateAll;

@end
