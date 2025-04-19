@class NSString, NSMutableDictionary, NSColor;

@interface ACSHUniversalAccessPreferences : ACSHPreferences {
    struct __IOHIDEventSystemClient { } *_iohidEventSystemClient;
}

@property (class, readonly, nonatomic) ACSHUniversalAccessPreferences *shared;

@property (copy, nonatomic) NSString *_cachedDisplayThemeStringFromPreferences;
@property (copy, nonatomic) NSMutableDictionary *_cachedDisplayThemeStringForProductFromPreferences;
@property (copy, nonatomic) NSString *_cachedVirtualKeyboardDisplayThemeStringFromPreferences;
@property (copy, nonatomic) NSString *_cachedSwitchControlDisplayThemeStringFromPreferences;
@property (readonly, nonatomic) BOOL isAutoScanEnabled;
@property (readonly, nonatomic) double autoScanPanelInterval;
@property (readonly, nonatomic) double autoScanElementInterval;
@property (readonly, nonatomic) unsigned long long maxScanCycleCount;
@property (readonly, nonatomic) double sweepingCursorStage1PixelsPerSecond;
@property (readonly, nonatomic) double sweepingCursorStage2PixelsPerSecond;
@property (readonly, nonatomic) double sweepingCursorStage3PixelsPerSecond;
@property (readonly, nonatomic) double rotatingCursorStage1AngleDegreesPerSecond;
@property (readonly, nonatomic) double rotatingCursorStage2AngleDegreesPerSecond;
@property (readonly, nonatomic) double rotatingCursorStage3AngleDegreesPerSecond;
@property (readonly, nonatomic) double rotatingCursorStage4PixelsPerSecond;
@property (readonly, nonatomic) double rotatingCursorStage5PixelsPerSecond;
@property (readonly, nonatomic) double sweepingRotationAngle;
@property (readonly, nonatomic) double coalescePressesDuration;
@property (readonly, nonatomic) double minimumPressDuration;
@property (readonly, nonatomic) double firstElementDelay;
@property (readonly, nonatomic) double doublePressInterval;
@property (readonly, nonatomic) double repeatInterval;
@property (readonly, nonatomic) double minimumPressBeforeRepeatDuration;
@property (readonly, nonatomic) BOOL speakSelectedElement;
@property (readonly, nonatomic) BOOL playSounds;
@property (readonly, nonatomic) long long mouseMoveStyle;
@property (readonly, nonatomic) long long cursorSize;
@property (readonly, nonatomic) BOOL reverseMouseWhenReachingScreenEdge;
@property (readonly, nonatomic) long long mouseOption;
@property (readonly, nonatomic) BOOL useRightClick;
@property (readonly, nonatomic) long long assistiveControlType;
@property (readonly, nonatomic) BOOL assistiveControlTypeWantsDwellControl;
@property (readonly, nonatomic) BOOL assistiveConrolTypeWantsVirtualKeyboardWithoutDwell;
@property (readonly, nonatomic) BOOL dwellEnabled;
@property (readonly, nonatomic) BOOL switchEnabled;
@property (readonly, nonatomic) BOOL virtualKeyboardEnabled;
@property (readonly, nonatomic) BOOL shouldShowHoverTextBarForSwitchControl;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } progressCursorSize;
@property (readonly, nonatomic) NSColor *dwellColor;
@property (nonatomic) BOOL alwaysAllowDwellInMenuExtra;
@property (nonatomic) BOOL alwaysAllowDwellInPanels;
@property (nonatomic) BOOL showDwellActionsInPanels;
@property (nonatomic) BOOL showDwellActionsInMenuBar;
@property (readonly, nonatomic) double defaultDwellTime;
@property (readonly, nonatomic) double hotCornerDwellTime;
@property (nonatomic) BOOL autoHideEnabled;
@property (nonatomic) unsigned long long displayTheme;
@property (readonly, nonatomic) unsigned long long virtualKeyboardDisplayTheme;
@property (readonly, nonatomic) unsigned long long switchControlDisplayTheme;

+ (id)userDefaultsPreferencesSource;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_preferencesChanged:(id)a0;
- (void)preferencesChanged:(id)a0;
- (id)_displayThemeStringFromPreferencesForAssistiveControlType:(long long)a0;
- (void)_setDisplayTheme:(unsigned long long)a0 forAssistiveControlType:(long long)a1;
- (void)_updateDisplayThemeStringFromPreferences;
- (void)assistiveControlTypeChanged;
- (unsigned long long)displayThemeForProductSupportType:(unsigned long long)a0;
- (id)initWithPreferencesSource:(id)a0;

@end
