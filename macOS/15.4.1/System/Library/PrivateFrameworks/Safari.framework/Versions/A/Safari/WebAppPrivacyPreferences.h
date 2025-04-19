@class NSButton, NSImageView, NSTextField;

@interface WebAppPrivacyPreferences : PreferencesModule

@property (weak) NSImageView *privacyImageView;
@property (weak) NSTextField *privacyExplanationLabel;
@property (weak) NSButton *openSettingsButton;
@property (weak) NSButton *clearWebsiteDataButton;
@property (weak) NSTextField *notificationsLabel;
@property (weak) NSButton *openNotificationSettingsButton;

- (void).cxx_destruct;
- (void)willBeDisplayed;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)a0;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;
- (void)clearWebsiteDataClicked:(id)a0;
- (void)openNotificationSettingsClicked:(id)a0;
- (void)openSettingsClicked:(id)a0;
- (id)safariHelpAnchor;

@end
