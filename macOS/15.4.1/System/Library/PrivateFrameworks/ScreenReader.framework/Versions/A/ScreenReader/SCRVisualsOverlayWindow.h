@class AXVHighlightOutlineView, SCRVisualsHighlightCursor, SCRCUserDefaults, SCRVisualsHighlightCurtain, AXVOverlayWindow, SCRVisualsEncircledPoint;

@interface SCRVisualsOverlayWindow : NSObject

@property (retain, nonatomic, setter=_setOverlayWindow:) AXVOverlayWindow *_overlayWindow;
@property (retain, nonatomic, setter=_setHighlightView:) AXVHighlightOutlineView *_highlightView;
@property (retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults;
@property (readonly, nonatomic) SCRVisualsHighlightCursor *voCursor;
@property (nonatomic, setter=setVOCursorEnabled:) BOOL voCursorEnabled;
@property (nonatomic) BOOL cursorTemporarilyHidden;
@property (readonly, nonatomic) SCRVisualsHighlightCurtain *highlightCurtain;
@property (nonatomic) BOOL highlightCurtainEnabled;
@property (readonly, nonatomic) SCRVisualsEncircledPoint *encircledPoint;
@property (nonatomic) BOOL encircledPointEnabled;

- (void).cxx_destruct;
- (void)_hideCursor;
- (void)_showCursor;
- (void)refreshVOCursor;
- (void)_placeViewAboveSiblings:(id)a0;
- (void)_showCursorIfNeeded;
- (void)_updateOverlayWindowVisibility;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToWindowFromScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)highlightWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithUserDefaults:(id)a0 overlayWindow:(id)a1;
- (void)showEncircledPoint:(BOOL)a0;
- (void)showHighlightCurtain:(BOOL)a0;

@end
