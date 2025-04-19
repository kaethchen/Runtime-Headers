@interface MRTransitionFadeThruColor : MRTransition {
    float mColor[4];
}

- (void)setAttributes:(id)a0;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
