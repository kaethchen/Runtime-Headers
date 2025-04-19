@class MRAnimationContext, MCPlugParallel, MCAnimationPath, MRAnimationPathScalar;

@interface MRParallelPlugger : NSObject {
    MCAnimationPath *mAnimationPathParam1;
    MCAnimationPath *mAnimationPathParam2;
    MCAnimationPath *mAnimationPathXY;
    MRAnimationPathScalar *mAnimationPathX;
    MRAnimationPathScalar *mAnimationPathY;
    MRAnimationPathScalar *mAnimationPathZ;
    MRAnimationPathScalar *mAnimationPathScale;
    MRAnimationPathScalar *mAnimationPathRX;
    MRAnimationPathScalar *mAnimationPathRY;
    MRAnimationPathScalar *mAnimationPathRZ;
    MRAnimationPathScalar *mAnimationPathOpacity;
    MRAnimationContext *mAnimationContext;
    BOOL mPlugWasSetSinceLastRendering;
}

@property (copy, nonatomic) MCPlugParallel *plug;
@property (nonatomic) unsigned char currentLayoutIndex;
@property (nonatomic) BOOL needsUpdate;

- (void)dealloc;
- (id)init;
- (BOOL)applyAtTime:(double)a0 toSublayer:(id)a1 withArguments:(id)a2;
- (void)setOpacityAnimationPath:(id)a0;

@end
