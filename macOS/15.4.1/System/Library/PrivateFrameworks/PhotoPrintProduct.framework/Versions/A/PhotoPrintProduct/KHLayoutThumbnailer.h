@class NSImage, KHLayout, NSString;
@protocol KHLayoutThumbnailerDelegate;

@interface KHLayoutThumbnailer : NSOperation {
    KHLayout *_layout;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _thumbRect;
    NSImage *_gutterArt;
    NSImage *_image;
    int _shadowStyle;
    unsigned long long _renderingIntent;
    id<KHLayoutThumbnailerDelegate> _delegate;
    id _userInfo;
    struct CGImage { } *_CGImage;
    NSString *_placeHolderContrast;
    int _facing;
}

@property (nonatomic) BOOL shouldIgnoreDrawingBadges;
@property (nonatomic) BOOL shouldIgnoreDrawingTexts;
@property (nonatomic) double renderScaleMultiplier;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayout:(id)a0 inThumbRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 shadowStyle:(int)a2;

- (void)dealloc;
- (id)userInfo;
- (id)image;
- (id)layout;
- (void)main;
- (struct CGImage { } *)CGImage;
- (int)shadowStyle;
- (id)initWithLayout:(id)a0 thumbRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 shadowStyle:(int)a2 gutterArt:(id)a3 placeHolderContrast:(id)a4 facing:(int)a5 renderingIntent:(unsigned long long)a6;
- (id)initWithLayout:(id)a0 thumbRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 shadowStyle:(int)a2 gutterArt:(id)a3 placeHolderContrast:(id)a4 facing:(int)a5 renderingIntent:(unsigned long long)a6 delegate:(id)a7 userInfo:(id)a8;

@end
