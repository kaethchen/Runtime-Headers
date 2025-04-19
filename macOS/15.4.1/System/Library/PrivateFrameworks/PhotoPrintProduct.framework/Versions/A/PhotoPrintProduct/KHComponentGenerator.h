@class KHProject, KHProductSpecificationComponent;

@interface KHComponentGenerator : NSObject {
    double _scale;
}

@property (retain, nonatomic) KHProductSpecificationComponent *component;
@property (retain, nonatomic) KHProject *project;

+ (struct CGImage { } *)createImageFromBitmapContext:(struct CGContext { } *)a0;

- (void)dealloc;
- (long long)numberOfSections;
- (double)heightForSection:(long long)a0;
- (struct CGColorSpace { } *)_createColorspace;
- (struct CGImage { } *)cgImageForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 renderingIntent:(unsigned long long)a2 section:(long long)a3 progressDelegate:(id)a4 error:(id *)a5;
- (void)clearTextAttribute:(id)a0 layout:(id)a1;
- (struct CGContext { } *)createBitmapContextForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 renderingIntent:(unsigned long long)a2 section:(long long)a3 progressDelegate:(id)a4 error:(id *)a5;
- (void)drawBackgroundInContext:(struct CGContext { } *)a0 fromLayout:(id)a1 forPath:(struct CGPath { } *)a2 scale:(double)a3;
- (void)drawGuideLineFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 context:(struct CGContext { } *)a2;
- (void)drawGuideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (void)drawSpineText:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2;
- (void)fillContext:(struct CGContext { } *)a0 scale:(double)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 renderingIntent:(unsigned long long)a3 section:(long long)a4 progressDelegate:(id)a5;
- (void)fillPrintContext300DPI:(struct CGContext { } *)a0 scale:(double)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)fillPrintContext72DPI:(struct CGContext { } *)a0 scale:(double)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)fillPrintContext:(struct CGContext { } *)a0 scale:(double)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)hasTemplate;
- (double)heightWithBleedForSection:(long long)a0;
- (id)initWithComponent:(id)a0 project:(id)a1;
- (id)layoutAtIndex:(unsigned long long)a0 maxCount:(unsigned long long)a1;
- (id)photoFrames;
- (BOOL)preflightPhotoFrames:(id *)a0;
- (BOOL)shouldDrawGuidesForRenderingIntent:(unsigned long long)a0;
- (double)templateHeight;
- (double)templateWidth;
- (double)widthForSection:(long long)a0;
- (double)widthWithBleedForSection:(long long)a0;

@end
