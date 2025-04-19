@interface GKCheckerboardNoiseSource : GKNoiseSource

@property (nonatomic) double squareSize;

+ (id)checkerboardNoiseWithSquareSize:(double)a0;

- (id)init;
- (double)valueAt:(SEL)a0;
- (id)initWithSquareSize:(double)a0;
- (id)cloneModule;

@end
