@class NSRemoteView;

@interface InterPosingView : NSView

@property (weak, nonatomic) NSRemoteView *remoteView;

- (void).cxx_destruct;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andRemoteView:(id)a1;

@end
