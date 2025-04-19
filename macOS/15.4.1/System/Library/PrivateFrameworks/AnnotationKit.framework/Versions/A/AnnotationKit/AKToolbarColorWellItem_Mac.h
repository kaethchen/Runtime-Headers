@class AKPopoverColorWell, NSString, NSImageView, NSLayoutConstraint, NSButton;

@interface AKToolbarColorWellItem_Mac : NSView {
    NSLayoutConstraint *_buttonWidthConstraint;
    NSLayoutConstraint *_buttonHeightConstraint;
    NSLayoutConstraint *_pulldownIndicatorWidthConstraint;
    NSImageView *_pulldownIndicatorView;
    NSButton *_highlightButton;
    long long _tag;
}

@property (retain) AKPopoverColorWell *colorWell;
@property (nonatomic) unsigned long long displayMode;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property long long tag;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)_configureForDisplayMode:(unsigned long long)a0;
- (id)initWithBarButtonSystemItem:(unsigned long long)a0 target:(id)a1 action:(SEL)a2 style:(unsigned long long)a3;

@end
