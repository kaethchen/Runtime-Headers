@class NSString, NSImage, NSLayoutConstraint, NSButton, NSPulldownIndicatorImageView;
@protocol AKUserInterfaceItem;

@interface AKToolbarButtonItem_Mac : NSView {
    NSLayoutConstraint *_buttonWidthConstraint;
    NSLayoutConstraint *_buttonHeightConstraint;
    NSLayoutConstraint *_plainWidthConstraint;
    NSLayoutConstraint *_menuWidthConstraint;
    NSPulldownIndicatorImageView *_pulldownIndicatorView;
    NSButton *_highlightButton;
}

@property (nonatomic) unsigned long long displayMode;
@property (readonly, nonatomic) NSButton<AKUserInterfaceItem> *button;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSImage *image;
@property (copy, nonatomic) NSImage *alternateImage;
@property (nonatomic) unsigned long long buttonType;
@property (nonatomic) BOOL showsPulldown;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (BOOL)enabled;
- (void).cxx_destruct;
- (double)firstBaselineOffsetFromTop;
- (void)mouseDown:(id)a0;
- (void)_adjustButtons;
- (void)_configureForDisplayMode:(unsigned long long)a0;
- (id)initWithBarButtonSystemItem:(unsigned long long)a0 target:(id)a1 action:(SEL)a2 style:(unsigned long long)a3;

@end
