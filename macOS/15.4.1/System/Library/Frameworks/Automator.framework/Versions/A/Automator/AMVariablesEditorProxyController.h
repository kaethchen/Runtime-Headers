@class AMVariablesEditorWindow, NSArray, EditorWindowCloseAnimation, AMVariablesEditorView, NSValue, AMWorkflowView, NSString, EditorWindowOpenAnimation, NSNumber;

@interface AMVariablesEditorProxyController : NSObject <NSAnimationDelegate>

@property (class, readonly, nonatomic) AMVariablesEditorProxyController *sharedInstance;

@property struct CGPoint { double x; double y; } tokenFieldPoint;
@property (retain) NSArray *nibTopLevelObjects;
@property BOOL ignoreDidResign;
@property BOOL isAnimating;
@property BOOL positionAbove;
@property BOOL positionLeft;
@property (retain) EditorWindowOpenAnimation *openAnimation;
@property (retain) EditorWindowCloseAnimation *closeAnimation;
@property (weak) AMVariablesEditorView *_editorView;
@property (weak) AMVariablesEditorWindow *_editorWindow;
@property (weak) id _control;
@property (retain) NSValue *_clickedPointValue;
@property (retain) NSValue *_frameValue;
@property (retain) NSNumber *_isTokenFieldNumber;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } _bestEditorWindowPosition;
@property (readonly, nonatomic) BOOL detailsWindowIsVisible;
@property (weak) AMWorkflowView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)animationDidEnd:(id)a0;
- (BOOL)animationShouldStart:(id)a0;
- (void)windowDidUpdate:(id)a0;
- (void)updateControl:(id)a0;
- (void)animateWindowRelocate:(id)a0;
- (void)animateWindowScale:(id)a0;
- (BOOL)closeDetailsWindow:(id)a0;
- (void)displayDetailsWindow:(id)a0;
- (void)parentWindowDidMove:(id)a0;
- (void)parentWindowDidResignKey:(id)a0;
- (void)parentWindowDidResize:(id)a0;
- (void)parentWindowWillBeginSheet:(id)a0;
- (void)parentWindowWillClose:(id)a0;
- (void)restoreWindowTransform;
- (void)saveWindowTransform;
- (void)setEditorWindowScale:(double)a0;
- (void)updateControl:(id)a0 clickedPoint:(id)a1 frame:(id)a2 isTokenField:(id)a3;
- (void)window:(id)a0 didProcessEvent:(id)a1;

@end
