@class NSString, BKMutableNoteMarginView;
@protocol AKNoteEditorWindowDelegate;

@interface AKNoteEditorWindowController : AKNoteAnimationWindowController <BKMutableNoteMarginViewDelegate>

@property (retain, nonatomic) BKMutableNoteMarginView *mutableMarginView;
@property (nonatomic) unsigned long long presentedEdge;
@property (nonatomic) BOOL isOpening;
@property (nonatomic) BOOL hasClosed;
@property (retain) id eventMonitor;
@property (weak, nonatomic) id<AKNoteEditorWindowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newNoteWindowController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (void)setTheme:(id)a0;
- (id)theme;
- (void)mutableMarginViewTextDidChange:(id)a0;
- (void)marginViewWasClicked:(id)a0;
- (id)noteText;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_toRectForSize:(struct CGSize { double x0; double x1; })a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fromEdge:(unsigned long long)a2 forWindow:(id)a3;
- (double)p_windowHeightForWidth:(double)a0;
- (void)presentEditorWindowForWindow:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 edge:(unsigned long long)a2 useScaling:(BOOL)a3;
- (void)setNoteText:(id)a0;
- (double)suggestedHeightForWidth:(double)a0;

@end
