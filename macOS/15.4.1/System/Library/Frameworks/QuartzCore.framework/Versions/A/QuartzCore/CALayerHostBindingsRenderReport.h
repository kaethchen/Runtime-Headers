@class NSDictionary;

@interface CALayerHostBindingsRenderReport : NSObject

@property (readonly, nonatomic) unsigned int contextId;
@property (readonly, nonatomic) struct CGSRegionObject { } *unobscuredShape;
@property (readonly, nonatomic) struct CGSRegionObject { } *originalShape;
@property (readonly, nonatomic) unsigned int bindingFlags;
@property (readonly, nonatomic) NSDictionary *securityAnalysisInfo;

- (void)dealloc;
- (id)initWithContextId:(unsigned int)a0 unobscuredShape:(struct CGSRegionObject { } *)a1 originalShape:(struct CGSRegionObject { } *)a2 bindingFlags:(unsigned int)a3 securityAnalysisInfo:(id)a4;

@end
