@class NSArray, NSString, NSURL, NSDictionary;

@interface ANSTInferenceDescriptor : ANSTDescriptor {
    NSDictionary *_inputTensorDescriptors;
    NSDictionary *_outputTensorDescriptors;
    NSDictionary *_inputPixelBufferDescriptors;
    NSDictionary *_outputPixelBufferDescriptors;
}

@property (readonly, copy, nonatomic) NSArray *allInputTensorDescriptors;
@property (readonly, copy, nonatomic) NSArray *allOutputTensorDescriptors;
@property (readonly, copy, nonatomic) NSArray *allInputPixelBufferDescriptors;
@property (readonly, copy, nonatomic) NSArray *allOutputPixelBufferDescriptors;
@property (readonly, nonatomic) BOOL requiresPostprocessing;
@property (readonly, copy, nonatomic) NSString *espressoConfigurationName;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSURL *networkFileURL;
@property (readonly, copy, nonatomic) NSURL *assetURL;
@property (readonly, nonatomic) long long assetType;
@property (readonly, copy, nonatomic) NSString *e5FunctionName;
@property (readonly, copy, nonatomic) NSArray *inputDescriptors;
@property (readonly, copy, nonatomic) NSArray *outputDescriptors;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 error:(id *)a1;
- (BOOL)_buildCategorizedDescriptorsCacheWithError:(id *)a0;
- (id)initWithName:(id)a0 version:(unsigned long long)a1 assetURL:(id)a2 assetType:(long long)a3 e5FunctionName:(id)a4 inputDescriptors:(id)a5 outputDescriptors:(id)a6 error:(id *)a7;
- (id)inputPixelBufferDescriptorNamed:(id)a0;
- (id)inputTensorDescriptorNamed:(id)a0;
- (id)newPostprocessorWithError:(id *)a0;
- (id)outputPixelBufferDescriptorNamed:(id)a0;
- (id)outputTensorDescriptorNamed:(id)a0;

@end
