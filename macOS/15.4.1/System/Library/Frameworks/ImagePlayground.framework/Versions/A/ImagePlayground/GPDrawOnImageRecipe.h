@interface GPDrawOnImageRecipe : NSObject {
    void /* unknown type, empty encoding */ _baseImage;
    void /* unknown type, empty encoding */ _sketchImage;
    void /* unknown type, empty encoding */ _sketchMask;
}

@property (nonatomic, retain) struct __CVBuffer { } *baseImage;
@property (nonatomic, retain) struct __CVBuffer { } *sketchImage;
@property (nonatomic, retain) struct __CVBuffer { } *sketchMask;
@property (nonatomic) void /* unknown type, empty encoding */ baseImageRatio;
@property (nonatomic) void /* unknown type, empty encoding */ sketchComplexityMeasure;
@property (nonatomic) void /* unknown type, empty encoding */ generateCaptionFromImage;
@property (nonatomic) void /* unknown type, empty encoding */ sanitizationCategory;
@property (nonatomic) void /* unknown type, empty encoding */ drawOnImageAssignmentOptions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBaseImage:(struct __CVBuffer { } *)a0 sketchImage:(struct __CVBuffer { } *)a1 sketchMask:(struct __CVBuffer { } *)a2 baseImageRatio:(double)a3 sketchComplexityMeasure:(double)a4 drawOnImageAssignmentOptions:(long long)a5;
- (id)initWithBaseImage:(struct __CVBuffer { } *)a0 sketchImage:(struct __CVBuffer { } *)a1 sketchMask:(struct __CVBuffer { } *)a2 baseImageRatio:(double)a3 sketchComplexityMeasure:(double)a4 generateCaptionFromImage:(BOOL)a5 drawOnImageAssignmentOptions:(long long)a6;
- (id)initWithBaseImage:(struct __CVBuffer { } *)a0 sketchImage:(struct __CVBuffer { } *)a1 sketchMask:(struct __CVBuffer { } *)a2 baseImageRatio:(double)a3 sketchComplexityMeasure:(double)a4 generateCaptionFromImage:(BOOL)a5 sanitizationCategory:(long long)a6 drawOnImageAssignmentOptions:(long long)a7;
- (id)initWithBaseImage:(struct __CVBuffer { } *)a0 sketchImage:(struct __CVBuffer { } *)a1 sketchMask:(struct __CVBuffer { } *)a2 sketchComplexityMeasure:(double)a3 drawOnImageAssignmentOptions:(long long)a4;

@end
