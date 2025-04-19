@class NSImageView, NSString, NSTextField, NSView, NSPopUpButton, NSButton, NSTrackingArea;
@protocol AssistantPopoverViewControllerDelegate;

@interface AssistantPopoverPageMenuItem : NSCollectionViewItem {
    NSTextField *_titleLabel;
    NSTextField *_subtitleLabel;
    NSImageView *_imageView;
    NSView *_backgroundView;
    NSPopUpButton *_zoomPercentagePicker;
    NSButton *_button;
    id<AssistantPopoverViewControllerDelegate> _popoverDelegate;
    NSTrackingArea *_trackingArea;
}

@property (class, readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (id)_findDefaultZoomFactorClosetToCurrentZoomFactor;
- (void)_setUIElementsToStandardColors;
- (void)_updateZoomPercentage;
- (void)_zoomPercentageChanged:(id)a0;
- (void)setDelegateForZoomPopUpButton:(id)a0;
- (void)setTitle:(id)a0 subtitle:(id)a1 image:(id)a2 target:(id)a3 action:(SEL)a4 accessibilityIdentifier:(id)a5;

@end
