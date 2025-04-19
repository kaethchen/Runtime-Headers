@interface _UXSourceSplitViewSpringLoadingView : NSView {
    BOOL _didSpringLoad;
}

@property (copy) id /* block */ springLoadingHandler;
@property (copy) id /* block */ canSpringLoadHandler;

- (void).cxx_destruct;
- (BOOL)_canSpringLoad;
- (id)_hitTest:(struct CGPoint { double x0; double x1; } *)a0 dragTypes:(id)a1;
- (void)_springLoad;
- (void)_unSpringLoad;
- (void)draggingEnded:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)prepareForDragOperation:(id)a0;
- (void)springLoadingActivated:(BOOL)a0 draggingInfo:(id)a1;
- (unsigned long long)springLoadingEntered:(id)a0;
- (void)springLoadingExited:(id)a0;
- (void)springLoadingHighlightChanged:(id)a0;

@end
