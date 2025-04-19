@class NSString, PARenderPipelineGeometry;

@interface IPAGeometryConverter : NSObject <IPAGeometryConverter> {
    PARenderPipelineGeometry *_geometry;
    struct PFIntSize_st { unsigned long long width; unsigned long long height; } _inputSize;
    long long _orientation;
    BOOL _computedInputToOutputTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _inputToOutputTransform;
    BOOL _computedOutputToInputTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _outputToInputTransform;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identityConvertorForSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a0;

- (id)init;
- (void).cxx_destruct;
- (struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })inputSize;
- (struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })outputSize;
- (id)_initWithGeometry:(id)a0 inputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a1 orientation:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_inputSpace;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_outputSpace;
- (void)computeIntersectionTypeForCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 transformedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 intersectionType:(unsigned long long *)a2 clippedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (unsigned long long)computeRectPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 intersectionSizeInPercent:(double *)a2;
- (struct ipa_rectConversionResult { unsigned long long x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; unsigned long long x3; })convertFromInputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct ipa_pointConversionResult { unsigned long long x0; unsigned long long x1; struct CGPoint { double x0; double x1; } x2; })convertFromOutputPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct ipa_rectConversionResult { unsigned long long x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; unsigned long long x3; })convertFromOutputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)distanceBetween:(struct CGPoint { double x0; double x1; })a0 and:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithGeometry:(id)a0 inputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a1 orientation:(long long)a2;
- (struct CGPoint { double x0; double x1; })inputPointFromOutputPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })inputToDisplayTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })inputToOutputTransform;
- (unsigned long long)intersectionTypeForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 point:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)isValidInputPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isValidInputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isValidOutputPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isValidOutputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })outputPointFromInputPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })outputToInputTransform;
- (void)translateInputPoint:(struct CGPoint { double x0; double x1; })a0 andInputRadius:(double)a1 toOutputPoint:(struct CGPoint { double x0; double x1; } *)a2 andOutputRadius:(double *)a3;
- (void)translateOutputPoint:(struct CGPoint { double x0; double x1; })a0 andOutputRadius:(double)a1 toInputPoint:(struct CGPoint { double x0; double x1; } *)a2 andInputRadius:(double *)a3;
- (struct CGPoint { double x0; double x1; })unitInputPointFromUnitOutputPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })unitOutputPointFromUnitInputPoint:(struct CGPoint { double x0; double x1; })a0;

@end
