@class MRImage, MRCroppingSprite;

@interface MRReflectionsRenderable : MUPoolObject {
    MRImage *_slide;
    MRCroppingSprite *_sprite;
    float _modelViewMatrix[16];
    struct CGPoint { double x; double y; } position;
    struct CGSize { double width; double height; } size;
    BOOL isShadow;
    MRReflectionsRenderable *next;
    BOOL needsFlipped;
    BOOL isBreak;
}

+ (struct { Class x0; id x1; id x2; BOOL x3; BOOL x4; } *)poolInfo;

- (void)dealloc;
- (void)purge;
- (id)initWithSlide:(id)a0 sprite:(id)a1 modelViewMatrix:(const float *)a2 position:(struct CGPoint { double x0; double x1; })a3 size:(struct CGSize { double x0; double x1; })a4 flipped:(BOOL)a5 isShadow:(BOOL)a6 isBreak:(BOOL)a7;

@end
