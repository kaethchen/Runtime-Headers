@class NSView, NSLayoutConstraint;

@interface ICCollapsibleBaseView : NSView

@property (retain, nonatomic) NSView *contentView;
@property (retain, nonatomic) NSLayoutConstraint *zeroWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint;
@property (nonatomic) BOOL setupComplete;
@property (nonatomic) double leadingSpace;
@property (nonatomic) double trailingSpace;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)performSetup;
- (BOOL)wantsLayer;
- (void)ic_setNeedsUpdateConstraints;
- (void)performSetUpWithContentView:(id)a0;
- (void)setUpIfNeeded;

@end
