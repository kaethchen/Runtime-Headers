@class PHPhotoLibrary, PFSceneTaxonomy, NSString;

@interface PHCPAnalyticsMediaPropertyProvider : NSObject <CPAnalyticsDynamicPropertyProvider, CPAnalyticsPhotoKitPropertyProvider>

@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PFSceneTaxonomy *sceneTaxonomy84;
@property (retain, nonatomic) PFSceneTaxonomy *sceneTaxonomy99;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_syndicationStateDescriptionForSyndicationState:(unsigned short)a0;
+ (id)_syndicationValueDescriptionForAssetProcessingValue:(unsigned short)a0;
+ (id)_wellKnownPhotoLibraryIdentifierDescription:(long long)a0;
+ (id)assetPropertySetsToFetch;

- (id)init;
- (void).cxx_destruct;
- (id)getDynamicProperty:(id)a0 forEventName:(id)a1 payloadForSystemPropertyExtraction:(id)a2;
- (id)initWithPhotoLibrary:(id)a0;
- (void)registerSystemProperties:(id)a0;
- (id)_sceneForAsset:(id)a0;
- (id)_PHAssetCollectionFromPayload:(id)a0;
- (id)_PHAssetFromPayload:(id)a0;
- (id)_ageDescriptionForMediaDate:(id)a0;
- (id)_cameraTypeFromImportSource:(long long)a0;
- (BOOL)_hasPeopleForSceneClassifications:(id)a0 sceneAnalysisVersion:(short)a1;
- (BOOL)_hasPetsForSceneClassifications:(id)a0 sceneAnalysisVersion:(short)a1;
- (BOOL)_isPeopleSceneIdentifier:(unsigned long long)a0;
- (BOOL)_isSceneConfidenceAboveThresholdForSceneClassification:(id)a0 sceneAnalysisVersion:(short)a1;
- (id)_junkConfidenceThresholdForIdentifier:(unsigned long long)a0 sceneAnalysisVersion:(short)a1;
- (id)_junkConfidenceThresholdVersion40ForIdentifier:(unsigned long long)a0;
- (id)_junkConfidenceThresholdVersion81ForIdentifier:(unsigned long long)a0;
- (id)_junkConfidenceThresholdVersion86ForIdentifier:(unsigned long long)a0;
- (id)_mediaCountFromPayload:(id)a0;
- (id)_mediaProperty:(id)a0 forAsset:(id)a1;
- (id)_mediaProperty:(id)a0 forAssetCollection:(id)a1;
- (id)_sceneConfidenceThresholdByClassificationIdentifier:(unsigned long long)a0 sceneAnalysisVersion:(short)a1;
- (id)_sceneLabelByClassificationIdentifier:(unsigned long long)a0;
- (id)_sceneNetLabelConfidenceForIdentifier:(unsigned long long)a0 sceneAnalysisVersion:(short)a1;
- (id)_sceneSubjectForAsset:(id)a0;
- (id)_sdConfidenceThresholdForIdentifier:(unsigned long long)a0 sceneAnalysisVersion:(short)a1;
- (id)_sdConfidenceThresholdVersion33ForIdentifier:(unsigned long long)a0;
- (id)_sdConfidenceThresholdVersion51ForIdentifier:(unsigned long long)a0;
- (id)_sdConfidenceThresholdVersion85ForIdentifier:(unsigned long long)a0;

@end
