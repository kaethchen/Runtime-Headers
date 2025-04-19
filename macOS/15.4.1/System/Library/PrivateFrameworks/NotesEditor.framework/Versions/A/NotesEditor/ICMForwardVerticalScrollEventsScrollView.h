@interface ICMForwardVerticalScrollEventsScrollView : ICMOverlayScrollView

@property (nonatomic, getter=isScrolling) BOOL scrolling;
@property (nonatomic, getter=isScrollingDisabled) BOOL scrollingDisabled;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollWheel:(id)a0;
- (void)icmDidEndScrolling:(id)a0;
- (void)icmListemForScrollGestures;
- (void)icmWillStartScrolling:(id)a0;

@end
