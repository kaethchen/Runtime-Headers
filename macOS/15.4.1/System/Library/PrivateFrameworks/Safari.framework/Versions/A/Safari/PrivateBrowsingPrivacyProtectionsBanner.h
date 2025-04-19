@class NSImageView, NSTextField, RolloverImageButton, NSButton;
@protocol PrivateBrowsingPrivacyProtectionsBannerDelegate;

@interface PrivateBrowsingPrivacyProtectionsBanner : Banner {
    BOOL _effectiveAppearanceObservationEnabled;
}

@property (retain, nonatomic) NSTextField *bannerText;
@property (retain, nonatomic) NSImageView *bannerIcon;
@property (retain, nonatomic) NSButton *dismissBannerButton;
@property (retain, nonatomic) NSButton *reducePrivacyProtectionsButton;
@property (weak, nonatomic) id<PrivateBrowsingPrivacyProtectionsBannerDelegate> delegate;
@property (weak, nonatomic) RolloverImageButton *removeBannerButton;

+ (int)bannerSortOrder;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_dismissPrivacyProtectionsBanner:(id)a0;
- (void)_reducePrivateBrowsingPrivacyProtections:(id)a0;
- (id)bannerNibName;
- (void)didInstallBannerView;
- (void)didUninstallBannerView;

@end
