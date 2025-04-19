@class NSImageView, NSMutableDictionary, NSView, NSImage, NSLayoutConstraint, ICLabel, NSColor;

@interface ICImageAndMovieThumbnailView : NSView

@property (retain, nonatomic) NSImageView *imageView;
@property (retain, nonatomic) NSLayoutConstraint *imageViewLeftLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewRightLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewBottomLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewTopLayoutConstraint;
@property (retain, nonatomic) NSView *movieFooter;
@property (retain, nonatomic) ICLabel *movieDurationLabel;
@property (retain, nonatomic) NSMutableDictionary *hairlineLayers;
@property (retain, nonatomic) NSMutableDictionary *hairlineColors;
@property (nonatomic) BOOL showMovieDuration;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) double imageInset;
@property (nonatomic) BOOL showAsMovie;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } movieDuration;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSColor *borderColor;
@property (nonatomic) BOOL hairlineWidthUnitIsInPoint;
@property (nonatomic) unsigned long long hairlineEdges;
@property (nonatomic) unsigned long long edgesToRemoveStartPoint;
@property (nonatomic) unsigned long long edgesToRemoveEndPoint;
@property (nonatomic) double mininumScaleFactor;
@property (nonatomic) BOOL forceSquareImageAspectRatio;

- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (id)image;
- (void)commonInit;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCornerRadius:(double)a0;
- (double)pixelWidth;
- (double)imageInset;
- (void)setImageInset:(double)a0;
- (double)backingScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameByApplyingHorizontalReductionTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 edge:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameByApplyingVerticalReductionTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 edge:(unsigned long long)a1;
- (id)hairlineLayerForEdge:(unsigned long long)a0;
- (double)hairlineWidthInPoint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showMovieDuration:(BOOL)a1;
- (void)setHairlineColor:(id)a0 forEdges:(unsigned long long)a1;
- (void)setupMovieFooter;
- (void)updateDurationLabel;
- (void)updateHairline;
- (void)updateHairlineFrames;
- (BOOL)usesSeparateLayerForHairlineEdge:(unsigned long long)a0;
- (BOOL)usesSeparateLayersForHairlines;

@end
