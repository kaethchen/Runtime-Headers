@interface MPSCNNPoolingAverage : MPSCNNPooling

@property (nonatomic) unsigned long long zeroPadSizeX;
@property (nonatomic) unsigned long long zeroPadSizeY;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithDevice:(id)a0 kernelWidth:(unsigned long long)a1 kernelHeight:(unsigned long long)a2 strideInPixelsX:(unsigned long long)a3 strideInPixelsY:(unsigned long long)a4;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (BOOL)isResultStateReusedAcrossBatch;
- (id)newPlugin;
- (BOOL)pluginSupportsBatchEncode;

@end
