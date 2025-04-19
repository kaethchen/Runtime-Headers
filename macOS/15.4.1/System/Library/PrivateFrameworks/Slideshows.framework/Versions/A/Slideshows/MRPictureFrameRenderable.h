@class MRImage, NSString;

@interface MRPictureFrameRenderable : MUPoolObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } innerRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outerRect;
    BOOL ignoreBlend;
    MRPictureFrameRenderable *next;
}

@property (retain, nonatomic) MRImage *image;
@property (copy, nonatomic) NSString *where;

+ (struct { Class x0; id x1; id x2; BOOL x3; BOOL x4; } *)poolInfo;

- (void)dealloc;
- (void)purge;

@end
