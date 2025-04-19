@interface SASWelcomeToDeviceViewControllerProvider : NSObject {
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewController;

- (id)init;
- (void).cxx_destruct;
- (void)startAnimation;
- (void)stopAnimation;
- (id)initWithText:(id)a0 finalTextColor:(id)a1 onAnimationCompleteHandler:(id /* block */)a2;

@end
