@class NSMutableDictionary;

@interface ACSHAssistiveControlPreferences : ACSHPreferences

@property (class, readonly, nonatomic) ACSHAssistiveControlPreferences *shared;

@property (retain) NSMutableDictionary *_colorsByThemeAndAttribute;
@property (nonatomic) BOOL showButtonLabels;
@property (nonatomic) unsigned long long panelPosition;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } panelFrame;
@property (readonly, nonatomic) unsigned long long desiredPanelWindowPosition;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } desiredPanelWindowFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } minimizedPanelFrame;
@property (nonatomic) BOOL nonProportionalResizingEnabled;

+ (id)preferenceDefaults;
+ (id)preferenceDomainForAssistiveControlType:(long long)a0;
+ (id)userDefaultsPreferencesSource;

- (void).cxx_destruct;
- (id)colorForTheme:(unsigned long long)a0 attributeColor:(unsigned long long)a1 baseColor:(id)a2 prioritizeAdjustedColor:(BOOL)a3;
- (id)_colorForTheme:(unsigned long long)a0 attributeColor:(unsigned long long)a1;
- (id)_colorFromBundleNamed:(id)a0;
- (void)assistiveControlTypeChanged:(long long)a0;
- (id)colorForAttributeColor:(unsigned long long)a0;
- (id)colorForAttributeColor:(unsigned long long)a0 baseColor:(id)a1 prioritizeAdjustedColor:(BOOL)a2;
- (id)colorForTheme:(unsigned long long)a0 attributeColor:(unsigned long long)a1;
- (id)initWithPreferencesSource:(id)a0;
- (void)setDesiredPanelWindowPosition:(unsigned long long)a0 panelWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setPanelPosition:(unsigned long long)a0 windowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setPreferencesSource:(id)a0;
- (void)setViewingAlpha:(double)a0 forPanelUUID:(id)a1;
- (void)setViewingZoomNonProportionalFactor:(double)a0 horizontalNotVertical:(BOOL)a1 forPanelUUID:(id)a2;
- (void)setViewingZoomScale:(double)a0 forPanelUUID:(id)a1;
- (unsigned long long)toolbarSettingForToolbarIdentifier:(id)a0 panelIdentifier:(id)a1 productSupportType:(unsigned long long)a2;
- (void)updateToolbarSetting:(unsigned long long)a0 forToolbarIdentifier:(id)a1 panelIdentifier:(id)a2 productSupportType:(unsigned long long)a3;
- (double)viewingAlphaForPanelUUID:(id)a0;
- (double)viewingZoomNonProportionalFactorForPanelUUID:(id)a0 returningHorizontalNotVertical:(BOOL *)a1;
- (double)viewingZoomScaleForPanelUUID:(id)a0;
- (BOOL)viewingZoomScaleIsDefaultForPanelUUID:(id)a0;

@end
