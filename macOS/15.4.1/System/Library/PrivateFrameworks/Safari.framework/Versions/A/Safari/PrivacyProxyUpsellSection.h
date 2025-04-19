@class NSButton, NSTrackingArea;

@interface PrivacyProxyUpsellSection : PrivacyProxyStatusSection {
    NSButton *_dismissButton;
    NSTrackingArea *_trackingArea;
}

- (id)init;
- (void).cxx_destruct;
- (void)_updateSubviews;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)viewWillDraw;
- (void)_attachSubviews;
- (void)_dismissUpsell;
- (void)_initSubviews;
- (void)_openLearnMoreLink;

@end
