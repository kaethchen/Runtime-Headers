@class NSMutableArray;

@interface MRTransitionTileFlip : MRTransition {
    NSMutableArray *mSortedTiles;
    unsigned int mNumberOfTilesX;
    unsigned int mNumberOfTilesY;
    float mFlipOverlap;
    BOOL mUseLighting;
    double _x0;
    double _y0;
    double _x;
    double _y;
}

- (void)cleanup;
- (void)setAttributes:(id)a0;
- (void)unload;
- (double)pzrEnd:(id)a0;
- (void)buildTiles;
- (id)initWithTransitionID:(id)a0;
- (double)pzrCancel:(id)a0;
- (double)pzrStart:(id)a0;
- (double)pzrUpdate:(id)a0;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)supportsDirectionOverride;

@end
