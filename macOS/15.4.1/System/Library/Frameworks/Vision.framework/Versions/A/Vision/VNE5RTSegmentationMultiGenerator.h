@class NSDictionary, NSArray;

@interface VNE5RTSegmentationMultiGenerator : VNE5RTBasedDetector

@property (class, readonly, copy) NSDictionary *requestKeyToRequestInfo;
@property (class, readonly, copy) NSDictionary *outputMaskBlobNameToFeatureName;
@property (class, readonly, copy) NSDictionary *outputMaskBlobNameToRequestKey;
@property (class, readonly, copy) NSArray *outputMaskBlobNames;
@property (class, readonly) unsigned long long modelVersion;

+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)outputConfidenceBlobNames;
+ (id)requestInfoForRequest:(id)a0;
+ (id)requestKeyToRequestInfo;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)supportedOutputPixelFormatsForOptions:(id)a0 error:(id *)a1;

- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (BOOL)imageCropAndScaleOption:(unsigned long long *)a0 fromOptions:(id)a1 error:(id *)a2;
- (BOOL)needsMetalContext;
- (struct __CVBuffer { } *)renderCIImage:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 format:(unsigned int)a3 vnciContextManager:(id)a4 error:(id *)a5;

@end
