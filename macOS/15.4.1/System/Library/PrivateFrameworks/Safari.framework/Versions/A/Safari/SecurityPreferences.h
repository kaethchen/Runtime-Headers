@class NSTextField, NSView, NSTimer, NSButton;

@interface SecurityPreferences : PreferencesModule {
    BOOL _handlingChangedDefaults;
    NSTimer *_statusUpdateTimer;
    NSTextField *_websiteConnectionsPreferenceLabel;
    NSButton *_useHTTPSOnlyCheckbox;
}

@property (weak, nonatomic) NSView *mainContentView;
@property (weak, nonatomic) NSButton *javaScriptEnabledCheckbox;
@property (weak, nonatomic) NSButton *antiPhishingCheckbox;
@property (weak, nonatomic) NSTextField *safeBrowsingExplanationLabel;
@property (weak, nonatomic) NSView *safeBrowsingExplanationView;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)initializeFromDefaults;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;
- (void)_createHTTPSOnlyPreferenceIfNeeded;
- (void)_defaultsChanged:(id)a0;
- (void)_updateAntiPhishingViews;
- (void)_updateEverything;
- (void)_updateJavaScriptViews;
- (void)_updateUseHTTPSOnlyViews;
- (id)safariHelpAnchor;
- (void)toggleAntiPhishingEnabled:(id)a0;
- (void)toggleHTTPSOnlyEnabled:(id)a0;
- (void)toggleJavaScriptEnabled:(id)a0;

@end
