@interface MRTransitionSimple3D : MRTransition {
    unsigned int mSubtype;
}

- (void)setAttributes:(id)a0;
- (id)initWithTransitionID:(id)a0;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (id)retainedByUserRenderedImageAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)supportsDirectionOverride;

@end
