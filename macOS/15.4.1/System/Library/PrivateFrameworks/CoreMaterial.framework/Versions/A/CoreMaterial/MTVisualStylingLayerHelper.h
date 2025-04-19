@class CALayer, MTCoreMaterialVisualStylingProvider;
@protocol MTVisualStylingCapable;

@interface MTVisualStylingLayerHelper : NSObject

@property (weak, nonatomic) CALayer<MTVisualStylingCapable> *layer;
@property (readonly, nonatomic) MTCoreMaterialVisualStylingProvider *visualStylingProvider;

+ (id)CA_attributes;
+ (id)_attributeKeys;
+ (id)_unserializedAttributeKeys;

- (void).cxx_destruct;
- (void)_configureVisualStylingProviderIfNecessary;
- (BOOL)_updateVisualStylingProvider;
- (id)initWithVisualStylingCapableLayer:(id)a0;
- (void)visualStylingCapableLayer:(id)a0 didChangeValueForKey:(id)a1;

@end
