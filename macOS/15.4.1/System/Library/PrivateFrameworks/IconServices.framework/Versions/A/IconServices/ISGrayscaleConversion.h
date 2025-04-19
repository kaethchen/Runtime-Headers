@interface ISGrayscaleConversion : NSObject

- (BOOL)computeGrayscaleConversionColorWithCGImage:(struct CGImage { } *)a0 grayscaleConversion:(void *)a1;
- (void /* unknown type, empty encoding */)computeGrayscaleConversionColorWithNumberOfRepresentativeSamples:(int)a0 representativeSamples:(const void *)a1;
- (void /* unknown type, empty encoding */)computeGrayscaleConversionColorWithWidth:(int)a0 height:(int)a1 ucharSamples:(const void *)a2;

@end
