@class NSString, NSViewAnimation;

@interface NSTextViewAttachmentEditCompletionAnimation : NSObject <NSAnimationDelegate> {
    NSViewAnimation *_animation;
}

@property (copy) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)animationDidEnd:(id)a0;
- (void)animationDidStop:(id)a0;
- (void)finishWithSuccess:(BOOL)a0;
- (id)initWithImage:(id)a0 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 endRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)startAnimation;

@end
