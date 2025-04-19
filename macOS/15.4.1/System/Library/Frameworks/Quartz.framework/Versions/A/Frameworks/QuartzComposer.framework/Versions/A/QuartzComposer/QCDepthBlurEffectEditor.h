@class QCImagePort, QCStructurePort, QCNumberPort, NSMutableArray, CIFilter;

@interface QCDepthBlurEffectEditor : QCPatch {
    QCStructurePort *inputImages;
    QCNumberPort *inputAperture;
    QCImagePort *outputImage;
    QCImagePort *outputMainImage;
    QCImagePort *outputDisparityImage;
    QCImagePort *outputAlphaMatteImage;
    NSMutableArray *_inputImages;
    CIFilter *_cachedFilter;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (id)getCIImage:(id)a0 context:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForProvider:(id)a0;
- (id)transformImage:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;

@end
