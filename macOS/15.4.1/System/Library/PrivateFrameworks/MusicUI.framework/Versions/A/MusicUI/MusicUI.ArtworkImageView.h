@class NSColor;

@interface MusicUI.ArtworkImageView : NSImageView {
    void /* unknown type, empty encoding */ onBackgroundColorWillChange;
    void /* unknown type, empty encoding */ accessoryArtworkCatalog;
    void /* unknown type, empty encoding */ accessoryStyle;
    void /* unknown type, empty encoding */ contentMode;
    void /* unknown type, empty encoding */ accessoryImageView;
    void /* unknown type, empty encoding */ accessoryStrokeView;
}

@property (nonatomic, retain) NSColor *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)viewDidMoveToSuperview;

@end
