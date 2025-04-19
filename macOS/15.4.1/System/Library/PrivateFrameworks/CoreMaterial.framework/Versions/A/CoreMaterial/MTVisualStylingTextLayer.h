@class NSString, MTVisualStylingLayerHelper;

@interface MTVisualStylingTextLayer : CATextLayer <MTVisualStylingCapable>

@property (retain, nonatomic) MTVisualStylingLayerHelper *helper;
@property (copy, nonatomic) NSString *recipe;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *visualStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)CA_attributes;
+ (id)_attributeKeys;
+ (id)_unserializedAttributeKeys;

@end
