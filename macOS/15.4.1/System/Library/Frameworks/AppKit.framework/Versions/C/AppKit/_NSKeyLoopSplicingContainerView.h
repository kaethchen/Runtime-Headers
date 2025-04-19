@class NSView;

@interface _NSKeyLoopSplicingContainerView : NSView {
    NSView *_externalNextKeyView;
}

@property (weak, nonatomic) NSView *firstKeyView;
@property (weak, nonatomic) NSView *lastKeyView;

- (void).cxx_destruct;
- (void)setNextKeyView:(id)a0;

@end
