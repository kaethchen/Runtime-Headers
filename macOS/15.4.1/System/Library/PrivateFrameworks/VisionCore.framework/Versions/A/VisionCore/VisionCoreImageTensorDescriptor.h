@interface VisionCoreImageTensorDescriptor : VisionCoreTensorDescriptor

@property (readonly, nonatomic) unsigned int pixelFormatType;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) unsigned long long bytesPerRow;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)E5RTExecutionContextNewIOSurfacePropertiesAndReturnError:(id *)a0;
- (id)initWithANSTPixelBufferDescriptor:(id)a0;
- (id)initWithName:(id)a0 pixelFormatType:(unsigned int)a1 pixelWidth:(unsigned long long)a2 pixelHeight:(unsigned long long)a3;

@end
