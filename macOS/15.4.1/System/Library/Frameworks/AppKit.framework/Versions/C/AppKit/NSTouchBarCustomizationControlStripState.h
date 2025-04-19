@class NSString, NSDictionary, NSTouchBar;

@interface NSTouchBarCustomizationControlStripState : NSObject <GMAvailabilityListenerDelegate> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _escapeKeyRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _applicationRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _miniControlStripRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _expandedControlStripRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _systemTrayRect;
    NSTouchBar *_miniTouchBar;
    NSTouchBar *_expandedTouchBar;
    long long _primaryMode;
    long long _functionVariant;
    BOOL _cachedConfigurationIsValid;
    BOOL _cachedSiriIconIsValid;
    NSDictionary *_cachedConfiguration;
    long long _currentStateSeed;
    id _intelligenceAvailabilityListener;
}

@property (class, readonly) NSTouchBarCustomizationControlStripState *sharedControlStrip;

@property (readonly) long long controlStripCustomizableState;
@property (readonly) long long applicationCustomizableState;
@property (readonly) BOOL miniControlStripCustomizationIsAccessible;
@property (readonly) BOOL miniControlStripIsEmpty;
@property (readonly) long long primaryMode;
@property (readonly) long long functionVariant;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } escapeKeyRect;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } applicationRect;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } miniControlStripRect;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } expandedControlStripRect;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } systemTrayRect;
@property (readonly) NSTouchBar *miniTouchBar;
@property (readonly) NSTouchBar *expandedTouchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)_updateConfigurationIfNeeded;
- (void)_updateExpandedControlStripTouchBarIfNeededFrom:(id)a0 to:(id)a1;
- (void)_updateMiniControlStripTouchBarIfNeededFrom:(id)a0 to:(id)a1;
- (void)_updateStateIfNeeded;
- (BOOL)_useCompactPreferredMetrics;
- (void)gmsAvailabilityDidUpdate:(BOOL)a0;
- (void)invalidateConfiguration;

@end
