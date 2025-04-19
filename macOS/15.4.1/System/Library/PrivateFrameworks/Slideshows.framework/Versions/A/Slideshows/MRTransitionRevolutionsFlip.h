@class MRImage, NSMutableArray;

@interface MRTransitionRevolutionsFlip : MRTransition {
    unsigned int _numberOfTilesX;
    unsigned int _numberOfTilesY;
    NSMutableArray *_cubes;
    NSMutableArray *_cubeColumns;
    NSMutableArray *_cubeRows;
    int _flipDirection;
    long long _horizontalCubeCount;
    long long _verticalCubeCount;
    MRImage *_sourceImage;
    MRImage *_destinationImage;
    double _viewBaseWidth;
    double _viewBaseHeight;
}

- (void)cleanup;
- (void)setAttributes:(id)a0;
- (void)unload;
- (void)setupCubesWithLocalAspectRatio:(float)a0;
- (id)initWithTransitionID:(id)a0;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)setFlipDirection:(int)a0;

@end
