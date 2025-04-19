@interface AppKit._NSIntelligenceUIWashAnimationView : NSView {
    void /* unknown type, empty encoding */ animationCount;
    void /* unknown type, empty encoding */ animationCompletionHandler;
    void /* unknown type, empty encoding */ gradientView;
}

@property (nonatomic) BOOL clipsToBounds;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)animateWithStartColor:(id)a0 endColor:(id)a1 completionHandler:(id /* block */)a2;
- (void)animateWithStartColor:(id)a0 endColor:(id)a1 normalizedStartPoint:(struct CGPoint { double x0; double x1; })a2 normalizedEndPoint:(struct CGPoint { double x0; double x1; })a3 completionHandler:(id /* block */)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
