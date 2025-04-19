@class NSView, NSVisualEffectView;

@interface _UXContainerView : UXView {
    NSVisualEffectView *_effectView;
}

@property (nonatomic) BOOL wantsMaterialBackground;
@property (retain, nonatomic) NSView *contentView;

- (void).cxx_destruct;
- (void)wrapContentView;

@end
