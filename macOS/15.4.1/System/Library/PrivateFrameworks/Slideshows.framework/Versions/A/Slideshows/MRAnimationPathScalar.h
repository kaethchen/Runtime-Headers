@class MCAnimationPath;

@interface MRAnimationPathScalar : NSObject {
    MCAnimationPath *animationPath;
    double value;
    double speed;
    double time;
}

- (void)dealloc;
- (id)initWithMCAnimationPath:(id)a0 andValue:(double)a1;

@end
