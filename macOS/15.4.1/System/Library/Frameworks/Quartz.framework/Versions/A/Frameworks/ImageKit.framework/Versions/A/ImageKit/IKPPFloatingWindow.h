@class NSString, IKPPFloatingWindowAnimation;

@interface IKPPFloatingWindow : NSWindow <NSAnimationDelegate> {
    unsigned int _cid;
    IKPPFloatingWindowAnimation *_animation;
    id /* block */ _completionBlock;
    id _floatingWindowDelegate;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destinationRect;
@property (nonatomic) double destinationAngle;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) double upscaleIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (void)setCompletionBlock:(id /* block */)a0;
- (void)animationDidEnd:(id)a0;
- (void)animationDidStop:(id)a0;
- (BOOL)animationShouldStart:(id)a0;
- (void)closeAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 image:(id)a1 circular:(BOOL)a2 screen:(id)a3 delegate:(id)a4;
- (void)startAnimationWithCompletionBlock:(id /* block */)a0;
- (void)stopAnimationAndClose;
- (void)updateAnimationWithProgress:(double)a0;

@end
