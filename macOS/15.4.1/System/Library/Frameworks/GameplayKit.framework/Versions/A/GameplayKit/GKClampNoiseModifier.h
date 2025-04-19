@interface GKClampNoiseModifier : GKNoiseModifier {
    double _lowerBound;
    double _upperBound;
}

- (id)init;
- (double)valueAt:(SEL)a0;
- (id)initWithLowerBound:(double)a0 upperBound:(double)a1;
- (id)cloneModule;
- (id)initWithInputModuleCount:(unsigned long long)a0;
- (int)requiredInputModuleCount;

@end
