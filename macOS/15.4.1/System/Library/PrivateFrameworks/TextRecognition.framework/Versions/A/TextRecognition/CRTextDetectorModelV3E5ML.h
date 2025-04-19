@class VisionCoreE5RTInferenceFunctionDescriptor;

@interface CRTextDetectorModelV3E5ML : NSObject {
    VisionCoreE5RTInferenceFunctionDescriptor *_functionDescriptor;
}

+ (id)defaultURLOfModelInThisBundle;
+ (id)E5RTFunctionDescriptorWithError:(id *)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)createExecutionContext;

@end
