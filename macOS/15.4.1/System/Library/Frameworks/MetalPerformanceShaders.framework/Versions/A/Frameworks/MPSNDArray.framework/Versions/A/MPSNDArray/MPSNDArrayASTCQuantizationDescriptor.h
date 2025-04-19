@interface MPSNDArrayASTCQuantizationDescriptor : MPSNDArrayQuantizationDescriptor

@property (nonatomic) BOOL hasMinValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (long long)getNDArrayCount;
- (id)initWithDataType:(unsigned int)a0 hasMinValue:(BOOL)a1;

@end
