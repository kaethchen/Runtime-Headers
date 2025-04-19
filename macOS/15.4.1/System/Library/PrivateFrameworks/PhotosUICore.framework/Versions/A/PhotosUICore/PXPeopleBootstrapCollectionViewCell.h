@class UXView, NSImage, UXImageView, PXPersonImageRequest;

@interface PXPeopleBootstrapCollectionViewCell : UXCollectionViewCell

@property (readonly, nonatomic) UXView *selectedCheckmarkView;
@property (readonly, nonatomic) UXView *unselectedCheckmarkView;
@property (readonly, nonatomic) UXImageView *badgeView;
@property (readonly, nonatomic) UXImageView *imageView;
@property (readonly, nonatomic) struct CGSize { double width; double height; } checkmarkImageSize;
@property (nonatomic) BOOL confirmed;
@property (nonatomic) unsigned long long presentationStatus;
@property (retain, nonatomic) PXPersonImageRequest *imageRequest;
@property (readonly, nonatomic) NSImage *image;
@property (nonatomic) BOOL isMergeCandidate;
@property (nonatomic) BOOL isVerified;

+ (id)cloudBadgeImage;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)_isRTL;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateCellSizing;
- (void)setImage:(id)a0 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
