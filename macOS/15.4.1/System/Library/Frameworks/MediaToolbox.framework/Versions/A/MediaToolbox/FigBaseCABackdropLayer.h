@interface FigBaseCABackdropLayer : CABackdropLayer <FigPiPableLayer>

@property (nonatomic) BOOL preventsChangesToSublayerHierarchy;

+ (id)defaultActionForKey:(id)a0;

- (id)init;
- (id)actionForKey:(id)a0;
- (void)addSublayer:(id)a0;
- (void)insertSublayer:(id)a0 above:(id)a1;
- (void)insertSublayer:(id)a0 atIndex:(unsigned int)a1;
- (void)insertSublayer:(id)a0 below:(id)a1;
- (void)removeFromSuperlayer;
- (void)replaceSublayer:(id)a0 with:(id)a1;
- (void)setSublayers:(id)a0;

@end
