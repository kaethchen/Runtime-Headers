@interface UASystemSettings : NSObject

@property (class, readonly, nonatomic) BOOL _shouldApplySystemSettings;
@property (class, readonly, nonatomic) UASystemSettings *shared;

@property (nonatomic) BOOL _registeredForScrollChangedNotification;

- (void)dealloc;
- (BOOL)_hasAccessibilityScrollBarOverrides;
- (void)_registerForScrollChangedNotificationIfNeeded;
- (void)_scrollBarSettingsChangedExternally;
- (void)_systemAlwaysShowScrollBars;
- (struct __CFString { } *)_systemGetScrollBarsPref;
- (struct __CFString { } *)_systemScrollBarPrefFromAccessibility;
- (void)_systemSetScrollBarsPref:(struct __CFString { } *)a0;
- (struct __CFString { } *)_upToDateSystemScrollBarPref;
- (void)_updateSystemScrollBarsPrefIfNeeded;
- (void)setAlwaysShowScrollbars:(BOOL)a0 withIdentifier:(id)a1;

@end
