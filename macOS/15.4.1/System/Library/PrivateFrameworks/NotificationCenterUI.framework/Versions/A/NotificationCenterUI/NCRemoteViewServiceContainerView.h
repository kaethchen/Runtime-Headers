@protocol NCRemoteServiceContainerViewDelegate;

@interface NCRemoteViewServiceContainerView : NSView {
    BOOL _inSetFrame;
}

@property (weak, nonatomic) id<NCRemoteServiceContainerViewDelegate> delegate;
@property (nonatomic) BOOL sendFrameChangesToHost;

- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
