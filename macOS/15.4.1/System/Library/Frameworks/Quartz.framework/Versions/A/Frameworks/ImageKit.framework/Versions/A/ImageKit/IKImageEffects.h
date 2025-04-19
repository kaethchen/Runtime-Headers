@class NSArray, IKImageEffectsView;

@interface IKImageEffects : NSObject {
    IKImageEffectsView *_ikImageEffectsView;
}

@property (retain) NSArray *ikImageEffectsViewTLO;

- (id)imageEffectsView;

@end
