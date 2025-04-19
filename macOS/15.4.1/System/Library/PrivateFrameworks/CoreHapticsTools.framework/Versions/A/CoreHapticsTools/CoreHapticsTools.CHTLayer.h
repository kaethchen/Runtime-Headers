@interface CoreHapticsTools.CHTLayer : CALayer {
    void /* unknown type, empty encoding */ doc;
    void /* unknown type, empty encoding */ selectedObjectsDelegate;
    void /* unknown type, empty encoding */ _theme;
    void /* unknown type, empty encoding */ adsrRenderingMode;
    void /* unknown type, empty encoding */ customBorderWidth;
    void /* unknown type, empty encoding */ dashPatternLengths;
    void /* unknown type, empty encoding */ prevBounds;
    void /* unknown type, empty encoding */ windowDuration;
    void /* unknown type, empty encoding */ lineThickness;
    void /* unknown type, empty encoding */ renderProcessingQueue;
    void /* unknown type, empty encoding */ hasCalculatedAllPaths;
    void /* unknown type, empty encoding */ cachedImage;
    void /* unknown type, empty encoding */ cachedImageLock;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) void /* unknown type, empty encoding */ hasDrawnPaths;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLayer:(id)a0;

@end
