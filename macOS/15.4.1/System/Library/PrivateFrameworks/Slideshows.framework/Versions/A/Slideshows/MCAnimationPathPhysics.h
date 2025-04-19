@interface MCAnimationPathPhysics : MCAnimationPath

@property (nonatomic) float staticFriction;
@property (nonatomic) float kineticFriction;
@property (nonatomic) float skinFriction;

- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (id)initWithImprint:(id)a0;

@end
