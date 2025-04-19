@class SFPunchout, SearchUITrailersCardSectionView, NSView, TLKLabel, SearchUIButton;

@interface SearchUITrailerView : TLKStackView

@property (weak, nonatomic) SearchUITrailersCardSectionView *cardSectionView;
@property (retain, nonatomic) SearchUIButton *playButton;
@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) SFPunchout *punchout;
@property (retain, nonatomic) NSView *centeredBoxView;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseDown:(id)a0;
- (void)playTrailer;
- (id)initWithMediaItem:(id)a0 cardSectionView:(id)a1;

@end
