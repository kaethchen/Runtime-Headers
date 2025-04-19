@class NSURL, NSString, NSArray;

@interface VNFgBgE5MLProcess : NSObject

@property (readonly) NSURL *modelURL;
@property (readonly) NSString *inputImageName;
@property (readonly) NSArray *inputTensorNames;
@property (readonly) NSArray *outputTensorNames;

+ (id)multiArrayForOutput:(id)a0 inNamedObjects:(id)a1 fromFunctionDescriptor:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)newInputsForFunctionDescriptor:(id)a0 inputSurfaces:(id)a1 croppedPixelBuffer:(struct __CVBuffer { } *)a2 error:(id *)a3;

@end
