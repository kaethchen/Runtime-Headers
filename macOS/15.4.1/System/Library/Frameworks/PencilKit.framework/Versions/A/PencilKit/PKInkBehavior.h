@class NSString, NSArray, PKInkSmoothingDescriptor, PKInkParticleDescriptor, PKInkAnimationDescriptor, NSMutableArray, PKInkFeatheringDescriptor, PKInkRenderingDescriptor;

@interface PKInkBehavior : NSObject {
    BOOL _usesAzimuthOrAltitude;
    BOOL _showBrushIndicator;
    double _rulerOffsetScale;
    double _rulerOffsetConstant;
    NSMutableArray *_cachedRadiusFunctions;
    NSMutableArray *_cachedRadius2Functions;
    NSMutableArray *_cachedOpacityFunctions;
    NSMutableArray *_cachedEdgeWidthFunctions;
    NSMutableArray *_cachedAspectRatioFunctions;
    struct unique_ptr<PKFunction, std::default_delete<PKFunction>> { struct __compressed_pair<PKFunction *, std::default_delete<PKFunction>> { struct PKFunction *__value_; } __ptr_; } _weightFunction;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__value_; } __end_cap_; } _radiusOutput;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__value_; } __end_cap_; } _radius2Output;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__value_; } __end_cap_; } _opacityOutput;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__value_; } __end_cap_; } _edgeWidthOutput;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__value_; } __end_cap_; } _aspectRatioOutput;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__value_; } __end_cap_; } _brushOpacityOutput;
}

@property (nonatomic, getter=showBrushIndicator, setter=setShowBrushIndicator:) BOOL showBrushIndicator;
@property (nonatomic, setter=setRulerOffsetScale:) double rulerOffsetScale;
@property (nonatomic, setter=setRulerOffsetConstant:) double rulerOffsetConstant;
@property (readonly, nonatomic) BOOL immutableVelocity;
@property (nonatomic, getter=usesAzimuthOrAltitude, setter=setUsesAzimuthOrAltitude:) BOOL usesAzimuthOrAltitude;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSString *variant;
@property (readonly, nonatomic) PKInkRenderingDescriptor *renderingDescriptor;
@property (readonly, nonatomic) PKInkParticleDescriptor *particleDescriptor;
@property (readonly, nonatomic) PKInkParticleDescriptor *secondaryParticleDescriptor;
@property (readonly, nonatomic) NSArray *inkFunctions;
@property (nonatomic) double blendAlpha;
@property (nonatomic) double targetMultiple;
@property (nonatomic) double baseAlpha;
@property (nonatomic) BOOL useUnclampedWeight;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } inkTransform;
@property (nonatomic) BOOL supportsCombiningStrokes;
@property (copy, nonatomic) NSArray *uiWidths;
@property (nonatomic) double defaultWidth;
@property (retain, nonatomic) PKInkSmoothingDescriptor *smoothingDescriptor;
@property (retain, nonatomic) PKInkFeatheringDescriptor *featheringDescriptor;
@property (retain, nonatomic) PKInkFeatheringDescriptor *pencilFeatheringDescriptor;
@property (retain, nonatomic) PKInkAnimationDescriptor *animationDescriptor;
@property (readonly, nonatomic) BOOL isEraser;

+ (id)arrayFromVector:(struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; })a0;
+ (id)inkFunctionForProperty:(unsigned long long)a0 outputFunctions:(void *)a1 index:(unsigned long long)a2;
+ (double)inkRadiusOverride;
+ (id)loadInkV2WithURL:(id)a0;
+ (struct PKOutputFunction { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct unique_ptr<PKFunction, std::default_delete<PKFunction>> { struct __compressed_pair<PKFunction *, std::default_delete<PKFunction>> { struct PKFunction *x0; } x0; } x4; })outputFunctionFromInkFunction:(id)a0;

