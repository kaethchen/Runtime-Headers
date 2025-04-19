@class NSTextField, NSString, ProfilesPreferences, WBSNamedColorOption, NSPopUpButton, ProfileIconPickerViewController, NSButton, ColorPickerWellViewController, NSGridCell;

@interface CreateProfilePreferencesViewController : NSViewController <ProfileIconPickerDelegate, ColorPickerWellViewControllerDelegate, NSTextFieldDelegate> {
    NSString *_newProfileFavoritesFolderServerID;
    NSString *_newProfileIcon;
    NSString *_newProfileName;
    WBSNamedColorOption *_newProfileColor;
    BOOL _hasManuallySelectedColor;
    BOOL _shouldPickNewColor;
    ColorPickerWellViewController *_colorPickerWellViewController;
    ProfileIconPickerViewController *_profileIconPickerViewController;
}

@property (weak) NSButton *createProfileButton;
@property (weak) NSButton *createNewFavoritesRadioButton;
@property (weak) NSButton *useExistingFavoritesRadioButton;
@property (weak) NSPopUpButton *favoritesPopUpButton;
@property (weak) NSTextField *nameTextField;
@property (weak) NSGridCell *symbolsCell;
@property (weak) NSGridCell *colorPickerWellCell;
@property (weak, nonatomic) ProfilesPreferences *profilesPreferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateSubviews;
- (void)controlTextDidChange:(id)a0;
- (void)viewWillAppear;
- (void)cancelButtonClicked:(id)a0;
- (void)_configureColorWell;
- (void)_configureFavoritesPopUpButton;
- (void)_createNewFavoritesFolderAndUpdateServerIDIfNeeded;
- (void)_generateDefaultProfileBackgroundImage;
- (void)_selectRadionButton:(id)a0;
- (void)colorPickerWellViewController:(id)a0 didSelectColorAtIndex:(long long)a1;
- (void)createButtonClicked:(id)a0;
- (void)didChangeFavoritesPopUpButton:(id)a0;
- (void)didSelectRadioButton:(id)a0;
- (void)profileIconPickerViewController:(id)a0 didSelectSymbolName:(id)a1;

@end
