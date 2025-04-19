@class VNRegionOfInterestTilingOptions, CSUSceneNetV5, VNCoreSceneUnderstandingDetectorTaxonomy, CSUSceneNetV5CustomClassifier;

@interface VNCoreSceneUnderstandingDetector : VNDetector {
    CSUSceneNetV5 *_sceneNet;
    VNCoreSceneUnderstandingDetectorTaxonomy *_cachedSceneTaxonomy_DO_NOT_DIRECTLY_ACCESS;
    VNCoreSceneUnderstandingDetectorTaxonomy *_cachedEntityNetTaxonomy_DO_NOT_DIRECTLY_ACCESS;
    VNCoreSceneUnderstandingDetectorTaxonomy *_cachedDetectedObjectsTaxonomy_DO_NOT_DIRECTLY_ACCESS;
    unsigned int _inputImagePixelFormat;
    unsigned long long _inputImagePixelWidth;
    unsigned long long _inputImagePixelHeight;
    unsigned long long _inputImageMinimumDimension;
    VNRegionOfInterestTilingOptions *_inputImageTilingOptions;
    CSUSceneNetV5CustomClassifier *_junkLeafClassifier;
    CSUSceneNetV5CustomClassifier *_junkHierarchicalClassifier;
    CSUSceneNetV5CustomClassifier *_VN5kJNH3eYuyaLxNpZr5Z7ziCLassifier;
    CSUSceneNetV5CustomClassifier *_significantEventClassifier;
    CSUSceneNetV5CustomClassifier *_cityNatureClassifier;
}

@property (readonly) long long sceneNetConfigurationRevision;

+ (id)_newSaliencyHeatmapBoundingBoxGeneratorOptionsForOptions:(id)a0;
+ (id)_specialCaseRecognizedObjectsDuplicationsForOriginatingRequestSpecifier:(id)a0;
+ (id)allCityNatureIdentifiersWithConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)allClassificationIdentifiersWithConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)allRecognizedObjectIdentifiersWithConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)allSignificantEventIdentifiersWithConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)allVN5kJNH3eYuyaLxNpZr5Z7ziIdentifiersWithConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)computeStagesToBindForConfigurationOptions:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (BOOL)handlesRequestClass:(Class)a0 revision:(unsigned long long)a1;
+ (id)keyForDetectorWithConfigurationOptions:(id)a0;
+ (BOOL)producesObservationsForMultipleRequestClasses;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (BOOL)needsMetalContext;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (BOOL)warmUpSession:(id)a0 withOptions:(id)a1 error:(id *)a2;

@end
