@class NSString, AKAnnotationTheme, NSTextView, AKNoteStickyView;
@protocol AKNoteMarginViewDelegate;

@interface AKNoteMarginView : NSView <AKNoteStickyViewDelegate>

@property (nonatomic) BOOL clickEligible;
@property (retain, nonatomic) NSTextView *textView;
@property (retain, nonatomic) AKNoteStickyView *noteView;
@property (retain, nonatomic) AKAnnotationTheme *theme;
@property (retain, nonatomic) NSString *noteText;
@property (weak, nonatomic) id<AKNoteMarginViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)noteFont;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)stickyViewWasClicked:(id)a0;

@end
