@class NSString;

@interface _MKScaleViewTransitionDelegate : NSObject <CAAnimationDelegate>

@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithCompletionHandler:(id /* block */)a0;

@end
