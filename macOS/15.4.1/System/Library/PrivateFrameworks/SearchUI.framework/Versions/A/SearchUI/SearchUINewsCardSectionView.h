@class NUIContainerBoxView, SearchUIImageView, SearchUILabel, NUIContainerStackView, SearchUINewsCardGradientView;

@interface SearchUINewsCardSectionView : SearchUICardSectionView

@property (retain) NUIContainerStackView *contentView;
@property (retain) NUIContainerBoxView *baseBoxView;
@property (retain) NUIContainerBoxView *textContentBoxView;
@property (retain) NUIContainerStackView *textContentStackView;
@property (retain) SearchUINewsCardGradientView *gradientView;
@property (retain) SearchUIImageView *thumbnailImageView;
@property (retain) SearchUIImageView *providerImageView;
@property (retain) SearchUILabel *providerLabel;
@property (retain) SearchUILabel *titleLabel;
@property (retain) SearchUILabel *subtitleLabel;
@property BOOL overlaysTextInImage;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlightFrame;
- (id)setupContentView;
- (void)tlk_updateForAppearance:(id)a0;
- (id)highlightReferenceView;
- (struct CGSize { double x0; double x1; })largeThumbnailSize;
- (double)minThumbnailBottomSpacing;
- (double)providerImageVerticalOffset;
- (double)providerImageVerticalSizeDelta;
- (struct CGSize { double x0; double x1; })smallThumbnailSize;
- (double)stackViewVerticalSpacing;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })textContentInset;
- (void)updateLayoutForCardSection:(id)a0;
- (void)updateWithRowModel:(id)a0;

@end
