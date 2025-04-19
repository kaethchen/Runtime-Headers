@class NSTextField, NSString, ProfilesPreferences, NSArray, NSGridRow, NSPopUpButton, ProfileIconPickerViewController, NSLayoutConstraint, ColorPickerWellViewController, NSGridCell;

@interface GeneralProfilesPreferencesViewController : NSViewController <ProfileIconPickerDelegate, ColorPickerWellViewControllerDelegate> {
    NSArray *_sortedIdentifiersForExtensionsWithOverridePages;
    ColorPickerWellViewController *_colorPickerWellViewController;
    ProfileIconPickerViewController *_profileIconPickerViewController;
}

@property (weak) NSTextField *iconLabel;
@property (weak) NSTextField *favoritesLabel;
@property (weak) NSTextField *nameTextField;
@property (weak) NSPopUpButton *favoritesPopUpButton;
@property (weak) NSPopUpButton *tabBehaviorPopupButton;
@property (weak) NSPopUpButton *windowBehaviorPopupButton;
@property (weak) NSGridCell *symbolsCell;
@property (weak) NSGridRow *tabBehaviorGridRow;
@property (weak) NSGridRow *windowBehaviorGridRow;
@property (weak) NSGridRow *favoritesGridRow;
@property (retain) NSLayoutConstraint *explanationLabelToGridViewConstraint;
@property (weak) NSGridCell *colorWellGridCell;
@property (weak, nonatomic) ProfilesPreferences *profilesPreferences;
@property (copy, nonatomic) NSString *profileIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (id)profile;
- (long long)_adjustedUserDefaultsTagForPopUpTag:(long long)a0;
- (void)_bookmarksChanged:(id)a0;
- (void)_configureColorWell;
- (void)_configureFavoritesPopUpButton;
- (void)_configureNewTabsOpenWithPopUpButton;
- (void)_configureNewWindowsOpenWithPopUpButton;
- (void)_insertFavoritesBehaviorIntoPopUp:(id)a0;
- (void)_startObservingBookmarkChanges;
- (void)_stopObservingBookmarkChanges;
- (void)_updateGeneratedProfileBackgroundImageIfNeeded;
- (void)_updateIconButtons;
- (void)_updateNameTextField;
- (void)_updateNewTabBehaviorViews;
- (void)_updateNewWindowBehaviorViews;
- (void)_updateNewWindowTabsMenuItem;
- (void)_updateProfileIconWithSymbolName:(id)a0;
- (void)_updateWebExtensionOverridePagesOptionsInPopups;
- (long long)_userDefaultsToPopUpTag:(long long)a0;
- (id)_webExtensionsController;
- (void)colorPickerWellViewController:(id)a0 didSelectColorAtIndex:(long long)a1;
- (void)didChangeFavoritesPopUpButton:(id)a0;
- (void)didUpdateProfileNameTextfield:(id)a0;
- (void)profileIconPickerViewController:(id)a0 didSelectSymbolName:(id)a1;
- (void)reloadViews;
- (void)takeNewTabBehaviorFrom:(id)a0;
- (void)takeNewWindowBehaviorFrom:(id)a0;

@end
