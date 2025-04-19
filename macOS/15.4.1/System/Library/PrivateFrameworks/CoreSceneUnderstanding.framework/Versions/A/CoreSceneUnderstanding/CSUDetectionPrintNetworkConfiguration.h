@class NSString, NSDictionary, CSUPixelBufferDescriptor, NSArray;
@protocol MLComputeDeviceProtocol;

@interface CSUDetectionPrintNetworkConfiguration : NSObject

@property (readonly) int espressoExecutionEngine;
@property (readonly, copy, nonatomic) NSString *espressoNetworkPath;
@property (readonly, copy, nonatomic) NSString *inputImageTensorName;
@property (readonly, copy, nonatomic) NSDictionary *outputTapPointFeatures;
@property (readonly, nonatomic) CSUPixelBufferDescriptor *inputPixelBufferDescriptor;
@property (readonly, copy, nonatomic) NSArray *supportedComputeDevices;
@property (retain, nonatomic) id<MLComputeDeviceProtocol> computeDevice;
@property (readonly, nonatomic) long long revision;

+ (id)detectionPrintConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (long long)_resolvedRevision:(long long)a0;
+ (id)availableRevisions;
+ (id)validateAndInitDetectionPrintForRevision:(long long)a0 forNetworkPath:(id)a1 withInputImageTensorName:(id)a2 withInputImageWidth:(unsigned long long)a3 withInputImageHeight:(unsigned long long)a4 withInputImageBytesPerRow:(unsigned long long)a5 withInputFeaturesDict:(id)a6 error:(id *)a7;

- (void).cxx_destruct;
- (id)initWithConfigurationForRevision:(long long)a0 espressoNetworkPath:(id)a1 inputImageTensorName:(id)a2 imageWidth:(unsigned long long)a3 imageHeight:(unsigned long long)a4 imageBytesPerRow:(unsigned long long)a5 featuresDict:(id)a6;

@end
