@class NSString, PFPosterOrientedLayout;

@interface _PIParallaxLayerStackScalePolicy : NSObject <NUScalePolicy>

@property (readonly, nonatomic) PFPosterOrientedLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;
- (struct { long long x0; long long x1; })scaleForImageSize:(struct { long long x0; long long x1; })a0;

@end
