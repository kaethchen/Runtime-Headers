@class NSString, NSArray, ACSHKeyboardData;

@interface ACSHPanel : ACSHPanelElement

@property (class, readonly, nonatomic) double windowPaddingZoomScaleFactor;

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } postContextButtonRect;
@property (nonatomic) double viewingZoomScale;
@property (nonatomic) double _viewingZoomNonProportionalScaleFactor;
@property (nonatomic) BOOL _viewingZoomNonProportionalScaleFactorIsHorizontal;
@property (nonatomic) BOOL _didRegisterForDisplayTheme;
@property (copy, nonatomic) NSString *_observedThemeKeyForACPE;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hidesAssistiveDock;
@property (nonatomic) BOOL hidesAssistiveDockContextualButtons;
@property (nonatomic) unsigned long long showLocation;
@property (retain, nonatomic) NSArray *associatedApplications;
@property (retain, nonatomic) NSArray *preContextButtons;
@property (retain, nonatomic) NSArray *postContextButtons;
@property (nonatomic) unsigned long long screenPosition;
@property (retain, nonatomic) NSString *keyboardPhysicalType;
@property (nonatomic) long long keyboardHWType;
@property (readonly, nonatomic) ACSHKeyboardData *keyboardDataBasedOnPanelMetadata;
@property (readonly, nonatomic) ACSHKeyboardData *bestGuessKeyboardData;
@property (nonatomic) double viewingAlpha;
@property (nonatomic) unsigned long long displayOrder;
@property (nonatomic) unsigned long long scanStyle;
@property (nonatomic) unsigned long long glidingLensSize;
@property (nonatomic) BOOL hidesAdjustments;
@property (nonatomic) BOOL hidesHomeButton;
@property (nonatomic) BOOL hidesMinimizeButton;
@property (nonatomic) BOOL hidesTitlebar;
@property (nonatomic) BOOL usesPinnedResizing;
@property (nonatomic) BOOL hasTransientPosition;
@property (copy, nonatomic) NSString *currentInputSourceName;
@property (nonatomic) unsigned long long productSupportType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } windowPadding;
@property (readonly, nonatomic) BOOL isHomePanel;
@property (readonly, nonatomic) BOOL isSystemPanel;
@property (readonly, nonatomic) BOOL isSystemKeyboardPanel;
@property (readonly, nonatomic) BOOL isDefaultKeyboard;
@property (readonly, nonatomic) BOOL isDevicesPanel;
@property (readonly, nonatomic) BOOL isMinimizedPanel;
@property (readonly, nonatomic) BOOL hasTextPredictionLists;
@property (readonly, nonatomic) BOOL hasGroupAsTopLevelElement;
@property (readonly, nonatomic) BOOL viewingZoomScaleIsDefault;

+ (struct CGSize { double x0; double x1; })defaultIconSize;
+ (Class)classForDict:(id)a0;
+ (struct CGSize { double x0; double x1; })defaultIconPadding;
+ (id)panelByMergingPanels:(id)a0 basePanel:(id)a1 verticalNotHorizontal:(BOOL)a2 generalOrientation:(unsigned long long)a3 customOptionsMapTable:(id)a4;
+ (struct CGSize { double x0; double x1; })windowPaddingForZoomScale:(double)a0 nonProportionalScaleFactor:(double)a1 isHorizontal:(BOOL)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithUndoManager:(id)a0;
- (void)_initialSetup;
- (double)viewingZoomNonProportionalFactorReturningHorizontalNotVertical:(BOOL *)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (void)_setContextButtons:(id)a0 forLocalContextButtons:(id *)a1;
- (void)_updateThemeObservationForPanelEditor;
- (id)descriptionForDepth:(unsigned long long)a0;
- (id)dictionaryForSaving;
- (void)mergePanel:(id)a0 withRelativePosition:(unsigned long long)a1 orientation:(unsigned long long)a2 panelDistance:(double)a3;
- (unsigned long long)numberOfTrailingExtrasForItemAtIndexPath:(id)a0;
- (id)panelElementAtIndexPath:(id)a0;
- (id)panelElementsFromIndexPath:(id)a0;
- (id)panelElementsFromIndexPath:(id)a0 inclusiveOfStart:(BOOL)a1;
- (id)resolvedDisplayColor;
- (unsigned long long)resolvedDisplayTheme;
- (unsigned long long)screenPosition;
- (void)setMinimizeButton:(BOOL)a0;
- (void)setPanelElements:(id)a0;
- (void)setScreenPosition:(unsigned long long)a0;
- (void)setViewingZoomScaleIsDefault:(BOOL)a0;
- (id)soundIdentifierForItemAtIndexPath:(id)a0;
- (id)spokenDescriptionForItemAtIndexPath:(id)a0;
- (BOOL)updateContextButtonRects;
- (void)updateForModifiers:(unsigned long long)a0 lockedModifiers:(unsigned long long)a1 deadKeyState:(unsigned int)a2 autoShift:(BOOL)a3;
- (void)updateToKeyboardLayout:(id)a0;
- (void)updateViewingZoomScale:(double)a0 nonProportionalScaleFactor:(double)a1 horizontalNotVertical:(BOOL)a2 saveToPreferences:(BOOL)a3;
- (void)updateViewingZoomScaleIsDefault:(BOOL)a0;

@end
