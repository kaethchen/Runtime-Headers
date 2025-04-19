@interface GKSpheresNoiseSource : GKNoiseSource

@property (nonatomic) double frequency;

+ (id)spheresNoiseWithFrequency:(double)a0;

- (id)init;
- (double)valueAt:(SEL)a0;
- (id)initWithFrequency:(double)a0;
- (id)cloneModule;

@end
