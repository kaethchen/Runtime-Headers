@class NSStackView, SLHighlight, SLAttributionView;

@interface HighlightBanner : Banner {
    SLAttributionView *_attributionView;
}

@property (weak, nonatomic) NSStackView *stackView;
@property (readonly, nonatomic) SLHighlight *highlight;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithHighlight:(id)a0;
- (void)_makeAttributionViewWithHighlight:(id)a0;
- (void)_updateAttributionViewCloseButtonVisibility:(BOOL)a0;
- (id)bannerNibName;
- (void)handleVoiceOverStateChangeNotification:(BOOL)a0;
- (void)mouseStateDidChangeToState:(BOOL)a0;
- (void)uninstall:(id)a0;
- (void)updateBannerWithHighlight:(id)a0;
- (void)willInstallBannerView;
- (void)willUninstallBannerView;

@end
