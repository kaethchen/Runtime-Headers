@class NSString;

@interface AMPShadowLayer : CALayer <CAAnimationDelegate>

@property (nonatomic) BOOL hasRadiosityEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)expandWithAnimation:(BOOL)a0;
- (id)addImageLayerWithInset:(double)a0 verticalOffset:(double)a1;
- (id)addImageLayerWithInset:(double)a0 verticalOffset:(double)a1 glueOptions:(unsigned long long)a2;
- (void)contractWithAnimation:(BOOL)a0;
- (id)getImageLayer;
- (void)prepareAsCircularShape:(BOOL)a0;

@end
