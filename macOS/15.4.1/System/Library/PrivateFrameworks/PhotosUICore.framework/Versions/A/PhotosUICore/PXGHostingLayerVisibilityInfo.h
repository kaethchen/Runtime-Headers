@protocol PXGHostingLayerVisibilityInfoDelegate;

@interface PXGHostingLayerVisibilityInfo : NSObject

@property (weak, nonatomic) id<PXGHostingLayerVisibilityInfoDelegate> delegate;
@property (nonatomic) BOOL isVisible;

- (id)init;
- (void).cxx_destruct;

@end
