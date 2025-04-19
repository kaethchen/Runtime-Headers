@interface NSColorWellEndcapButton : NSButton

@property BOOL hasCustomImage;

+ (Class)cellClass;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)shouldBeArchived;
- (void)sizeToFit;
- (void)updateLayer;

@end
