@class CABackdropLayer;

@interface _PXBackdropView : UXView

@property (readonly, nonatomic) CABackdropLayer *backdropLayer;

+ (Class)layerClass;

@end
