@class QLCustomTextLayer, NSString, CALayer, NSAttributedString;

@interface QLImageAndTextLayer : CALayer <CALayerDelegate> {
    CALayer *_imageLayerContainer;
    CALayer *_imageLayer;
    QLCustomTextLayer *_topTextLayer;
}

@property (retain) CALayer *imageLayer;
@property (retain) id image;
@property (retain) QLCustomTextLayer *textLayer;
@property (retain) NSAttributedString *text;
@property (retain) NSAttributedString *topText;
@property struct CGSize { double width; double height; } maxImageSize;
@property struct CGSize { double width; double height; } defaultImageSize;
@property struct CGSize { double width; double height; } minInfoSize;
@property struct CGSize { double width; double height; } maxInfoSize;
@property double margin;
@property double bottomMargin;
@property double topMargin;
@property BOOL tightLayout;
@property BOOL highlighted;
@property (nonatomic) BOOL perspectiveLayout;
@property BOOL liveResize;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageFrame;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } textFrame;
@property (readonly) struct CGSize { double x0; double x1; } optimalSize;
@property long long userInterfaceLayoutDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentsScale:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentBoundsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_idealTopTextHeightInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageFrameInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textVisible:(BOOL)a1;
- (double)_interspace;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textFrameInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromImageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_topTextFrameInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)optimalWidthWithHeight:(double)a0;
- (void)set_QLLayerAppearance:(id)a0;

@end
