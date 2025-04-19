@class NSImage, NSLayoutConstraint, NSTextField;

@interface SCTTableCellView : NSTableCellView

@property NSTextField *categoryText;
@property (retain) NSImage *imageNormal;
@property (retain) NSImage *imageSelected;
@property NSLayoutConstraint *imageWidthConstraint;
@property NSLayoutConstraint *imageHeightConstraint;
@property NSLayoutConstraint *imageTrailingConstraint;

- (void)setBackgroundStyle:(long long)a0;

@end
