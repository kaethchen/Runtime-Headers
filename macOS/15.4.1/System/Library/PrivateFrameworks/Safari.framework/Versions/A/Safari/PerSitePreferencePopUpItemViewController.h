@class WBSPerSitePreference, NSString, NSTextField, PerSitePreferencePopUpButton;
@protocol WBSPerSitePreferenceManager;

@interface PerSitePreferencePopUpItemViewController : PreferencesPopoverPopUpItemViewController <PerSitePreferencesPopoverItem> {
    WBSPerSitePreference *_perSitePreference;
    id<WBSPerSitePreferenceManager> _perSitePreferenceManager;
    NSString *_title;
    NSString *_domain;
    NSTextField *_preferenceTitleTextField;
    PerSitePreferencePopUpButton *_permissionsPopUpButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)updateToReflectPreferenceValue:(id)a0;
- (void)_populateMenu:(id)a0 withValuesForPerSitePreference:(id)a1 inManager:(id)a2 selector:(SEL)a3;
- (void)_updatePopUpStateForDomain:(id)a0;
- (void)_updatePreferenceValue:(id)a0;
- (id)initWithPreference:(id)a0 manager:(id)a1 title:(id)a2;
- (id)permissionsPopUpButton;
- (id)preferenceTitleTextField;
- (void)setPermissionsPopUpButton:(id)a0;
- (void)setPreferenceTitleTextField:(id)a0;
- (void)updateStateForDomain:(id)a0;

@end
