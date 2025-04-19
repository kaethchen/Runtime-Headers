@protocol CalUITimeZonePickerDelegate;

@interface CalUITimeZonePicker : EKUIPopUpButton

@property (weak) id<CalUITimeZonePickerDelegate> delegate;
@property BOOL supportsFloating;
@property BOOL includeGMT;
@property BOOL useShortenedLabels;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)refresh;
- (id)initWithViewController:(id)a0;
- (void)selectTimeZone:(id)a0;
- (void)addTimeZonesToMenu:(id)a0;
- (id)cachedNameForTimeZone:(id)a0 withStyle:(long long)a1;
- (void)clarifyTimeZonesInMenuWithDuplicateNames;
- (id)clarifyingNameForTimeZone:(id)a0;
- (id)displayNameForTimeZone:(id)a0;
- (id)fullNameForTimeZone:(id)a0;
- (id)initForToolbar;
- (id)menuItemNameForTimeZone:(id)a0;
- (id)newMenuItemForTimeZone:(id)a0;
- (void)otherSelected;
- (void)popUpButtonWillPopUp;
- (id)recentlyUsedTimeZones;
- (void)saveRecentlyUsedTimeZone:(id)a0;
- (id)shortNameForTimeZone:(id)a0;
- (void)timeZoneMenuItemSelected:(id)a0;

@end
