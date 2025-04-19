@class NSImageView, NSTextField, PKMobileAssetManager, NSButton;
@protocol PKUserNotificationAuthorizationExplanationViewControllerDelegate;

@interface PKUserNotificationAuthorizationExplanationViewController : NSViewController {
    unsigned long long _contentType;
    PKMobileAssetManager *_assetManager;
}

@property (weak) NSImageView *imageView;
@property (weak) NSTextField *titleLabel;
@property (weak) NSTextField *bodyLabel;
@property (weak) NSButton *enableButton;
@property (weak) NSButton *notNowButton;
@property (weak, nonatomic) id<PKUserNotificationAuthorizationExplanationViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithContentType:(unsigned long long)a0;
- (id)_bodyText;
- (BOOL)_isDarkMode;
- (id)_titleText;
- (void)_disableButtons;
- (id)_enableButtonText;
- (id)_heroImage;
- (id)_heroImageIdentifier;
- (id)_localizedDynamicString:(id)a0;
- (id)_notNowButtonText;
- (void)enableNotificationsTapped:(id)a0;
- (void)notNowTapped:(id)a0;

@end
