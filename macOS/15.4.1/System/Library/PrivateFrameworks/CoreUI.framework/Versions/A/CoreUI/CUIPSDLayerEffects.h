@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject

@property BOOL visible;
@property double effectScale;
@property (retain) NSMutableDictionary *effectList;

- (void)dealloc;
- (id)init;
- (void)addLayerEffectComponent:(id)a0;
- (id)colorOverlay;
- (id)dropShadow;

@end
