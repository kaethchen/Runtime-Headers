@interface MPSNDArrayQuantizedConvolution : MPSNDArrayConvolution2D

+ (BOOL)supportsDestinationQuantizationWithDescriptor:(id)a0 device:(void *)a1;
+ (BOOL)supportsSourceQuantizationWithDescriptor:(id)a0 atIndex:(unsigned long long)a1 device:(void *)a2;

- (void)dealloc;
- (id)initWithDevice:(id)a0 ndArrayConvolution2DDescriptor:(id)a1 dataQuantizationDescriptor:(id)a2 weightsQuantizationDescriptor:(id)a3;
- (id)initWithDevice:(id)a0 ndArrayConvolution2DDescriptor:(id)a1 dataQuantizationDescriptor:(id)a2 weightsQuantizationDescriptor:(id)a3 sourceCount:(unsigned long long)a4;

@end
