@interface MREffectDotProgress : MREffect {
    short _selectedDotIndex;
    short _countOfDots;
}

- (void)setAttributes:(id)a0;
- (BOOL)isNative3D;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
