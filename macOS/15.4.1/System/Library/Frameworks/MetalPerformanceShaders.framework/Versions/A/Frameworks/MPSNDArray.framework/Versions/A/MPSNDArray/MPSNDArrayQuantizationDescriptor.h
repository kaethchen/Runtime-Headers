@interface MPSNDArrayQuantizationDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int quantizationDataType;
@property (readonly, nonatomic) unsigned long long quantizationScheme;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (long long)getNDArrayCount;
- (id)initWithDataType:(unsigned int)a0 quantizationScheme:(unsigned long long)a1;
- (void)setQuantizationDataType:(unsigned int)a0;

@end
