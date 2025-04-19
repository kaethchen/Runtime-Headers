@class NSImage, NSMutableArray;

@interface MKStarRatingView : NSView {
    double _padding;
    NSMutableArray *_ratingViews;
    long long _numReviews;
}

@property (nonatomic) unsigned long long numberOfRatingLevels;
@property (nonatomic) double rating;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) NSImage *fullStarImage;
@property (retain, nonatomic) NSImage *halfStarImage;
@property (retain, nonatomic) NSImage *emptyStarImage;
@property (retain, nonatomic) NSImage *fullStarHighlightedImage;
@property (retain, nonatomic) NSImage *halfStarHighlightedImage;
@property (retain, nonatomic) NSImage *emptyStarHighlightedImage;
@property (nonatomic) long long starStyle;

+ (id)colorForRating:(double)a0;
+ (id)ratingAsAttributedString:(double)a0 baseFont:(id)a1 style:(long long)a2 theme:(id)a3;
+ (id)ratingShortAsAttributedString:(double)a0 baseFont:(id)a1 theme:(id)a2;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)_commonInit;
- (void)_updateLayerGeometryFromView;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidChangeBackingProperties;
- (void)setPadding:(double)a0;
- (void)_layoutStarViewsCreatingIfNeeded:(BOOL)a0;
- (id)imageWithName:(id)a0 andColor:(id)a1;
- (double)verticalAlignmentCenterPercentage;

@end
