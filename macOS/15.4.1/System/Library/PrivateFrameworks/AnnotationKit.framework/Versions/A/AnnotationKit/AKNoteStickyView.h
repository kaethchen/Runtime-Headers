@class NSBox, NSTrackingArea, AKAnnotationTheme, NSColor;
@protocol AKNoteStickyViewDelegate;

@interface AKNoteStickyView : NSView

@property (retain, nonatomic) NSBox *boxView;
@property BOOL mouseInView;
@property BOOL clickPossible;
@property (retain, nonatomic) NSTrackingArea *mouseTrackingArea;
@property (retain, nonatomic) AKAnnotationTheme *theme;
@property (nonatomic) BOOL isNoteMarker;
@property (retain, nonatomic) NSColor *themeColor;
@property (weak, nonatomic) id<AKNoteStickyViewDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;
- (void)p_updateColors;

@end
