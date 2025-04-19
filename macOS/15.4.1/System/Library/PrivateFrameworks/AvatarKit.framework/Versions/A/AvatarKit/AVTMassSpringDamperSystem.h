@interface AVTMassSpringDamperSystem : NSObject {
    float _mass;
    float _stiffness;
    float _damping;
    float _velocity;
    BOOL _allowsOverdamping;
    double w0;
    double zeta;
    double wd;
}

- (id)init;
- (void)_updateParameters;

@end
