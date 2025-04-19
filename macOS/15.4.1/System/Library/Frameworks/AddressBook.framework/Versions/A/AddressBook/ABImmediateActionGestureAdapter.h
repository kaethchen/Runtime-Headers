@class NSString, NSView, NSImmediateActionGestureRecognizer;

@interface ABImmediateActionGestureAdapter : NSObject <NSImmediateActionAnimationController> {
    id _target;
    SEL _action;
    NSView *_view;
    NSImmediateActionGestureRecognizer *_gestureRecognizer;
}

@property (retain) id representedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)recognizerDidCompleteAnimation:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)beginWatchingView:(id)a0;
- (void)handleGesture;

@end
