@class NSMutableSet, NSMutableDictionary;

@interface VNSmartCam5CompoundRequestGroupingConfiguration : NSObject {
    unsigned long long _imageCropAndScaleOption;
    NSMutableSet *_originalRequests;
    NSMutableDictionary *_detectorConfigurationOptions;
}

- (void).cxx_destruct;
- (void)addOriginalRequest:(id)a0;
- (id)detectorConfigurationOptions;
- (unsigned long long)imageCropAndScaleOption;
- (id)initWithImageCropAndScaleOption:(unsigned long long)a0;
- (id)originalRequests;
- (BOOL)preferBackgroundProcessing;
- (id)processingDevice;
- (void)setDetectorConfigurationOption:(id)a0 value:(id)a1;

@end
