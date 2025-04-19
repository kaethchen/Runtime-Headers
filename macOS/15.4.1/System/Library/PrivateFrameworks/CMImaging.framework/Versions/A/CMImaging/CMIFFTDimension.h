@class NSDictionary;

@interface CMIFFTDimension : NSObject

@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long iStride;
@property (readonly, nonatomic) unsigned long long oStride;
@property (readonly, nonatomic) NSDictionary *primeFactors;

- (void).cxx_destruct;
- (id)initWithSize:(unsigned long long)a0 iStride:(unsigned long long)a1 oStride:(unsigned long long)a2 primeFactors:(id)a3;

@end