- (id)description;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_calculateUsesAzimuthOrAltitude;
- (double)alphaForStroke:(id)a0;
- (double)evaluateWeight:(double)a0;
- (void)addNewInkFunction:(id)a0;
- (double)alphaForStrokeColor:(struct CGColor { } *)a0;
- (double)brushOpacityForPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a0 context:(struct { struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; } x0; BOOL x1; long long x2; double x3; double x4; double x5; double x6; id x7; unsigned long long x8; } *)a1;
- (double)edgeWidthForPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a0 context:(struct { struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; } x0; BOOL x1; long long x2; double x3; double x4; double x5; double x6; id x7; unsigned long long x8; } *)a1;
- (id)functionsForProperty:(unsigned long long)a0;
- (id)initWithRenderingDescriptor:(id)a0 blendAlpha:(double)a1 targetMultiple:(double)a2 baseAlpha:(double)a3 inkTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 useUnclampedWeight:(BOOL)a5 smoothingDescriptor:(id)a6 featheringDescriptor:(id)a7 pencilFeatheringDescriptor:(id)a8 animationDescriptor:(id)a9 identifier:(id)a10 version:(unsigned long long)a11 variant:(id)a12 uiWidths:(id)a13 defaultWidth:(double)a14 showBrushIndicator:(BOOL)a15 supportsCombiningStrokes:(BOOL)a16 rulerOffsetScale:(double)a17 rulerOffsetConstant:(double)a18 weightFunction:(id)a19 inkFunctions:(id)a20;
- (id)initWithRenderingDescriptor:(id)a0 blendAlpha:(double)a1 targetMultiple:(double)a2 baseAlpha:(double)a3 inkTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 useUnclampedWeight:(BOOL)a5 smoothingDescriptor:(id)a6 featheringDescriptor:(id)a7 pencilFeatheringDescriptor:(id)a8 animationDescriptor:(id)a9 identifier:(id)a10 version:(unsigned long long)a11 variant:(id)a12 uiWidths:(id)a13 defaultWidth:(double)a14 showBrushIndicator:(BOOL)a15 supportsCombiningStrokes:(BOOL)a16 rulerOffsetScale:(double)a17 rulerOffsetConstant:(double)a18 weightFunction:(void *)a19 radiusOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; } x2; })a20 radius2Output:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; } x2; })a21 opacityOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; } x2; })a22 edgeWidthOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; } x2; })a23 aspectRatioOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; } x2; })a24 brushOpacityOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; } x2; })a25;
- (id)initWithRenderingDescriptor:(id)a0 variant:(id)a1;
- (void)inkFunctionDidChange:(id)a0;
- (id)inkFunctions;
- (id)inkFunctionsForProperty:(unsigned long long)a0;
- (BOOL)isEraser;
- (struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })outputForPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a0 context:(struct { struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; } x0; BOOL x1; long long x2; double x3; double x4; double x5; double x6; id x7; unsigned long long x8; } *)a1;
- (struct PKOutputFunction { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct unique_ptr<PKFunction, std::default_delete<PKFunction>> { struct __compressed_pair<PKFunction *, std::default_delete<PKFunction>> { struct PKFunction *x0; } x0; } x4; })outputFunctionFromInkFunction:(id)a0;
- (void *)outputVectorForProperty:(unsigned long long)a0;
- (id)particleTextureName;
- (double)radiusForPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a0 context:(struct { struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; } x0; BOOL x1; long long x2; double x3; double x4; double x5; double x6; id x7; unsigned long long x8; } *)a1;
- (void)removeInkFunction:(id)a0;
- (double)rulerOffsetForBaseValues:(struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })a0 inputType:(long long)a1 inputScale:(double)a2;
- (void)setAspectRatioOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; } x2; })a0;
- (void)setBrushOpacityOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; } x2; })a0;
- (void)setEdgeWidthOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; } x2; })a0;
- (void)setOpacityOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; } x2; })a0;
- (void)setRadius2Output:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; } x2; })a0;
- (void)setRadiusOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; } x2; })a0;
- (void)setWeightFunction:(struct unique_ptr<PKFunction, std::default_delete<PKFunction>> { struct __compressed_pair<PKFunction *, std::default_delete<PKFunction>> { struct PKFunction *x0; } x0; })a0;
- (double)solve:(void *)a0 forPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a1 context:(struct { struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; } x0; BOOL x1; long long x2; double x3; double x4; double x5; double x6; id x7; unsigned long long x8; } *)a2 weight:(double)a3;

@end
