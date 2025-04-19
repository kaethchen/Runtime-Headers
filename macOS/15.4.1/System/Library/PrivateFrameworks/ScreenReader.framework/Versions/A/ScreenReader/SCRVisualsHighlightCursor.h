@class AXVHighlightOutlineView, NSArray, SCRCUserDefaults, SCRElement, SCRFocusCursorDrawingOptions, NSString, SCRApplication;

@interface SCRVisualsHighlightCursor : NSObject

@property (retain, nonatomic, setter=_setPrimaryCursorOutlineView:) AXVHighlightOutlineView *_primaryCursorOutlineView;
@property (retain, nonatomic, setter=_setSecondaryCursorOutlineView:) AXVHighlightOutlineView *_secondaryCursorOutlineView;
@property (retain, nonatomic, setter=_setCursorDrawingOptions:) SCRFocusCursorDrawingOptions *_cursorDrawingOptions;
@property (retain, nonatomic, setter=_setSecondaryCursorDrawingOptions:) SCRFocusCursorDrawingOptions *_secondaryCursorDrawingOptions;
@property (nonatomic, setter=_setCursorEnabled:) BOOL _cursorEnabled;
@property (nonatomic, setter=_setScaleFactor:) double _scaleFactor;
@property (nonatomic, setter=_setWindowID:) unsigned int _windowID;
@property (nonatomic, setter=_setCGSConnectionID:) unsigned int _cgsConnectionID;
@property (weak, nonatomic, setter=_setCursorApplication:) SCRApplication *_cursorApplication;
@property (nonatomic, setter=_setTrackpadMouseTrackingVOCursor:) BOOL _trackpadMouseTrackingVOCursor;
@property (retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults;
@property (nonatomic) BOOL cursorEnabled;
@property (nonatomic) BOOL cursorHidden;
@property (nonatomic) BOOL cursorFaded;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cursorRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } secondaryCursorRect;
@property (readonly, nonatomic) SCRElement *cursorElement;
@property (readonly, nonatomic) SCRElement *secondaryCursorElement;
@property (readonly, nonatomic) NSArray *cursorRects;
@property (readonly, nonatomic) NSArray *secondaryCursorRects;
@property (nonatomic) long long magnificationLevel;
@property (nonatomic) BOOL allowMouseCursorSync;
@property (nonatomic) BOOL isMouseTriggered;
@property (nonatomic) BOOL centerInMainScreen;
@property (retain, nonatomic) NSString *hint;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithUserDefaults:(id)a0;
- (void)setCursorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateCursorStyle;
- (void)setCursorRects:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRectFromScreenToWindowCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isValidCursorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_preferencesChangedForKeyPath:(id)a0 value:(id)a1;
- (void)_refreshHighlightCursor;
- (void)_refreshHighlightCursorWithWindowID:(id)a0;
- (void)_registerPreferenceObservers;
- (void)_registerWindowObservers;
- (void)_resetHintIfNeededForNewElement:(id)a0 currentElement:(id)a1;
- (void)_syncMouseCursorToVOCursor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unionedCursorRectFromRects:(id)a0;
- (void)_unregisterPreferenceObservers;
- (void)_unregisterWindowObservers;
- (void)_updateHighlightRects:(id)a0 OfCursorView:(id)a1;
- (void)_updateStyleOfCursorView:(id)a0;
- (void)highlightRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withElement:(id)a1;
- (void)highlightRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withElement:(id)a1 withOptions:(id)a2;
- (void)highlightRects:(id)a0 withElement:(id)a1;
- (void)highlightRects:(id)a0 withElement:(id)a1 withOptions:(id)a2;
- (id)hitElementUnderCursor;
- (void)refreshHighlightCursor;
- (void)secondaryHighlightRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withElement:(id)a1;
- (void)secondaryHighlightRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withElement:(id)a1 withOptions:(id)a2;
- (void)secondaryHighlightRects:(id)a0 withElement:(id)a1;
- (void)secondaryHighlightRects:(id)a0 withElement:(id)a1 withOptions:(id)a2;
- (void)setCursorElement:(id)a0;
- (void)setSecondaryCursorElement:(id)a0;
- (void)setSecondaryCursorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSecondaryCursorRects:(id)a0;
- (struct CGImage { } *)takeScreenshotOfBoundedContent;

@end
