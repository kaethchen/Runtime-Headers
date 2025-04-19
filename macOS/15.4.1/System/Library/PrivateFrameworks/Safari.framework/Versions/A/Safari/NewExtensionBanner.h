@class NSImageView, NSTextField, NSArray, NSButton;

@interface NewExtensionBanner : Banner {
    NSArray *_extensionWrappers;
    long long _extensionEnablementMode;
    NSArray *_remotelyEnabledExtensionWrappers;
}

@property (weak, nonatomic) NSTextField *titleLabel;
@property (weak, nonatomic) NSTextField *descriptionLabel;
@property (weak) NSButton *extensionPreferencesButton;
@property (weak) NSImageView *extensionsPuzzlePieceImageView;
@property (weak) NSButton *dismissBannerButton;

- (id)init;
- (void).cxx_destruct;
- (id)_buttonTitleForExtensionCount:(unsigned long long)a0 enablementMode:(long long)a1;
- (void)_configureBannerWithTitle:(id)a0 description:(id)a1 buttonTitle:(id)a2;
- (long long)_extensionEnablementModeForExtensions:(id)a0;
- (void)_extensionStateDidChange:(id)a0;
- (void)_turnOnOrOpenPreferences:(id)a0;
- (id)bannerNibName;
- (void)dismissBanner:(id)a0;
- (BOOL)setUpForExtensions:(id)a0;
- (BOOL)setUpForRemotelyEnabledExtension:(id)a0;

@end
