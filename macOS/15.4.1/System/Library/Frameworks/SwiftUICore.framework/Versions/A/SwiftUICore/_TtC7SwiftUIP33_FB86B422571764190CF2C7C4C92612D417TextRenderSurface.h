@class CALayer;

@interface _TtC7SwiftUIP33_FB86B422571764190CF2C7C4C92612D417TextRenderSurface : NSObject <NSCustomTextSurface, CALayerDelegate> {
    void /* unknown type, empty encoding */ _layer;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ yDisplacement;
}

@property (nonatomic, readonly) CALayer *layer;

- (id)init;
- (void).cxx_destruct;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })adjustedContainerOrigin:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedLayoutFragmentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
