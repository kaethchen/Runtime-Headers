@class NSTrackingArea;
@protocol ICAutoCompleteSuggestionsTableViewDelegate;

@interface ICAutoCompleteSuggestionsTableView : NSTableView

@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (nonatomic) BOOL isTrackingMouse;
@property (nonatomic) BOOL isObservingWindow;
@property (weak, nonatomic) id<ICAutoCompleteSuggestionsTableViewDelegate> autoCompleteSuggestionsTableViewDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)allowsVibrancy;
- (void)awakeFromNib;
- (BOOL)canBecomeKeyView;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (void)scrollPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)selectRowForEvent:(id)a0;
- (void)beginMouseTrackingIfNecessary;
- (void)endMouseTracking;

@end
