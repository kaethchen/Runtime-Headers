@class NSTextField, ProfilesPreferences, NSTableView, NSMutableArray, WBProfile;

@interface ExtensionsProfilesPreferencesViewController : NSViewController {
    NSMutableArray *_orderedExtensions;
}

@property (weak, nonatomic) NSTableView *tableView;
@property (weak, nonatomic) NSTextField *descriptionLabel;
@property (weak, nonatomic) ProfilesPreferences *profilesPreferences;
@property (retain, nonatomic) WBProfile *profile;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLoad;
- (void)_extensionEnabledStateDidChange:(id)a0;
- (void)_extensionWasAdded:(id)a0;
- (void)_extensionWasRemoved:(id)a0;
- (id)_selectedExtensionWrapper;
- (void)_updateExtensionData;
- (void)_updateHeaderLabel;
- (void)reloadViews;
- (void)scrollToExtensionWithIdentifier:(id)a0;
- (void)toggleExtensionEnabledInProfile:(id)a0;

@end
