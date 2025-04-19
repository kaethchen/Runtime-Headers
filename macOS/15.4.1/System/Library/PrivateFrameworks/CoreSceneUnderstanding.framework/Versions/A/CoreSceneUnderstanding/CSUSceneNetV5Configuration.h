@class CSUSceneNetV5SceneTaxonomy, NSString, CSUPixelBufferDescriptor, NSArray, CSUSceneNetV5DetectionTaxonomy, CSUSceneNetV5AestheticsTaxonomy;
@protocol MLComputeDeviceProtocol;

@interface CSUSceneNetV5Configuration : NSObject {
    CSUSceneNetV5SceneTaxonomy *_sceneTaxonomy;
    CSUSceneNetV5AestheticsTaxonomy *_aestheticsTaxonomy;
    CSUSceneNetV5DetectionTaxonomy *_detectionTaxonomy;
}

@property (readonly) int espressoExecutionEngine;
@property (readonly, copy, nonatomic) NSString *espressoNetworkPath;
@property (readonly, copy, nonatomic) NSString *inputImageTensorName;
@property (readonly, copy, nonatomic) NSString *scenePrintTensorName;
@property (readonly, copy, nonatomic) NSString *sceneClassificationTensorName;
@property (readonly, copy, nonatomic) NSString *sceneTaxonomyPath;
@property (readonly, copy, nonatomic) NSString *aestheticsAttributesTensorName;
@property (readonly, copy, nonatomic) NSString *aestheticsGlobalScoresTensorName;
@property (readonly, copy, nonatomic) NSString *aestheticsTaxonomyPath;
@property (readonly, copy, nonatomic) NSString *detectionScoreHeatMapName;
@property (readonly, copy, nonatomic) NSString *detectionCoordinateOffsetMapName;
@property (readonly, copy, nonatomic) NSString *detectionTaxonomyPath;
@property (readonly, nonatomic) BOOL detectionHeadIsSoftmax;
@property (readonly, nonatomic) float detectionNMSThreshold;
@property (readonly, copy, nonatomic) NSString *saliencyAttentionTensorName;
@property (readonly, copy, nonatomic) NSString *saliencyObjectnessTensorName;
@property (readonly, copy, nonatomic) NSString *fingerprintEmbeddingTensorName;
@property (readonly, copy, nonatomic) NSString *fingerprintModelPath;
@property (readonly, copy, nonatomic) NSString *entityNetClassificationTensorName;
@property (readonly, nonatomic) CSUPixelBufferDescriptor *inputPixelBufferDescriptor;
@property (readonly, nonatomic) CSUPixelBufferDescriptor *saliencyAttentionMapBufferDescriptor;
@property (readonly, nonatomic) CSUPixelBufferDescriptor *saliencyObjectnessMapBufferDescriptor;
@property (readonly, nonatomic) long long revision;
@property (readonly, copy, nonatomic) NSArray *supportedComputeDevices;
@property (retain, nonatomic) id<MLComputeDeviceProtocol> computeDevice;
@property (readonly, nonatomic) NSString *leafSceneClassificationVocabularyName;
@property (readonly, nonatomic) NSString *hierarchicalSceneClassificationVocabularyName;
@property (readonly, nonatomic) NSString *entityNetVocabularyName;
@property (readonly, nonatomic) NSString *aestheticsAttributeVocabularyName;
@property (readonly, nonatomic) NSString *aestheticsGlobalScoreVocabularyName;
@property (readonly, nonatomic) NSString *detectionVocabularyName;

+ (id)sceneNetV5ConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (long long)_resolvedRevision:(long long)a0;
+ (id)availableRevisions;

- (void).cxx_destruct;
- (id)newCityNatureConfigurationAndReturnError:(id *)a0;
- (id)newClassifierAlphaConfigurationAndReturnError:(id *)a0;
- (id)newClassifierBetaConfigurationAndReturnError:(id *)a0;
- (id)newJunkHierarchicalConfigurationAndReturnError:(id *)a0;
- (id)newJunkLeafConfigurationAndReturnError:(id *)a0;
- (id)sceneTaxonomyWithError:(id *)a0;
- (id)aestheticsTaxonomyWithError:(id *)a0;
- (id)detectionTaxonomyWithError:(id *)a0;
- (id)initSceneNetV5ConfigurationForRevision:(long long)a0 espressoNetPath:(id)a1 inputImageTensorName:(id)a2 inputImageDimension:(unsigned long long)a3 inputImageBytesPerRowAlignment:(unsigned long long)a4 scenePrintTensorName:(id)a5 sceneClassificationTensorName:(id)a6 sceneTaxonomyPath:(id)a7 aestheticsAttributesTensorName:(id)a8 aestheticsGlobalScoresTensorName:(id)a9 aestheticsTaxonomyPath:(id)a10 detectionScoreHeatMapName:(id)a11 detectionCoordinateOffsetMapName:(id)a12 detectionTaxonomyPath:(id)a13 detectionHeadIsSoftmax:(BOOL)a14 detectionNMSThreshold:(float)a15 saliencyAttentionTensorName:(id)a16 saliencyAMapDimension:(unsigned long long)a17 saliencyObjectnessTensorName:(id)a18 saliencyOMapDimension:(unsigned long long)a19 fingerprintEmbeddingTensorName:(id)a20 fingerprintModelPath:(id)a21 entityNetClassificationTensorName:(id)a22 leafSceneClassificationVocabularyName:(id)a23 hierarchicalSceneClassificationVocabularyName:(id)a24 entityNetVocabularyName:(id)a25 aestheticsAttributeVocabularyName:(id)a26 aestheticsGlobalScoreVocabularyName:(id)a27 detectionVocabularyName:(id)a28;
- (id)newSafetyNetLightConfigurationAndReturnError:(id *)a0;

@end
