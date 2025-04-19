@class NSString;

@interface TSCHCallbackAnimationDelegate : NSObject <CAAnimationDelegate>

@property (retain, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end
