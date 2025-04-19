@class NSImage, PKMacLinedPaperView, NSString;

@interface PKTextAttachmentDrawingViewTile : NSView <CAAnimationDelegate>

@property (nonatomic) BOOL topTile;
@property (nonatomic) BOOL bottomTile;
@property (nonatomic) BOOL scheduled;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } drawingFrame;
@property (nonatomic, getter=isValid) BOOL valid;
@property (retain, nonatomic) PKMacLinedPaperView *linedPaperView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setBackgroundImage:(id)a0;
- (void)setImage:(id)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 drawingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setTemporaryImage:(id)a0;

@end
