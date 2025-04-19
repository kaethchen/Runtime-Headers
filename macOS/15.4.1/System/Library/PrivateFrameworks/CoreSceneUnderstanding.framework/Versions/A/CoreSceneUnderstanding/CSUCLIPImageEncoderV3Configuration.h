@class NSString, CSUPixelBufferDescriptor, NSArray;
@protocol MLComputeDeviceProtocol;

@interface CSUCLIPImageEncoderV3Configuration : NSObject <CSUCLIPImageEncoderConfiguration>

@property (readonly) int espressoExecutionEngine;
@property (readonly, copy, nonatomic) NSString *espressoNetworkPath;
@property (readonly, copy, nonatomic) NSString *inputImageTensorName;
@property (readonly, copy, nonatomic) NSString *imageEmbeddingTensorName;
@property (readonly, nonatomic) CSUPixelBufferDescriptor *inputPixelBufferDescriptor;
@property (readonly, copy, nonatomic) NSArray *supportedComputeDevices;
@property (retain, nonatomic) id<MLComputeDeviceProtocol> computeDevice;
@property (readonly, nonatomic) long long revision;

+ (id)CLIPImageEncoderV3ConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (long long)_resolvedRevision:(long long)a0;
+ (id)availableRevisions;

- (void).cxx_destruct;
- (id)initCLIPImageEncoderV3ConfigurationForRevision:(long long)a0 espressoNetPath:(id)a1 inputImageTensorName:(id)a2 inputImageDimension:(unsigned long long)a3 inputImageBytesPerRowAlignment:(unsigned long long)a4 imageEmbeddingTensorName:(id)a5;

@end
