@class NSArray, SCRElement, SCRCUserDefaults;
@protocol SCRBrailleLineNavigator;

@interface SCRBrailleManager : NSObject

@property (retain, nonatomic) id<SCRBrailleLineNavigator> navigator;
@property (nonatomic) BOOL singleElementMode;
@property (nonatomic) BOOL alwaysUseNemethForEquations;
@property (retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults;
@property (retain, nonatomic) NSArray *lastBrailleLineElements;
@property (readonly, nonatomic) BOOL hasActive2DBrailleDevice;
@property (retain) SCRElement *focused2DBrailleElement;
@property double braille2DZoom;
@property struct CGPoint { double x; double y; } braille2DOrigin;
@property double braille2DIntensity;
@property BOOL braille2DInvert;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithUserDefaults:(id)a0;
- (void)_addBraille2DObject:(id)a0 forIndex:(unsigned long long)a1 toRequest:(id)a2;
- (void)_addBrailleLineToRequest:(id)a0 lineFocus:(int)a1;
- (void)_addBrailleTextLineToRequest:(id)a0 lineFocus:(int)a1;
- (void)_appThreadMoveSelectionToLineRange:(id)a0 originalLine:(id)a1;
- (BOOL)_hasTextLineNavigator;
- (BOOL)_isShiftKeyDown:(unsigned long long)a0;
- (void)_legacyReplaceTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1 insertCursor:(unsigned long long)a2 request:(id)a3;
- (id)_lineNavigatorForElement:(id)a0;
- (BOOL)_moveSelectionToLineRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_panTextLineWithDirection:(long long)a0 request:(id)a1;
- (void)_postKeyThreadMoveSelectionToLineRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 originalLine:(long long)a1 appThreadKey:(id)a2;
- (void)_preferencesChangedForKeyPath:(id)a0 value:(id)a1;
- (struct CGImage { } *)_preflightImageFor2DBrailleAnalysis:(id)a0;
- (void)_registerPreferenceObservers;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_selectionLineRange;
- (id)_selectionRangeIncludingRouterLocation:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_textLineNavigator;
- (void)_unregisterPreferenceObservers;
- (void)_updateNavigatorMode;
- (BOOL)adjust2DBrailleEdgeIntensity:(BOOL)a0 request:(id)a1;
- (BOOL)adjust2DBrailleOrigin:(long long)a0 request:(id)a1;
- (BOOL)adjust2DBrailleZoom:(BOOL)a0 request:(id)a1;
- (BOOL)brailleLineContainsUIElement:(id)a0;
- (id)brailleLineElementMatchingUIElement:(id)a0;
- (BOOL)brailleLineMatchesUIElement:(id)a0;
- (void)clearStoredBrailleLine;
- (BOOL)hasBrailleLineNavigator;
- (BOOL)move2DBrailleToElement:(id)a0 info:(id)a1 request:(id)a2;
- (BOOL)moveToElement:(id)a0 info:(id)a1 request:(id)a2;
- (BOOL)panLineWithDirection:(long long)a0 request:(id)a1;
- (id)parentForLineElement:(id)a0;
- (void)prepareForLaunch;
- (void)prepareForShutdown;
- (void)replaceTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1 insertCursor:(unsigned long long)a2 request:(id)a3;
- (BOOL)routeToTextLineIndex:(unsigned long long)a0 withModifierMask:(unsigned long long)a1 request:(id)a2;
- (BOOL)sendEditableTextLine;
- (BOOL)toggle2DBrailleInvertWithRequest:(id)a0;

@end
