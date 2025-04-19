@class NSImageView, NSTextField, NSLayoutConstraint, NSButton;

@interface PPSpecifierTableCellView : NSTableCellView {
    BOOL _selected;
    BOOL _enabled;
}

@property (getter=isSelected) BOOL selected;
@property (getter=isEnabled) BOOL enabled;
@property NSTextField *subtitleTextField;
@property NSButton *badge;
@property NSImageView *badgeImageView;
@property (retain) NSLayoutConstraint *labelToBadgeImageConstraint;
@property (retain) NSLayoutConstraint *labelToBadgeConstraint;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundStyle:(long long)a0;
- (void)setSelected:(BOOL)a0;
- (void)setBadgeImage:(id)a0;
- (void)setBadgeCount:(id)a0;

@end
