@class MRImage, MRCroppingSprite;

@interface MRFlipupRenderable : MUPoolObject {
    double zPosition;
    BOOL needsBlend;
    BOOL isBreak;
    float modelViewMatrix[16];
    double color;
    double opacity;
    struct CGPoint { double x; double y; } position;
    struct CGSize { double width; double height; } size;
    float flippedModelViewMatrix[16];
    struct CGPoint { double x; double y; } reflectionPosition;
}

@property (retain, nonatomic) MRImage *slide;
@property (retain, nonatomic) MRCroppingSprite *sprite;
@property (retain, nonatomic) MRCroppingSprite *reflectionSprite;

+ (struct { Class x0; id x1; id x2; BOOL x3; BOOL x4; } *)poolInfo;

- (void)dealloc;
- (void)purge;

@end
