@class NSArray;

@interface QCImageConversionSequence : NSObject {
    NSArray *_sequence;
}

- (void)dealloc;
- (id)description;
- (double)_computeStepsInSequence:(id)a0 withConverters:(id)a1 softwareOnly:(BOOL)a2 accelerated:(BOOL)a3 sourceTarget:(unsigned int)a4 sourceFormat:(id)a5 sourceColorSpace:(struct CGColorSpace { } *)a6 destinationTarget:(unsigned int)a7 destinationFormat:(id)a8 destinationColorSpace:(struct CGColorSpace { } *)a9 transformation:(int)a10 bestScore:(double)a11 baseCost:(float)a12 inLoop:(BOOL)a13;
- (id)applyWithManager:(id)a0 buffer:(id)a1 transformation:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 options:(id)a4;
- (id)initWithConverters:(id)a0 softwareOnly:(BOOL)a1 sourceTarget:(unsigned int)a2 sourceFormat:(id)a3 sourceColorSpace:(struct CGColorSpace { } *)a4 destinationTarget:(unsigned int)a5 destinationFormat:(id)a6 destinationColorSpace:(struct CGColorSpace { } *)a7 transformationType:(int)a8;

@end
