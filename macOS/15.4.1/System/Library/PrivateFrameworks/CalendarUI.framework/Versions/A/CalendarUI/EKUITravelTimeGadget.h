@class NSMenuItem, NSString, CalLocation, EKUIPopUpButton, EKUITravelTimeSpinnerView, NSMutableDictionary, NSSet, NSMutableSet;

@interface EKUITravelTimeGadget : EKUILabeledGadget

@property (retain) EKUIPopUpButton *popUpButton;
@property (retain) NSMutableDictionary *validRoutes;
@property (retain) NSMutableSet *currentlyCalculatingRoutes;
@property (retain) NSMutableSet *errorRoutes;
@property (retain) NSSet *supportedRouteTypes;
@property long long selectedDuration;
@property (copy) NSString *lastEventIdentifier;
@property (retain) NSString *lastLocation;
@property (retain) CalLocation *startLocation;
@property (retain) EKUITravelTimeSpinnerView *spinnerView;
@property (retain) NSMenuItem *calculatingRoutesPlaceholderMenuItem;
@property (retain) NSMenuItem *routesSectionTopSeparator;
@property (retain) NSMenuItem *routesSectionBottomSeparator;

+ (void)_messageTraceTravelTimeDurationSelected:(long long)a0;
+ (id)interestedChangeKeys;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEditable;
- (BOOL)needsExpansion;
- (id)labelString;
- (id)control;
- (id)initWithViewController:(id)a0;
- (void)durationChosen:(id)a0;
- (id)_menuItemWithDuration:(long long)a0 andTitle:(id)a1;
- (void)_addCustomItemIfNeeded;
- (void)_addRoutesSectionIfNeeded;
- (void)_asyncUpdateMenuAndStartLocationWithResults:(id)a0;
- (void)_asyncUpdateStartLocationWithResults:(id)a0;
- (void)_asyncUpdateTravelTimeMenuWithResults:(id)a0;
- (void)_calculateTravelTime;
- (id)_findEventStartLocation;
- (id)_formattedStringForTimeInterval:(double)a0;
- (id)_imageForRouteType:(id)a0;
- (id)_localizeTravelTimeChoiceStringWithDuration:(double)a0 fromLocation:(id)a1 includeLocationDescription:(BOOL)a2;
- (void)_populatePopUpButton;
- (void)_resetTravelTimeResults;
- (void)_updateRoutesSectionWithValidResults;
- (id)_validRouteMenuItems;
- (double)pixelsBetweenLabelAndControl;
- (void)popUpButtonClicked:(id)a0;
- (BOOL)shouldDisplay;
- (void)showCustomTravelTimePicker:(id)a0;
- (BOOL)startingCountryEqualsEndingCountry;
- (void)updateWithChanges:(id)a0;

@end
