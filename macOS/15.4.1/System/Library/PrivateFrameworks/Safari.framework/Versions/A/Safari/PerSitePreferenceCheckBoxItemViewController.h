@class NSString, WBSPerSitePreference, NSButton;
@protocol WBSPerSitePreferenceManager;

@interface PerSitePreferenceCheckBoxItemViewController : NSViewController <PerSitePreferencesPopoverItem> {
    WBSPerSitePreference *_perSitePreference;
    id<WBSPerSitePreferenceManager> _perSitePreferenceManager;
    id _onValue;
    id _offValue;
    NSString *_domain;
    NSButton *_switchButton;
    NSString *_title;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewWillAppear;
- (void)_togglePreferenceValue:(id)a0;
- (void)_updateCheckBoxStateForDomain:(id)a0;
- (id)initWithPreference:(id)a0 manager:(id)a1 title:(id)a2;
- (void)updateStateForDomain:(id)a0;

@end
