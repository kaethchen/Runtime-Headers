@class NSString;

@interface AMPDesktopUI.AMPArtworkTableCell : AMPRolloverTableCell {
    void /* unknown type, empty encoding */ artworkID;
    void /* unknown type, empty encoding */ use16by9aspect;
    void /* unknown type, empty encoding */ showBouncyLines;
    void /* unknown type, empty encoding */ kArtworkCornerRadius;
    void /* unknown type, empty encoding */ kArtworkVerticalInset;
    void /* unknown type, empty encoding */ kArtworkSize;
    void /* unknown type, empty encoding */ kLeadingPadding;
    void /* unknown type, empty encoding */ kTrailingPadding;
}

@property (nonatomic, copy) NSString *artworkID;
@property (nonatomic, weak) void /* unknown type, empty encoding */ artworkView;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } fittingSize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
