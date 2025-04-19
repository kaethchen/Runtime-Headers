@interface AXTripleClickHelpers : NSObject

@property (class, nonatomic) BOOL switchControlRendersDeviceUnusable;
@property (class, nonatomic) BOOL switchControlHasScreenSwitch;

+ (void)_toggleLocalizationCaptionPanel;
+ (id)symbolNameForTripleClickOption:(int)a0;
+ (id)_allAvailableFeaturesIOS;
+ (id)_allAvailableFeaturesWatchOS;
+ (id)_availableFeatures;
+ (void)_disableSwitchControlWithHandler:(id /* block */)a0;
+ (id)_displayFilterUIClient;
+ (void)_handleToggleTripleClickTriggeredFromAppIntent:(int)a0;
+ (BOOL)_isAccessibilityAppIntentsProcess;
+ (void)_localToggleTripleClickOption:(int)a0;
+ (BOOL)_localValueForTripleClickOption:(int)a0;
+ (void)_promptToDisableBrightnessFilters:(id /* block */)a0 data:(id)a1;
+ (BOOL)_shouldShowFeatureInShortcutsControlCenterModule:(int)a0 includeGuidedAccess:(BOOL)a1;
+ (void)_toggleAssistiveTouch;
+ (void)_toggleClassicInvertColors;
+ (void)_toggleSmartInvertColorsOffMainThread;
+ (void)_toggleSwitchOver;
+ (void)_toggleSwitchOverOffMainThread;
+ (void)_toggleVoiceOver;
+ (id)allTripleClickOptions;
+ (id)allTripleClickOptionsForPlatform:(long long)a0;
+ (BOOL)isReduceWhitePointEnabled;
+ (id)localizationKeyForTripleClickOption:(int)a0;
+ (long long)stateForTripleClickOption:(int)a0;
+ (id)titleForTripleClickOption:(int)a0;
+ (void)toggleColorFilter;
+ (void)toggleFullKeyboardAccess;
+ (void)toggleGuidedAccess;
+ (void)toggleHearingControlCenter;
+ (void)toggleLiveSpeech;
+ (void)toggleReduceWhitePoint;
+ (void)toggleTripleClickOption:(int)a0;
+ (void)toggleTripleClickOption:(int)a0 fromSource:(long long)a1;
+ (void)toggleZoomOffMainThread;
+ (id)tripleClickOptionDidChangeNotification;
+ (id)tripleClickOptionsForAccessibilityShortcutControlCenterModuleIncludingGuidedAccess:(BOOL)a0;
+ (BOOL)valueForTripleClickOption:(int)a0;
+ (BOOL)valueForTripleClickOption:(int)a0 fromSource:(long long)a1;
+ (BOOL)valueForZoomTripleClickOption;

@end
