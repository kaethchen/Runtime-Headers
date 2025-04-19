@class NSTextField, NSView, NSString, ICQInternetPrivacyBannerModel, NSStackView, NSImageView, NSButton, ICQInternetPrivacyViewModel;

@interface ICQInternetPrivacyPrefPaneViewController : NSViewController

@property (weak) NSTextField *explanationTitle;
@property (weak) NSTextField *explanationMessage;
@property (weak) NSButton *okButton;
@property (weak) NSView *bannerView;
@property (weak) NSStackView *stackView;
@property (weak) NSTextField *bannerTitle;
@property (weak) NSTextField *bannerMessage;
@property (weak) NSButton *bannerButton;
@property (weak) NSButton *enableButton;
@property (weak) NSImageView *availabilityImageView;
@property (weak) NSTextField *IPAddressLocationTitle;
@property (weak) NSTextField *locationSharingMessage;
@property (weak) NSButton *enableLocationSharingButton;
@property (weak) NSButton *disableLocationSharingButton;
@property (weak) NSView *locationSharingView;
@property (weak) NSTextField *secondaryBannerMessage;
@property (weak) NSButton *secondaryBannerButton;
@property (retain, nonatomic) ICQInternetPrivacyBannerModel *banner;
@property (copy, nonatomic) NSString *wiFiName;
@property (retain, nonatomic) ICQInternetPrivacyViewModel *viewModel;

- (id)init;
- (void).cxx_destruct;
- (id)nibName;
- (id)nibBundle;
- (void)viewDidLoad;
- (void)showEnableAlert;
- (void)refreshBannerModelsWithNotification:(BOOL)a0;
- (void)setEnabled:(BOOL)a0 window:(id)a1;
- (void)okButtonPressed:(id)a0;
- (void)radioButtonPressed:(id)a0;
- (void)_updateBannerView;
- (void)learnMoreButtonPressed:(id)a0;
- (void)_postStatusChangeNotification;
- (void)_presentWebsiteWithURLString:(id)a0;
- (void)_setupBannerView;
- (void)_showSwitchOffAlertInWindow:(id)a0;
- (void)_showSwitchOffUnsupportedWifiAlert;
- (void)_showTurnOffUnsupportedWifiAlert;
- (void)_updateExplanationViews;
- (void)_updateLocationSharingView;
- (void)_updatePaidTierViews;
- (void)bannerButtonPressed:(id)a0;
- (void)enableButtonPressed:(id)a0;

@end
