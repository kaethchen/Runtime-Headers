@class SLDisambiguationAttributionContentView, NSImageView;

@interface SLDisambiguationAttributionView : NSView

@property (retain, nonatomic) SLDisambiguationAttributionContentView *contentView;
@property (retain, nonatomic) NSImageView *glyphView;

- (void).cxx_destruct;
- (double)expectedHeightWithRemoteContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributionID:(id)a1 symbol:(id)a2;

@end
