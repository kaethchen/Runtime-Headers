@class SFPunchout, SearchUIOfferButtonView, SearchUILabel, SearchUIMovieCardSectionView, NSString;

@interface SearchUIMovieCardSectionBuyButtonView : TLKStackView <NSAccessibilityGroup>

@property (retain, nonatomic) SearchUILabel *subtitleLabel;
@property (retain, nonatomic) SearchUIOfferButtonView *button;
@property (retain, nonatomic) SFPunchout *punchout;
@property (weak, nonatomic) SearchUIMovieCardSectionView *cardSectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)accessibilityRole;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)buttonPressed;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 punchout:(id)a2 cardSectionView:(id)a3;

@end
