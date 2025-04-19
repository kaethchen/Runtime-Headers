@class NSImageView, NSString, NSProgressIndicator, NSLayoutConstraint, NSStackView, NSButton;

@interface IKDeviceBrowserDataView : NSTableCellView {
    id buttonTarget;
    SEL buttonAction;
}

@property (retain, nonatomic) id representedObject;
@property (nonatomic) BOOL showLocation;
@property (copy) NSString *extaInfoStringNormal;
@property (copy) NSString *extaInfoStringAlternate;
@property NSLayoutConstraint *imageViewHeight;
@property NSLayoutConstraint *iconHeight;
@property NSStackView *stackView;
@property NSButton *ejectIcon;
@property NSImageView *cloudIcon;
@property NSImageView *lockIcon;
@property NSProgressIndicator *progress;
@property BOOL showEject;
@property BOOL showCloud;
@property BOOL showLock;
@property BOOL showProgress;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)buttonPressed:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundStyle:(long long)a0;
- (void)updateConstraints;
- (void)updateView;
- (void)setup;
- (void)_updateIconStates:(id)a0;
- (void)addItemsToContextMenu:(id)a0;
- (void)addObservers:(id)a0;
- (void)adjustUIToICDevice:(id)a0;
- (unsigned long long)controlSizeForIdentifier:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultRectForIdentifier:(id)a0;
- (void)deviceBrowserViewFlagsChanged:(id)a0;
- (id)extraInfoForDevice:(id)a0;
- (void)removeObservers:(id)a0;
- (void)setButtonAction:(SEL)a0 target:(id)a1;
- (void)updateDeviceBusy:(id)a0;
- (void)updateIconStates;

@end
