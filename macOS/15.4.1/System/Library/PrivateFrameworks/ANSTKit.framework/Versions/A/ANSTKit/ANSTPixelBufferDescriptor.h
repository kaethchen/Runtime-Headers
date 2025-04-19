@class NSDictionary;

@interface ANSTPixelBufferDescriptor : ANSTDescriptor

@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned int pixelFormatType;
@property (readonly, copy, nonatomic) NSDictionary *pixelBufferAttributes;

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
- (id)initWithName:(id)a0 pixelBufferAttributes:(id)a1 error:(id *)a2;
- (id)initWithName:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 pixelFormatType:(unsigned int)a3 pixelBufferAttributes:(id)a4 error:(id *)a5;

@end
