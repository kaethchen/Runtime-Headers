@class NSString, CSUPixelBufferDescriptor, NSArray;
@protocol MLComputeDeviceProtocol;

@interface CSUImageCaptioningEncoderConfiguration : NSObject {
    int _espressoExecutionEngine;
}

@property (readonly, copy, nonatomic) NSString *encoderNetworkPath;
@property (readonly, copy, nonatomic) NSString *inputImageTensorName;
@property (readonly, copy, nonatomic) NSString *imageEmbeddingTensorName;
@property (readonly, nonatomic) CSUPixelBufferDescriptor *inputPixelBufferDescriptor;
@property (readonly, copy, nonatomic) NSArray *supportedComputeDevices;
@property (retain, nonatomic) id<MLComputeDeviceProtocol> computeDevice;
@property int espressoExecutionEngine;
@property (readonly, nonatomic) long long revision;

+ (id)CSUImageCaptioningEncoderConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (long long)_resolvedRevision:(long long)a0;
+ (id)availableRevisions;
+ (id)createCSUImageCaptioningEncoderConfigurationWithConfigPath:(id)a0 error:(id *)a1;
+ (id)createCSUImageCaptioningEncoderConfigurationWithEspressoPath:(id)a0 andNetworkParams:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initImageCaptioningEncoderConfigurationForRevision:(long long)a0 espressoNetPath:(id)a1 inputImageTensorName:(id)a2 inputImageDimension:(unsigned long long)a3 inputImageBytesPerRowAlignment:(unsigned long long)a4 imageEmbeddingTensorName:(id)a5;

@end
