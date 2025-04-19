@class MRImage, MRSlideProvider;

@interface MRFloatingRenderable : MUPoolObject {
    MRSlideProvider *provider;
    struct CGSize { double width; double height; } size;
    double shadowWidth;
    double shadowHeight;
    unsigned long long vboOffsetPlain;
    unsigned long long vboOffsetSoft;
    unsigned long long vboOffsetShadow;
    double aspectRatio;
    double scale;
    struct CGPoint { double x; double y; } bottomLeft;
    struct CGPoint { double x; double y; } topRight;
    MRFloatingRenderable *next;
}

@property (retain, nonatomic) MRImage *slide;

+ (void)initialize;
+ (struct { Class x0; id x1; id x2; BOOL x3; BOOL x4; } *)poolInfo;

- (void)dealloc;
- (void)purge;

@end
